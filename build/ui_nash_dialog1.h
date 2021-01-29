/********************************************************************************
** Form generated from reading UI file 'nash_dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NASH_DIALOG1_H
#define UI_NASH_DIALOG1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nash_Dialog1
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Search_button;
    QLineEdit *lineEdit_7;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_8;
    QPushButton *Lending_button;
    QPushButton *Del_lend_button;
    QSpacerItem *verticalSpacer;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QFormLayout *formlayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sort_book;
    QPushButton *sort_writer;
    QPushButton *sort_genre;
    QPushButton *sort_year;
    QPushButton *sort_serial;
    QPushButton *sort_publisher;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Genre_group;
    QPushButton *Writer_group;
    QPushButton *Year_group;
    QPushButton *Publisher_group;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_7;

    void setupUi(QDialog *nash_Dialog1)
    {
        if (nash_Dialog1->objectName().isEmpty())
            nash_Dialog1->setObjectName(QStringLiteral("nash_Dialog1"));
        nash_Dialog1->resize(1023, 576);
        nash_Dialog1->setMinimumSize(QSize(1023, 576));
        QPalette palette;
        QBrush brush(QColor(239, 239, 239, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        nash_Dialog1->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/Images resource/648903-star-ratings-512.png"), QSize(), QIcon::Selected, QIcon::On);
        nash_Dialog1->setWindowIcon(icon);
        gridLayout = new QGridLayout(nash_Dialog1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Search_button = new QPushButton(nash_Dialog1);
        Search_button->setObjectName(QStringLiteral("Search_button"));
        Search_button->setToolTipDuration(10000);

        horizontalLayout_4->addWidget(Search_button);

        lineEdit_7 = new QLineEdit(nash_Dialog1);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setToolTipDuration(10000);

        horizontalLayout_4->addWidget(lineEdit_7);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(58, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lineEdit_8 = new QLineEdit(nash_Dialog1);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setToolTipDuration(10000);

        horizontalLayout_5->addWidget(lineEdit_8);

        Lending_button = new QPushButton(nash_Dialog1);
        Lending_button->setObjectName(QStringLiteral("Lending_button"));
        Lending_button->setToolTipDuration(10000);

        horizontalLayout_5->addWidget(Lending_button);

        Del_lend_button = new QPushButton(nash_Dialog1);
        Del_lend_button->setObjectName(QStringLiteral("Del_lend_button"));
        Del_lend_button->setToolTipDuration(10000);

        horizontalLayout_5->addWidget(Del_lend_button);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter_2 = new QSplitter(nash_Dialog1);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        formlayout = new QFormLayout(layoutWidget);
        formlayout->setObjectName(QStringLiteral("formlayout"));
        formlayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label->setPalette(palette1);
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        formlayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setPointSize(13);
        lineEdit->setFont(font1);
        lineEdit->setToolTipDuration(10000);
        lineEdit->setMaxLength(50);

        formlayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label_2->setPalette(palette2);
        label_2->setFont(font);

        formlayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setToolTipDuration(10000);
        lineEdit_2->setMaxLength(30);

        formlayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label_3->setPalette(palette3);
        label_3->setFont(font);

        formlayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setFont(font1);
        lineEdit_3->setToolTipDuration(10000);
        lineEdit_3->setMaxLength(40);

        formlayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label_4->setPalette(palette4);
        label_4->setFont(font);

        formlayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setFont(font1);
        lineEdit_4->setToolTipDuration(10000);
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        lineEdit_4->setMaxLength(4);
        lineEdit_4->setFrame(true);

        formlayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label_5->setPalette(palette5);
        label_5->setFont(font);

        formlayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setFont(font1);
        lineEdit_5->setToolTipDuration(10000);
        lineEdit_5->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        lineEdit_5->setMaxLength(12);

        formlayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label_6->setPalette(palette6);
        label_6->setFont(font);
        label_6->setScaledContents(false);

        formlayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        lineEdit_6->setPalette(palette7);
        lineEdit_6->setFont(font1);
        lineEdit_6->setToolTipDuration(10000);
        lineEdit_6->setInputMethodHints(Qt::ImhNone);

        formlayout->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setToolTipDuration(10000);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setToolTipDuration(10000);

        horizontalLayout->addWidget(pushButton_2);

        splitter->addWidget(layoutWidget1);
        splitter_2->addWidget(splitter);
        pushButton_3 = new QPushButton(splitter_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setToolTipDuration(10000);
        splitter_2->addWidget(pushButton_3);

        verticalLayout->addWidget(splitter_2);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sort_book = new QPushButton(nash_Dialog1);
        sort_book->setObjectName(QStringLiteral("sort_book"));

        horizontalLayout_2->addWidget(sort_book);

        sort_writer = new QPushButton(nash_Dialog1);
        sort_writer->setObjectName(QStringLiteral("sort_writer"));

        horizontalLayout_2->addWidget(sort_writer);

        sort_genre = new QPushButton(nash_Dialog1);
        sort_genre->setObjectName(QStringLiteral("sort_genre"));

        horizontalLayout_2->addWidget(sort_genre);

        sort_year = new QPushButton(nash_Dialog1);
        sort_year->setObjectName(QStringLiteral("sort_year"));

        horizontalLayout_2->addWidget(sort_year);

        sort_serial = new QPushButton(nash_Dialog1);
        sort_serial->setObjectName(QStringLiteral("sort_serial"));

        horizontalLayout_2->addWidget(sort_serial);

        sort_publisher = new QPushButton(nash_Dialog1);
        sort_publisher->setObjectName(QStringLiteral("sort_publisher"));

        horizontalLayout_2->addWidget(sort_publisher);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(nash_Dialog1);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(542, 273));
        tableWidget->setMaximumSize(QSize(542, 273));
        tableWidget->setFont(font);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragEnabled(false);
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setTextElideMode(Qt::ElideNone);
        tableWidget->setGridStyle(Qt::DashDotLine);
        tableWidget->setSortingEnabled(false);

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Genre_group = new QPushButton(nash_Dialog1);
        Genre_group->setObjectName(QStringLiteral("Genre_group"));
        Genre_group->setToolTipDuration(10000);

        horizontalLayout_3->addWidget(Genre_group);

        Writer_group = new QPushButton(nash_Dialog1);
        Writer_group->setObjectName(QStringLiteral("Writer_group"));
        Writer_group->setToolTipDuration(10000);

        horizontalLayout_3->addWidget(Writer_group);

        Year_group = new QPushButton(nash_Dialog1);
        Year_group->setObjectName(QStringLiteral("Year_group"));
        Year_group->setToolTipDuration(10000);

        horizontalLayout_3->addWidget(Year_group);

        Publisher_group = new QPushButton(nash_Dialog1);
        Publisher_group->setObjectName(QStringLiteral("Publisher_group"));
        Publisher_group->setToolTipDuration(10000);

        horizontalLayout_3->addWidget(Publisher_group);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_2);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        label_7 = new QLabel(nash_Dialog1);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_5->setBuddy(lineEdit_5);
        label_6->setBuddy(lineEdit_6);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_7, Search_button);
        QWidget::setTabOrder(Search_button, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, Genre_group);
        QWidget::setTabOrder(Genre_group, Writer_group);
        QWidget::setTabOrder(Writer_group, Year_group);
        QWidget::setTabOrder(Year_group, Publisher_group);
        QWidget::setTabOrder(Publisher_group, tableWidget);
        QWidget::setTabOrder(tableWidget, sort_book);
        QWidget::setTabOrder(sort_book, sort_writer);
        QWidget::setTabOrder(sort_writer, sort_genre);
        QWidget::setTabOrder(sort_genre, sort_year);
        QWidget::setTabOrder(sort_year, sort_serial);
        QWidget::setTabOrder(sort_serial, sort_publisher);

        retranslateUi(nash_Dialog1);
        QObject::connect(lineEdit_8, SIGNAL(returnPressed()), Lending_button, SLOT(click()));
        QObject::connect(lineEdit_7, SIGNAL(returnPressed()), Search_button, SLOT(click()));

        QMetaObject::connectSlotsByName(nash_Dialog1);
    } // setupUi

    void retranslateUi(QDialog *nash_Dialog1)
    {
        nash_Dialog1->setWindowTitle(QApplication::translate("nash_Dialog1", "Library Program", nullptr));
#ifndef QT_NO_TOOLTIP
        Search_button->setToolTip(QApplication::translate("nash_Dialog1", "search button\n"
"\n"
"please enter a word or words you want to search then press current button.", nullptr));
#endif // QT_NO_TOOLTIP
        Search_button->setText(QApplication::translate("nash_Dialog1", "Search", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_7->setToolTip(QApplication::translate("nash_Dialog1", "please enter a word or words", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_7->setWhatsThis(QApplication::translate("nash_Dialog1", "Please input a word.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        lineEdit_8->setToolTip(QApplication::translate("nash_Dialog1", "Please enter borrower name.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_8->setWhatsThis(QApplication::translate("nash_Dialog1", "<html><head/><body><p>Please input borrower.</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        Lending_button->setToolTip(QApplication::translate("nash_Dialog1", "Lending button\n"
"\n"
"please enter borrower name with book name you want to borrow then press current button.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Lending_button->setWhatsThis(QApplication::translate("nash_Dialog1", "Lend button", nullptr));
#endif // QT_NO_WHATSTHIS
        Lending_button->setText(QApplication::translate("nash_Dialog1", "&Lending", nullptr));
#ifndef QT_NO_TOOLTIP
        Del_lend_button->setToolTip(QApplication::translate("nash_Dialog1", "Delete lending button\n"
"\n"
"Please enter borrower name and book name you want to delete lending or double click in table row in borrower column  then press current button.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Del_lend_button->setWhatsThis(QApplication::translate("nash_Dialog1", "Delete lend button.", nullptr));
#endif // QT_NO_WHATSTHIS
        Del_lend_button->setText(QApplication::translate("nash_Dialog1", "&Delete lending", nullptr));
        label->setText(QApplication::translate("nash_Dialog1", "Book:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("nash_Dialog1", "Please enter book name.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit->setWhatsThis(QApplication::translate("nash_Dialog1", "please enter book name.", nullptr));
#endif // QT_NO_WHATSTHIS
        lineEdit->setInputMask(QString());
        label_2->setText(QApplication::translate("nash_Dialog1", "Writer:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("nash_Dialog1", "please enter writer name.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_2->setWhatsThis(QApplication::translate("nash_Dialog1", "please enter writer name.", nullptr));
#endif // QT_NO_WHATSTHIS
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        label_3->setText(QApplication::translate("nash_Dialog1", "Genre:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("nash_Dialog1", "please enter book genre.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_3->setWhatsThis(QApplication::translate("nash_Dialog1", "please enter book genre.", nullptr));
#endif // QT_NO_WHATSTHIS
        lineEdit_3->setInputMask(QString());
        label_4->setText(QApplication::translate("nash_Dialog1", "Year:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_4->setToolTip(QApplication::translate("nash_Dialog1", "pleade enter year.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_4->setWhatsThis(QApplication::translate("nash_Dialog1", "please enter book year.", nullptr));
#endif // QT_NO_WHATSTHIS
        lineEdit_4->setInputMask(QString());
        lineEdit_4->setText(QString());
        label_5->setText(QApplication::translate("nash_Dialog1", "Serial:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_5->setToolTip(QApplication::translate("nash_Dialog1", "please enter serial number.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_5->setWhatsThis(QApplication::translate("nash_Dialog1", "please enter book serial number.", nullptr));
#endif // QT_NO_WHATSTHIS
        lineEdit_5->setInputMask(QString());
        label_6->setText(QApplication::translate("nash_Dialog1", "Publisher:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_6->setToolTip(QApplication::translate("nash_Dialog1", "Please enter book publisher.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_6->setWhatsThis(QApplication::translate("nash_Dialog1", "Please enter book publisher.", nullptr));
#endif // QT_NO_WHATSTHIS
        lineEdit_6->setInputMask(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("nash_Dialog1", "<html><head/><body><p>Edit button<br/></p><p>please double click in row in table you want edit</p><p>then edit them in above lines edit then press or</p><p>click edit button(<span style=\" text-decoration: underline;\">E</span>dit).</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QApplication::translate("nash_Dialog1", "<html><head/><body><p>Edit button</p><p><br/></p><p>please double click in row in table you want edit</p><p>then edit them in above lines edit then press or</p><p>click edit button(&amp;Edit).</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("nash_Dialog1", "Edit button", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleDescription(QApplication::translate("nash_Dialog1", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("nash_Dialog1", "&Edit", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("nash_Dialog1", "<html><head/><body><p>Addbook button</p><p align=\"justify\">please enter the information of the book you want to add in above line edits then press current button.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("nash_Dialog1", "&Add book", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("nash_Dialog1", "<html><head/><body><p>Delete book button</p><p align=\"justify\">please enter the information of the book you want to delete or double click in table row then press current button.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("nash_Dialog1", "&Delete book", nullptr));
        sort_book->setText(QApplication::translate("nash_Dialog1", "&Sort Book", nullptr));
        sort_writer->setText(QApplication::translate("nash_Dialog1", "&Sort Writer", nullptr));
        sort_genre->setText(QApplication::translate("nash_Dialog1", "&Sort Genre", nullptr));
        sort_year->setText(QApplication::translate("nash_Dialog1", "&Sort Year", nullptr));
        sort_serial->setText(QApplication::translate("nash_Dialog1", "&Sort Serial", nullptr));
        sort_publisher->setText(QApplication::translate("nash_Dialog1", "&Sort Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("nash_Dialog1", "Book", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("nash_Dialog1", "Writer", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("nash_Dialog1", "Genre", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("nash_Dialog1", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("nash_Dialog1", "Serial", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("nash_Dialog1", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("nash_Dialog1", "Borrower", nullptr));
#ifndef QT_NO_TOOLTIP
        Genre_group->setToolTip(QApplication::translate("nash_Dialog1", "Genre group button", nullptr));
#endif // QT_NO_TOOLTIP
        Genre_group->setText(QApplication::translate("nash_Dialog1", "&Genre group", nullptr));
#ifndef QT_NO_TOOLTIP
        Writer_group->setToolTip(QApplication::translate("nash_Dialog1", "writer group button.", nullptr));
#endif // QT_NO_TOOLTIP
        Writer_group->setText(QApplication::translate("nash_Dialog1", "&Writer group", nullptr));
#ifndef QT_NO_TOOLTIP
        Year_group->setToolTip(QApplication::translate("nash_Dialog1", "year group button.", nullptr));
#endif // QT_NO_TOOLTIP
        Year_group->setText(QApplication::translate("nash_Dialog1", "&Year group", nullptr));
#ifndef QT_NO_TOOLTIP
        Publisher_group->setToolTip(QApplication::translate("nash_Dialog1", "publisher group button.", nullptr));
#endif // QT_NO_TOOLTIP
        Publisher_group->setText(QApplication::translate("nash_Dialog1", "&Publisher group", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nash_Dialog1: public Ui_nash_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NASH_DIALOG1_H
