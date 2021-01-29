#ifndef NASH_DIALOG3_H
#define NASH_DIALOG3_H

#include <QDialog>

namespace Ui {
class nash_Dialog3;
}

class nash_Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit nash_Dialog3(QWidget *parent = nullptr);
    ~nash_Dialog3();

public slots:
    void showD2(int r,int c,QString d);
    void showD2(int r,int c,int d);
    void showD2(int r,int c,long long int d);
    void add_row(int i);
private:
    Ui::nash_Dialog3 *ui;
};

#endif // NASH_DIALOG3_H
