/********************************************************************************
** Form generated from reading UI file 'nash_dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NASH_DIALOG2_H
#define UI_NASH_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_nash_Dialog2
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *nash_Dialog2)
    {
        if (nash_Dialog2->objectName().isEmpty())
            nash_Dialog2->setObjectName(QStringLiteral("nash_Dialog2"));
        nash_Dialog2->resize(329, 352);
        verticalLayout = new QVBoxLayout(nash_Dialog2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(nash_Dialog2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(nash_Dialog2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(nash_Dialog2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(nash_Dialog2);

        QMetaObject::connectSlotsByName(nash_Dialog2);
    } // setupUi

    void retranslateUi(QDialog *nash_Dialog2)
    {
        nash_Dialog2->setWindowTitle(QApplication::translate("nash_Dialog2", "Library Program", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("nash_Dialog2", "Please choose each part you want:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nash_Dialog2: public Ui_nash_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NASH_DIALOG2_H
