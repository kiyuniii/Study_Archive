#!/bin/bash
#사용법: score1.bash

echo -n "점수 입력: "
read score
if (( $score >= 90))
then
	echo A
elif (( $score >= 80))
then
	echo B
elif (( $score >= 70 ))
then	
	echo C
elif (( $score >= 60 ))
then	
	echo D
else
	echo F
fi
