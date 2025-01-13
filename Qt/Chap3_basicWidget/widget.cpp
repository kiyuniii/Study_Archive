#include "widget.h"
#include <QRadioButton>
#include <QButtonGroup>
#include <QCheckBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent) {

    resize(1000, 200);
    buttonGroup0 = new QButtonGroup(this);
    for(int i=0; i<4; i++) {
        QString str0 = QString("RadioButton %1").arg(i+1);
        radioButton[i] = new QRadioButton(str0, this);
        radioButton[i]->move(10, 200+20*i);
        buttonGroup0->addButton(radioButton[i]);
    }

    resize(1000, 200);
    buttonGroup1 = new QButtonGroup(this);
    buttonGroup1->setExclusive(false); //false, true
    connect(buttonGroup1, SIGNAL(idClicked(int)), SLOT(selectButton(int)));
    for(int i=0; i<4; i++) {
        QString str1 = QString("CheckBox %1").arg(i+1);
        checkBox[i] = new QCheckBox(str1, this);
        checkBox[i]->move(10, 200+20*1);
        buttonGroup1->addButton(checkBox[i], i);
    }
}

Widget::~Widget() {}

void Widget::selectButton(int id) {
    //센더(슬롯을 호출한 객체)를 QButtonGroup*으로 캐스팅하여 buttonGroup에 저장
    QButtonGroup *buttonGroup = (QButtonGroup *)sender();
    //id 에 해당하는 체크박스를 QCheckBox*로 캐스팅하여 button에 저장
    QCheckBox *button = (QCheckBox*)buttonGroup->button(id);
    qDebug("CheckBox%d is Selected(%s)", id+1, (button->isChecked()) ? "ON" : "OFF");
}
