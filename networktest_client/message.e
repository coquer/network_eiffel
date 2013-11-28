note
	description: "Summary description for {MESSAGE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MESSAGE

inherit
	STORABLE

create
	make

feature -- Initialization
	message: STRING

	make(msg: STRING)
	do
		message := msg
	end

	setMessage(msg: STRING)
	do
		message := msg
	end

	getMessage: STRING
	do
		Result := message
	end
end
