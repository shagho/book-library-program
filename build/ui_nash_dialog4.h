/********************************************************************************
** Form generated from reading UI file 'nash_dialog4.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NASH_DIALOG4_H
#define UI_NASH_DIALOG4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_nash_dialog4
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *nash_dialog4)
    {
        if (nash_dialog4->objectName().isEmpty())
            nash_dialog4->setObjectName(QStringLiteral("nash_dialog4"));
        nash_dialog4->resize(297, 353);
        verticalLayout = new QVBoxLayout(nash_dialog4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(nash_dialog4);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        treeWidget = new QTreeWidget(nash_dialog4);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);


        retranslateUi(nash_dialog4);

        QMetaObject::connectSlotsByName(nash_dialog4);
    } // setupUi

    void retranslateUi(QDialog *nash_dialog4)
    {
        nash_dialog4->setWindowTitle(QApplication::translate("nash_dialog4", "Dialog", nullptr));
        label->setText(QApplication::translate("nash_dialog4", "Borrowing user:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("nash_dialog4", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("nash_dialog4", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nash_dialog4: public Ui_nash_dialog4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NASH_DIALOG4_H
