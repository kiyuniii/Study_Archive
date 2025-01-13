#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QRadioButton;
class QButtonGroup;
class QCheckBox;

class Widget : public QWidget
{
    Q_OBJECT
private:
    QRadioButton *radioButton[4];
    QCheckBox *checkBox[4];
    QButtonGroup *buttonGroup0;
    QButtonGroup *buttonGroup1;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void selectButton(int id);
};
#endif // WIDGET_H
