#include "widget.h"
#include <QApplication>
#include <QPushButton>

// 사용자 정의 위젯
Widget::Widget(QWidget *parent): QWidget(parent) {
    //동적 할당
    QPushButton *quit = new QPushButton("Quit", this);
    quit->move(10, 10);
    quit->resize(75, 35);

    //자식 위젯(label, pushbutton -> this: 부모 윈도우에 추가)
    QLabel *label = new QLabel("<font color = blue>" "Hello <i>Qt!</i> </font>", this);
    label->setGeometry(10, 50, 75, 35);
    //quit을 포인터로 선언하여 &quit이 아닌 quit으로 받음
    //connect(quit, SIGNAL(clicked()), qApp, SLOT(slotQuit()));
    //람다함수, []:외부 변수, ():매개변수, ->:반환형,  {}:함수 본문
    connect(quit, &QPushButton::clicked, [](){ qApp->quit();});
}

Widget::~Widget() {

}

void Widget::slotQuit() {
    qDebug("slotQuit");   //디버깅 메시지
    //qApp->quit();       //QMetaObject::invokeMethod(qApp, "quit");
    emit clicked();       //emit 키워드로 시그널 발생
}
