note
	description: "Description.."

class MESSAGE

inherit
	LINKED_LIST [STRING]
		redefine
			make
		end

	STORABLE
		undefine
			is_equal, copy
		end

create
	make

feature {NONE} -- Initialization

	make
		do
			Precursor
			create client_name.make_empty
			extend ("-> ")
		end

feature

	new: BOOLEAN
	over: BOOLEAN
	client_name: STRING
	custom: INTEGER

	set_client_name (s: STRING)
		require
			s_not_void: s /= Void
		do
			client_name := s.twin
		end

	set_over (flag: BOOLEAN)
		do
			over := flag
		end

	set_new (flag: BOOLEAN)
		do
			new := flag
		end

	print_message
		do
			from
				start
			until
				after
			loop
				io.putstring (item)
				forth
			end
		end
end
