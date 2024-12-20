/*
### 구조체 ###

#byte alignment
:컴파일러는 일정한 크기 단위로 메모리에 접근
장점) 크기가 다른 구조체에 '패딩바이트'를 추가해 크기정렬, '읽기/쓰기'속도 향상
단점) 차지하는 메모리 크기 증가
struct Example {
    char a;     //1byte(char)+3byte(padding byte)
    int b;      //4byte
    char c;     //1byte(char)+3byte(padding byte)
}               //struct Example = 12byte

-> pragma pack(1);


*/