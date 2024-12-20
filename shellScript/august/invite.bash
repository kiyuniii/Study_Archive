#!/bin/bash
#사용법: ./invite.bash
#저녁에 초대메일을 보낸다.

invitee=(lee shin kim choi)
for person in ${invitee[*]}
do
	echo "당신을 초대합니다."
	mail "${person}@gmail.com"
done
