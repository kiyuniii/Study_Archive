/*
헤더파일의 중복문제를 해결 -> "헤더가드"
    #ifndef _POINT_H_
    #define _POINT_H_
    ...
    #endif
*/

/*
point.h + line.h -> main.c
    line.h에 point.h의 내용이 중복되어 있을 경우,
    line.h에 헤더가드를 만듦(#ifndef, #define ~ #endif)
*/