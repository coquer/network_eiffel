note
	description: "Description.."

class
	CHAT

inherit

	NETWORK_SERVER
		redefine
			receive, received, close
		end

	STORABLE

create
	make_chat

feature
	connections: LINKED_LIST [CONNECTION]
	max_to_poll: INTEGER
	message_out: MESSAGE
	received: detachable MESSAGE
	poll: MEDIUM_POLLER

	make_chat ()
		local
			l_message_out: detachable like message_out
			l_connections: detachable like connections
			l_in: detachable like in
		do
			make (1337)
			max_to_poll := 1
			create poll.make_read_only
			in.set_non_blocking
			l_in := in
			create l_message_out.make
			message_out := l_message_out
			create l_connections.make
			connections := l_connections
			connections.compare_objects
			execute
		end

	process_message
		local
			stop: BOOLEAN
				-- When we receive a message tagged "over", we remove connections
				-- from the list, so we want to exit from the loop...
			pos: INTEGER
		do
			from
				connections.start
			until
				connections.after or stop
			loop
				if connections.item.is_waiting then
					if attached {MESSAGE} retrieved (connections.item.active_medium) as l_message_in then
						if l_message_in.new then
							connections.item.set_client_name (l_message_in.client_name)
							create message_out.make
							message_out.set_client_name (l_message_in.client_name)
							message_out.extend (l_message_in.client_name)
							message_out.extend (" has just joined the server%N")
						elseif l_message_in.over then
							poll.remove_associated_read_command (connections.item.active_medium)
							connections.remove
							create message_out.make
							message_out.set_client_name (l_message_in.client_name)
							message_out.extend (l_message_in.client_name)
							message_out.extend (" has just gone%N")
							stop := True
						else
							message_out := l_message_in.deep_twin
							message_out.put_front (" has just sent that :%N")
							message_out.put_front (message_out.client_name)
							message_out.put_front ("-> ")
						end
						pos := connections.index
						-- l_message_in.print_message
						message_
						out.print_message
						broadcast
						connections.go_i_th (pos)
					end
				end
				if not stop then
					connections.forth
				end
			end
		end

	broadcast
		local
			client_name: detachable STRING
		do
			client_name := message_out.client_name
			if client_name /= Void then
				from
					connections.start
				until
					connections.after
				loop
					if connections.item.client_name /~ client_name then
						message_out.independent_store (connections.item.active_medium)
					end
					connections.forth
				end
			end
		end

	receive
		do
			in.accept
			if attached {like outflow} in.accepted as l_outflow then
				l_outflow.set_blocking
				new_client (l_outflow)
			end
			from
				connections.start
			until
				connections.after
			loop
				connections.item.initialize
				connections.forth
			end
			poll.execute (max_to_poll, 1000)
		end

	new_client (a_flow: attached like outflow)
		local
			new_connection: CONNECTION
		do
			if max_to_poll <= a_flow.descriptor then
				max_to_poll := a_flow.descriptor + 1
			end
			create new_connection.make (a_flow)
			connections.extend (new_connection)

			create message_out.make
			message_out.extend ("Welcome! %N")
			message_out.independent_store (a_flow)

			poll.put_read_command (new_connection)
		end

	close
		do
		end

end
