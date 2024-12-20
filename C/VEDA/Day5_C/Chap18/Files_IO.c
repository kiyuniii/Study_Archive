/*
Title: To file
====================================
1. 고수준 파일 입출력   //C library가 지원하는 고수준(무거운) 파일입출력
    FILE *fp;
    fp = fopen("...", "rw");                   //file = 구조체
        f-
            fprintf("");
2. 저수준 파일 입출력   //저수준, 아랫단에서 사용하는 파일입출력
    int fd = open("....", O_flag, permission);  //fd = File Descriptor
    
    read/write/close ....


file Operations on OS(ie. Linux) -> 저수준 파일입출력 사용(Unix체제 용이)
*/

/*
- fgetc/fputc
- stdin/stdout/stderr
*/

/*
Title: To txt vs. bin
    Unix
        ascii code
            10 - \n
            13 - \r     Nextline = carriageReturn + linefeed(tab)
        binary

    Windows
        textmode
            \n ==> \n\r
                ex) printf("hello world! \n");

    -> 파일형태와 개방모드가 다른경우 문제 생길 수 있다
        ex) wb(write, binary) -> rt(read, text)
        - "wb" = write by binary
            * fwrite( struct(data), ...)        //인간이 읽을 수 없는 문자
        - "wt", "w" = write by text
            * fprintf(...)              //인간이 읽을 수 있는 문자(.json, .xml...)
    
    
        
*/