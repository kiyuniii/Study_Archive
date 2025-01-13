#include "widget.h"
#include <QPushButton>
#include <QLabel>

using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{ }

Widget::~Widget()
{ }


void Widget::setNum() {
    QPushButton *button = dynamic_cast<QPushButton*>(sender());
    QString bStr;

    if(button != nullptr) bStr = button->text();
    if(m_label != nullptr) {
        m_label->setText((lStr == "0"|m_isFirst)?bStr:lStr+bStr));
        m_isFirst = false;
    }
}

void Widget::setOp() {
    QPushButton *button = dynamic_cast<QPushButton*>(sender());
    if(button != nullptr) m_op = button->text();
    if(m_label != nullptr) {
        m_num1 = m_label->text();
        m_isFirst = true;
    }
}



