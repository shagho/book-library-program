#ifndef NASH_DIALOG1_H
#define NASH_DIALOG1_H

#include "nash_borrowing.h"
#include "nash_books_table.h"
#include "nash_dialog2.h"
#include <QDialog>

namespace Ui {
class nash_Dialog1;
}

class Nash_Dialog1 : public QDialog,public nash_Borrowing
{
    Q_OBJECT

public:
    explicit Nash_Dialog1(QWidget *parent = nullptr);
    ~Nash_Dialog1();

public slots:
    void showD2(int r, int c, int d);
    void showD2(int r, int c, QString d);
    void showD2(int r, int c, long long int d);
    void showTable();
    void AddRows(int r);
    void RemoveAllRows();


private slots:
    void on_tableWidget_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_sort_book_clicked();

    void on_sort_writer_clicked();

    void on_sort_genre_clicked();

    void on_sort_year_clicked();

    void on_sort_serial_clicked();

    void on_sort_publisher_clicked();

    void on_pushButton_3_clicked();

    void on_Genre_group_clicked();

    void on_Writer_group_clicked();

    void on_Year_group_clicked();

    void on_Publisher_group_clicked();

    void on_Search_button_clicked();

    void on_lineEdit_7_returnPressed();

    void on_Lending_button_clicked();

    void on_tableWidget_cellActivated(int row, int column);

    void on_Del_lend_button_clicked();

    void UpdateTime();


private:
    Ui::nash_Dialog1 *ui;

    QTimer *timer_1s;

    nash_books_table btt;

    nash_Dialog2 *nexp2;

};

#endif // DIALOG1_H
