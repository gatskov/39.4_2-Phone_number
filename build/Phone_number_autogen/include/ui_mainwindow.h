/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelRegular;
    QLineEdit *regularLine;
    QLabel *labelRegularStatus;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMasked;
    QLineEdit *maskedLine;
    QLabel *labelMaskedStatus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 240);
        MainWindow->setMinimumSize(QSize(800, 240));
        MainWindow->setMaximumSize(QSize(800, 240));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelRegular = new QLabel(centralwidget);
        labelRegular->setObjectName("labelRegular");
        labelRegular->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        labelRegular->setFont(font);
        labelRegular->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 100, 100);\n"
"padding-left: 10;\n"
"color: rgb(255, 255, 155);"));

        horizontalLayout_3->addWidget(labelRegular);

        regularLine = new QLineEdit(centralwidget);
        regularLine->setObjectName("regularLine");
        regularLine->setMaximumSize(QSize(200, 16777215));
        QFont font1;
        font1.setPointSize(10);
        regularLine->setFont(font1);
        regularLine->setStyleSheet(QString::fromUtf8("color: rgb(55, 255, 255);\n"
"border-color: rgb(81, 81, 81);"));
        regularLine->setMaxLength(12);

        horizontalLayout_3->addWidget(regularLine);

        labelRegularStatus = new QLabel(centralwidget);
        labelRegularStatus->setObjectName("labelRegularStatus");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tahoma")});
        font2.setPointSize(10);
        font2.setBold(true);
        labelRegularStatus->setFont(font2);
        labelRegularStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 155, 255);"));

        horizontalLayout_3->addWidget(labelRegularStatus);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelMasked = new QLabel(centralwidget);
        labelMasked->setObjectName("labelMasked");
        labelMasked->setMaximumSize(QSize(200, 16777215));
        labelMasked->setFont(font);
        labelMasked->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 100, 100);\n"
"padding-left: 10;\n"
"color: rgb(255, 255, 155);"));

        horizontalLayout->addWidget(labelMasked);

        maskedLine = new QLineEdit(centralwidget);
        maskedLine->setObjectName("maskedLine");
        maskedLine->setMaximumSize(QSize(200, 16777215));
        maskedLine->setFont(font1);
        maskedLine->setStyleSheet(QString::fromUtf8("color: rgb(55, 255, 255);\n"
"border-color: rgb(81, 81, 81);"));
        maskedLine->setMaxLength(18);

        horizontalLayout->addWidget(maskedLine);

        labelMaskedStatus = new QLabel(centralwidget);
        labelMaskedStatus->setObjectName("labelMaskedStatus");
        labelMaskedStatus->setFont(font2);
        labelMaskedStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 155, 255);"));

        horizontalLayout->addWidget(labelMaskedStatus);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelRegular->setText(QCoreApplication::translate("MainWindow", "Using regular expressions", nullptr));
        regularLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type the cell number here...", nullptr));
        labelRegularStatus->setText(QCoreApplication::translate("MainWindow", "< - Please enter the cell number in this field", nullptr));
        labelMasked->setText(QCoreApplication::translate("MainWindow", "Using masks", nullptr));
        maskedLine->setInputMask(QCoreApplication::translate("MainWindow", "+7 (999) 999-99-99", nullptr));
        maskedLine->setPlaceholderText(QString());
        labelMaskedStatus->setText(QCoreApplication::translate("MainWindow", "< - Please enter the cell number in this field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
