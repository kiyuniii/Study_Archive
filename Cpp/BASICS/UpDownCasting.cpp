#include <iostream>
#include <string>
using namespace std;

class Point {       //set(), showPoint()
private:
    int x, y;
public:
    void set(int x, int y) {    //setter로t 생성자 대체?
        this->x = x;
        this->y = y;
    }
    void showPoint() {
        cout << "(" << x << "," << y << ')' << endl;
    }
};

class ColorPoint : public Point {   //setColor(), ColorPoint(), showColorPoint()
private:    
    string color;
public:
    void setColor(string color) {
        this->color = color;
    }
    void showColorPoint();
};

void ColorPoint::showColorPoint() {
    cout << color << ':';
    showPoint();
}

class Casting : public ColorPoint {
private:
    int select;
public:
    Casting(int select) {
        this->select = select;
    }
    ~Casting() { }

    void Select() {
        if(select == 1)
            UpCasting();
        else if(select == 2) 
            DownCasting();
        else
            cout << "Enter the right number(UpCasting(1), DownCasting(2)): ";
    }
    void UpCasting() {
        ColorPoint cp;          //파생변수
        ColorPoint *pDer = &cp; //파생포인터 -> 파생변수
        Point *pBase = pDer;    //[업캐스팅]기본포인터 -> 파생포인터
                                //파생객체를 기본객체처럼 사용
        pDer->set(3,4);         //파생객체 사용(기본객체를 쓴 것과 같은효과)
        pBase->showPoint();     //기본객체 사용
        pDer->setColor("Red");  //파생포인터->파생함수
        pDer->showColorPoint(); //파생포인터->파생함수
      //pBase->showColorPoint();//컴파일 에러, showColorPoint()는 Point(기본)멤버 X
      /*
      set(3,4) = 기본클래스 객체 멤버함수
      pDer->set(3,4) = 파생클래스 객체 멤버함수
        파생클래스의 객체는 기본클래스의 멤버함수와 파생클래스의 멤버함수 모두 가지고 있다.
            pDer->set(); : 파생객체의 (기본클래스에 정의 된) 멤버함수
            pDer->setColor(); : 파생객체의 (파생클래스에 정의 된) 멤버함수
            pBase->set(); : 기본객체의 (기본클래스에 정의 된) 멤버함수 (=그냥 기본객체의 멤버함수)
            pBase->setColor(); : 상속관계에 의해 불가능(컴파일 에러)
      */
    }
    void DownCasting() {
        ColorPoint cp;
        ColorPoint *pDer;
        Point *pBase;
        pBase->set(3,4);
        pBase->showPoint();
    
        pDer = (ColorPoint *)pBase; //[다운캐스팅]
        pDer->setColor("Red");
        pDer->showColorPoint();
    }
};

int main() {
    int a;

    cout << "Enter the number(UpCastingf(1), DownCasting(2)): ";
    cin >> a;
    Casting casting(a);
    casting.Select();
}