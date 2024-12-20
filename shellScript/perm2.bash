#!/bin/bash
# 파일의 사용권한과 이름을 프린트
if [ $# -eq 0 ]
then
    echo 사용법: $0 [files]
    exit 1
fi
echo "허가권 파일"

while [ $# -gt 0 ]          # ./perm2.bash 뒤에 파일들이 인수로 와야 실행
do
    file=$1
    if [ -f $file ]
    then
        fileinfo=`ls -l $file`  # 백틱 사용
        perm=`echo "$fileinfo" | cut -d' '  -f1` # 백틱
        echo "$perm $file"
    fi
    shift
done        
