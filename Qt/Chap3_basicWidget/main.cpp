#include "widget.h"
#include <QApplication>
#include <QLCDNumber>
#include <QProgressBar>
#include <QTimer>
#include <QTextBrowser>
#include <QUrl>
#include <QPushButton>
#include <QRadioButton>
#include <QButtonGroup>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Widget w;
    w.setMinimumSize(1000, 1000);
    w.setMaximumSize(1000, 1000);

    QLCDNumber *lcd = new QLCDNumber(&w);
    lcd->setSegmentStyle(QLCDNumber::Flat);
    /*lcd->setBinMode();
     *lcd->setOctMode();
     *lcd->setDecMode();
     *lcd->setHexMode();*/
    lcd->display(20);
    lcd->setDigitCount(35);
    lcd->setGeometry(10, 10, 800, 50);
//--------------------------------------------------------------------
    QProgressBar *prog = new QProgressBar(&w);
    prog->setValue(20);
    /*prog->setOrientation(Qt::Horizontal); default
     *prog->setOrientation(Qt::Vertical);
     *prog->setInvertedAppearance(true); 거꾸로 표기 */
    prog->setGeometry(10, 70, 800, 50);
    QTimer timer;
    int n = 0;
    // setValue(++n%101): n을 1 ~ 100까지 반복(1씩 증가)
    // [&]: 외부에서 람다함수 내부로 변수참조
    QObject::connect(&timer, &QTimer::timeout, [&]{ prog->setValue(++n%101); });
    timer.start(10);    //timer의 간격 = 10ms
//--------------------------------------------------------------------
    //QTextBrowser *tb = new QTextBrowser(&w);
    //tb->setSource(QUrl("index.html"));
//--------------------------------------------------------------------
    QPushButton *pushButton = new QPushButton("Push&Button", &w);
    pushButton->setCheckable(true);
    QObject::connect(pushButton, &QPushButton::toggled, [&](bool flag){
        qDebug() << "TOGGLED";
        if(!flag) a.quit();
    });
    pushButton->setGeometry(10, 130, 800, 50);
//--------------------------------------------------------------------



    w.show();
    return a.exec();
}
