/********************************************************************************
** Form generated from reading UI file 'editcell.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCELL_H
#define UI_EDITCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditCell
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *EditCell)
    {
        if (EditCell->objectName().isEmpty())
            EditCell->setObjectName(QStringLiteral("EditCell"));
        EditCell->resize(400, 112);
        horizontalLayout = new QHBoxLayout(EditCell);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(EditCell);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(EditCell);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(EditCell);

        QMetaObject::connectSlotsByName(EditCell);
    } // setupUi

    void retranslateUi(QDialog *EditCell)
    {
        EditCell->setWindowTitle(QApplication::translate("EditCell", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("EditCell", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditCell: public Ui_EditCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCELL_H
