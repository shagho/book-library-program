/********************************************************************************
** Form generated from reading UI file 'nash_dialog3.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NASH_DIALOG3_H
#define UI_NASH_DIALOG3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_nash_Dialog3
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *nash_Dialog3)
    {
        if (nash_Dialog3->objectName().isEmpty())
            nash_Dialog3->setObjectName(QStringLiteral("nash_Dialog3"));
        nash_Dialog3->resize(726, 493);
        tableWidget = new QTableWidget(nash_Dialog3);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 30, 601, 391));
        tableWidget->setFrameShape(QFrame::Box);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setGridStyle(Qt::DashDotLine);

        retranslateUi(nash_Dialog3);

        QMetaObject::connectSlotsByName(nash_Dialog3);
    } // setupUi

    void retranslateUi(QDialog *nash_Dialog3)
    {
        nash_Dialog3->setWindowTitle(QApplication::translate("nash_Dialog3", "Library Program", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("nash_Dialog3", "Book", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("nash_Dialog3", "Writer", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("nash_Dialog3", "Genre", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("nash_Dialog3", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("nash_Dialog3", "Serial", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("nash_Dialog3", "Publisher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nash_Dialog3: public Ui_nash_Dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NASH_DIALOG3_H
