#!/bin/bash

echo enter your reply
cat << MENU
	d : date
	l : list
	w : who
	q : quit
MENU

stop=0
while (($stop == 0))
do
	echo -n ">>"
	read reply
	case $reply in
		"d") date;;
		"l") ls;;
		"w") who;;
		"q") stop=1;;
		*) echo Wrong REPLY
	esac
done
