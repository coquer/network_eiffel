note
	description: "networktest_client application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	SOCKET_RESOURCES

create
	make

feature {NONE} -- Initialization
	make
		local
			socket1: NETWORK_STREAM_SOCKET
		do
			create socket1.make_client_by_port (1337, "192.168.231.132")
			socket1.connect
			process (socket1)
			socket1.cleanup
		end

	process (socket1: NETWORK_STREAM_SOCKET)
		-- create a MESSAGE object and sends it to the server
		local
			msg: MESSAGE
		do
			create msg.make ("This is my message%N")
			print ("Trying to send message...%N")
			socket1.independent_store (msg)
		end

end
