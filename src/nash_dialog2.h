#ifndef NASH_DIALOG2_H
#define NASH_DIALOG2_H

#include "nash_books.h"
#include "nash_dialog3.h"
#include "nash_books.h"
#include <QDialog>
#include <QString>
#include <QMap>

namespace Ui {
class nash_Dialog2;
}

class nash_Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit nash_Dialog2(QWidget *parent = nullptr);
    ~nash_Dialog2();
public slots:
    void showList(QString data);
    nash_books getTableArgument(nash_books tmp);
    QString getListArgument();
    void setQmapG(QMap<QString,QList<nash_books> > tmp);
    void setQmapP(QMap<QString,QList<nash_books> > tmp);
    void setQmapW(QMap<QString,QList<nash_books> > tmp);
    void setQmapY(QMap<int, QList<nash_books> > tmp);
    void setTitle(QString title);

private slots:
    void on_listWidget_activated(const QModelIndex &index);

private:
    Ui::nash_Dialog2 *ui;
    nash_Dialog3 *nexp;
    QMap<QString,QList<nash_books>> Genre;
    QMap<QString,QList<nash_books>> Writer;
    QMap<int,QList<nash_books>> Year;
    QMap<QString,QList<nash_books>> Publisher;
};

#endif // NASH_DIALOG2_H
