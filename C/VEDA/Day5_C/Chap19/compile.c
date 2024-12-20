/*
Error: undefined reference to ...
    compile하고 link하려는데 못 찾을 때
    source나 library를 못 찾을 때 주로 발생

컴파일(main.c): $gcc -c main.c
컴파일(sub.c):  $gcc -c sub.c
링크: $gcc main.c sub.c -o calc.exe  
- crt, library등이 붙어 용량 증가

*/