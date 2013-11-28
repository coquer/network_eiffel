note
	description: "NetworkTest application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	SOCKET_RESOURCES
	STORABLE

create
	make

feature {NONE} -- Initialization
	thumbs: INTEGER

	make
		local
			count: INTEGER;
			socket1: detachable NETWORK_STREAM_SOCKET;
		do
			print ("Starting server...%N")
			create socket1.make_server_by_port (1337) -- Set port for listening
			from
				socket1.listen (5)
				count := 0
			until
				count = 4
			loop
				process (socket1)
				count := count + 1
			end
			socket1.cleanup
		rescue
			if socket1 /= Void then
				socket1.cleanup
			end
		end

	process (socket1: NETWORK_STREAM_SOCKET)
		-- Receives an objevt
		do
			print ("Waiting for client...%N")
			socket1.accept -- Accepts incomming connection
			print ("Client connected%N")
			if attached socket1.accepted as socket2 then -- If connection suceeds
				if attached {MESSAGE} retrieved (socket2) as temp then -- Checks if MESSAGE object is attatched
					print (temp.getmessage) -- Calls function on MESSAGE object
					thumbs := thumbs + 1
					if (thumbs = 4) then
						print ("ALL READY!!")
					end
				else
					print ("I don't want that shit.. FUCK YOU!") -- Complains if incorrect object type
				end
				socket2.close
			end
		end

end
