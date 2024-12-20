    union student       //8byte(cuz, double > int)
{
    int num;        //4byte
    double grade;   //8byte
};

/*
Title: To union
=====================================
struct bits_tag {       
    unsigned int a:8    //bit단위로 쪼갬, 32bit에서 8bit를 a
    unsigned int b:8    //a 다음의 8bit를 b로 
    unsigned int c:8    //b 다음의 8bit를 c로
    unsigned int d:8    //c 다음의 8bit를 d로 
}

union register_tag {
    struct bits_tag B;  
    insigned int U;    
}

    {
        union register_tag myregister;
        myregister.U = 0x12345678;
        printf("%d", myregister.B.c);
    }










*/