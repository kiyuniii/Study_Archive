#!/bin/bash

lshead() {
	echo "func start, instance $1"
	date
	echo "directory $1 내의 처음 3개 파일만 리스트"
	ls -l $1 | head -4
}
