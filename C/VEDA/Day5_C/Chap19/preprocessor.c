/*
#전처리기(preprocessor)
cpp.exe -> C preprocessor
    ie. #include, #define ...
        #include < ... > : compiler가 이미 위치를 알고 있음
        #include " ... " : 위치를 몰라서 .c의 파일 위치를 찾음
            -I : path를 같이 작성해주는 옵션
        #define : MACRO, 정의
            - MACRO 상수,     ie. PI = 3.14             -> 대신 "const"쓰자!
            - MACRO 함수,     ie. MUL(a,b) ((a) * (b))  -> 대신 "인라인함수"쓰자! / Cpp,python -> "람다 식"
                *인라인함수 :  함수를 사용하는 곳에 함수의 내용을 직접 박아서 씀
                            (간단한)함수를 사용할 때마다 점프해서 호출할 필요 x
                            = 함수 파이프라인을 해치지 않음                            
                
                Title: To inline function
                ===============================
                inline int sum(int a, int b){
                    return a+b;
                }

                {
                    a = sum(c,d);
                }

#이미 정의된 매크로
ie. __FILE__, __FUNCTION__, __LINE__, __DATA__, __TIME__
- Debugging할 때 유용

# 매크로 연산자 '#'과 '##'  ->  비중 X
- ##

# 조건부 컴파일 지시자
: 참,거짓을 따져서 참인 부분만 남김
ie. #if, #else, #elif, #ifdef, #ifndef, #endif ...
    #ifdef : 뒤에 있는 내용이 define 되어있으면 참
        예) #define PI = 3.14
            #ifdef PI
                circle = 10;
            + 뒤의 조건을 여러개로 하려면, #if(defined(...) && (...))

# #pragma 지시자
    $gcc -c hello.c
    -c, -E, -S, ...
    compiler에게 명령을 내릴 수 있는 지시자(option)
        예) #pragma pack(push,1)
            ...
            #pragma pack(pop)

#error : compile을 끝냄
*/