#!/bin/bash

cd $1
for file in *
	if [ -f $file ]
	then
		echo "====================file================="
		head $file
	fi
	if [ -d $file]
	then
		/home/kiyun/shellScript/august/rhead.bash
	$file
	fi
done
