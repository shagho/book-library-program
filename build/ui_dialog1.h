/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NASH_DIALOG1_H
#define UI_NASH_DIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nash_Dialog1
{
public:
    QTableWidget *tableWidget;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QFormLayout *formlayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sort_book;
    QPushButton *sort_writer;
    QPushButton *sort_genre;
    QPushButton *sort_year;
    QPushButton *sort_serial;
    QPushButton *sort_publisher;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QStringLiteral("Dialog1"));
        Dialog1->resize(909, 421);
        tableWidget = new QTableWidget(Dialog1);
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
        tableWidget->setGeometry(QRect(320, 80, 551, 261));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragEnabled(false);
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setTextElideMode(Qt::ElideNone);
        tableWidget->setGridStyle(Qt::DashDotLine);
        tableWidget->setSortingEnabled(false);
        splitter = new QSplitter(Dialog1);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 90, 251, 231));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        formlayout = new QFormLayout(layoutWidget);
        formlayout->setObjectName(QStringLiteral("formlayout"));
        formlayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formlayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(50);

        formlayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formlayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaxLength(30);

        formlayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formlayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formlayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        lineEdit_4->setMaxLength(4);
        lineEdit_4->setFrame(true);

        formlayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formlayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        lineEdit_5->setMaxLength(12);

        formlayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formlayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setInputMethodHints(Qt::ImhNone);

        formlayout->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMaxLength(40);

        formlayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        splitter->addWidget(layoutWidget1);
        widget = new QWidget(Dialog1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(310, 30, 566, 51));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sort_book = new QPushButton(widget);
        sort_book->setObjectName(QStringLiteral("sort_book"));

        horizontalLayout_2->addWidget(sort_book);

        sort_writer = new QPushButton(widget);
        sort_writer->setObjectName(QStringLiteral("sort_writer"));

        horizontalLayout_2->addWidget(sort_writer);

        sort_genre = new QPushButton(widget);
        sort_genre->setObjectName(QStringLiteral("sort_genre"));

        horizontalLayout_2->addWidget(sort_genre);

        sort_year = new QPushButton(widget);
        sort_year->setObjectName(QStringLiteral("sort_year"));

        horizontalLayout_2->addWidget(sort_year);

        sort_serial = new QPushButton(widget);
        sort_serial->setObjectName(QStringLiteral("sort_serial"));

        horizontalLayout_2->addWidget(sort_serial);

        sort_publisher = new QPushButton(widget);
        sort_publisher->setObjectName(QStringLiteral("sort_publisher"));

        horizontalLayout_2->addWidget(sort_publisher);


        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Library Program", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog1", "Book", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog1", "Writer", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Dialog1", "Genre", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Dialog1", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Dialog1", "Serial", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Dialog1", "Publisher", nullptr));
        label->setText(QApplication::translate("Dialog1", "Book:", nullptr));
        lineEdit->setInputMask(QString());
        label_2->setText(QApplication::translate("Dialog1", "Writer:", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        label_3->setText(QApplication::translate("Dialog1", "Genre:", nullptr));
        label_4->setText(QApplication::translate("Dialog1", "Year:", nullptr));
        lineEdit_4->setInputMask(QString());
        lineEdit_4->setText(QString());
        label_5->setText(QApplication::translate("Dialog1", "Serial:", nullptr));
        lineEdit_5->setInputMask(QString());
        label_6->setText(QApplication::translate("Dialog1", "Publisher:", nullptr));
        lineEdit_6->setInputMask(QString());
        lineEdit_3->setInputMask(QString());
        pushButton->setText(QApplication::translate("Dialog1", "&Edit", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog1", "&Add book", nullptr));
        sort_book->setText(QApplication::translate("Dialog1", "&Sort Book", nullptr));
        sort_writer->setText(QApplication::translate("Dialog1", "&Sort Writer", nullptr));
        sort_genre->setText(QApplication::translate("Dialog1", "&Sort Genre", nullptr));
        sort_year->setText(QApplication::translate("Dialog1", "&Sort Year", nullptr));
        sort_serial->setText(QApplication::translate("Dialog1", "&Sort Serial", nullptr));
        sort_publisher->setText(QApplication::translate("Dialog1", "&Sort Publisher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nash_Dialog1: public Ui_Nash_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
