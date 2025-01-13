#include "widget.h"

#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //(사용자 정의) widget(w)생성
    Widget w;

    //label 추가배치
    QLabel *label = new QLabel("<font color = blue>" "Hello, World! </font>", &w);
    label->setGeometry(10, 90, 75, 35);
    /*
    QPushButton quit("QUIT", &w);       //pushbutton 생성 및 w에 추가
    quit.setGeometry(10, 40, 75, 35);   //.setGeometry(우상단x, 우상단y, 넓이, 높이

    //connect(sender, signal, receiver, slot)
    QObject::connect(&quit, SIGNAL(clicked()), &a, SLOT(quit()));
    QObject::connect(&w, SIGNAL(clicked()), &a, SLOT(quit()));
    */
    w.show();
    return a.exec();
}
