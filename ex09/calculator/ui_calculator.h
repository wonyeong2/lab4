/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QTextEdit *te_number;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_plus;
    QPushButton *btn_minus;
    QPushButton *btn_divide;
    QPushButton *btn_mult;
    QPushButton *btn_0;
    QPushButton *btn_equal;
    QPushButton *btn_ac;
    QPushButton *btn_ce;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(247, 199);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        te_number = new QTextEdit(centralWidget);
        te_number->setObjectName(QString::fromUtf8("te_number"));
        te_number->setGeometry(QRect(10, 10, 191, 31));
        te_number->setFrameShape(QFrame::StyledPanel);
        te_number->setLineWidth(1);
        te_number->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_number->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_number->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        te_number->setAutoFormatting(QTextEdit::AutoNone);
        te_number->setReadOnly(true);
        te_number->setOverwriteMode(true);
        btn_1 = new QPushButton(centralWidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(10, 110, 31, 25));
        btn_2 = new QPushButton(centralWidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(50, 110, 31, 25));
        btn_3 = new QPushButton(centralWidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(90, 110, 31, 25));
        btn_4 = new QPushButton(centralWidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(10, 80, 31, 25));
        btn_5 = new QPushButton(centralWidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(50, 80, 31, 25));
        btn_6 = new QPushButton(centralWidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(90, 80, 31, 25));
        btn_7 = new QPushButton(centralWidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setGeometry(QRect(10, 50, 31, 25));
        btn_8 = new QPushButton(centralWidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setGeometry(QRect(50, 50, 31, 25));
        btn_9 = new QPushButton(centralWidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setGeometry(QRect(90, 50, 31, 25));
        btn_plus = new QPushButton(centralWidget);
        btn_plus->setObjectName(QString::fromUtf8("btn_plus"));
        btn_plus->setGeometry(QRect(130, 50, 31, 25));
        btn_minus = new QPushButton(centralWidget);
        btn_minus->setObjectName(QString::fromUtf8("btn_minus"));
        btn_minus->setGeometry(QRect(130, 80, 31, 25));
        btn_divide = new QPushButton(centralWidget);
        btn_divide->setObjectName(QString::fromUtf8("btn_divide"));
        btn_divide->setGeometry(QRect(170, 80, 31, 25));
        btn_mult = new QPushButton(centralWidget);
        btn_mult->setObjectName(QString::fromUtf8("btn_mult"));
        btn_mult->setGeometry(QRect(170, 50, 31, 25));
        btn_0 = new QPushButton(centralWidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setGeometry(QRect(130, 110, 31, 25));
        btn_equal = new QPushButton(centralWidget);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        btn_equal->setGeometry(QRect(170, 110, 31, 25));
        btn_ac = new QPushButton(centralWidget);
        btn_ac->setObjectName(QString::fromUtf8("btn_ac"));
        btn_ac->setGeometry(QRect(210, 50, 31, 25));
        btn_ce = new QPushButton(centralWidget);
        btn_ce->setObjectName(QString::fromUtf8("btn_ce"));
        btn_ce->setGeometry(QRect(210, 80, 31, 25));
        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 247, 22));
        Calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calculator);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        btn_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        btn_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        btn_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        btn_plus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        btn_minus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        btn_divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        btn_mult->setText(QCoreApplication::translate("Calculator", "X", nullptr));
        btn_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        btn_equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        btn_ac->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        btn_ce->setText(QCoreApplication::translate("Calculator", "CE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
