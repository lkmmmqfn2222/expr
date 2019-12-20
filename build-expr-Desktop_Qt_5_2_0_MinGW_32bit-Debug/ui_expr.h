/********************************************************************************
** Form generated from reading UI file 'expr.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPR_H
#define UI_EXPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_expr
{
public:
    QWidget *centralWidget;
    QPushButton *btn_7;
    QLabel *lbl_display;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_add;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_min;
    QPushButton *btn_6;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_dele;
    QPushButton *btn_plus;
    QPushButton *btn_eq;
    QPushButton *btn_0;
    QPushButton *btn_3;
    QPushButton *btn_div;
    QPushButton *btn_exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *expr)
    {
        if (expr->objectName().isEmpty())
            expr->setObjectName(QStringLiteral("expr"));
        expr->resize(292, 399);
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(14);
        expr->setFont(font);
        centralWidget = new QWidget(expr);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_7 = new QPushButton(centralWidget);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setGeometry(QRect(20, 80, 61, 61));
        lbl_display = new QLabel(centralWidget);
        lbl_display->setObjectName(QStringLiteral("lbl_display"));
        lbl_display->setGeometry(QRect(20, 30, 241, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        lbl_display->setFont(font1);
        lbl_display->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 20pt \"\345\271\274\345\234\206\";"));
        lbl_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_8 = new QPushButton(centralWidget);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setGeometry(QRect(80, 80, 61, 61));
        btn_9 = new QPushButton(centralWidget);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setGeometry(QRect(140, 80, 61, 61));
        btn_add = new QPushButton(centralWidget);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setGeometry(QRect(200, 80, 61, 61));
        btn_4 = new QPushButton(centralWidget);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setGeometry(QRect(20, 140, 61, 61));
        btn_5 = new QPushButton(centralWidget);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setGeometry(QRect(80, 140, 61, 61));
        btn_min = new QPushButton(centralWidget);
        btn_min->setObjectName(QStringLiteral("btn_min"));
        btn_min->setGeometry(QRect(200, 140, 61, 61));
        btn_6 = new QPushButton(centralWidget);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setGeometry(QRect(140, 140, 61, 61));
        btn_1 = new QPushButton(centralWidget);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setGeometry(QRect(20, 200, 61, 61));
        btn_2 = new QPushButton(centralWidget);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setGeometry(QRect(80, 200, 61, 61));
        btn_dele = new QPushButton(centralWidget);
        btn_dele->setObjectName(QStringLiteral("btn_dele"));
        btn_dele->setGeometry(QRect(20, 260, 61, 61));
        btn_plus = new QPushButton(centralWidget);
        btn_plus->setObjectName(QStringLiteral("btn_plus"));
        btn_plus->setGeometry(QRect(200, 200, 61, 61));
        btn_eq = new QPushButton(centralWidget);
        btn_eq->setObjectName(QStringLiteral("btn_eq"));
        btn_eq->setGeometry(QRect(140, 260, 61, 61));
        btn_0 = new QPushButton(centralWidget);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setGeometry(QRect(80, 260, 61, 61));
        btn_3 = new QPushButton(centralWidget);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setGeometry(QRect(140, 200, 61, 61));
        btn_div = new QPushButton(centralWidget);
        btn_div->setObjectName(QStringLiteral("btn_div"));
        btn_div->setGeometry(QRect(200, 260, 61, 61));
        btn_exit = new QPushButton(centralWidget);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(220, 0, 41, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu Mono"));
        font2.setPointSize(6);
        btn_exit->setFont(font2);
        btn_exit->setCursor(QCursor(Qt::PointingHandCursor));
        btn_exit->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        expr->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(expr);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 292, 26));
        expr->setMenuBar(menuBar);
        mainToolBar = new QToolBar(expr);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        expr->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(expr);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        expr->setStatusBar(statusBar);

        retranslateUi(expr);

        QMetaObject::connectSlotsByName(expr);
    } // setupUi

    void retranslateUi(QMainWindow *expr)
    {
        expr->setWindowTitle(QApplication::translate("expr", "expr", 0));
        btn_7->setText(QApplication::translate("expr", "7", 0));
        lbl_display->setText(QApplication::translate("expr", "0", 0));
        btn_8->setText(QApplication::translate("expr", "8", 0));
        btn_9->setText(QApplication::translate("expr", "9", 0));
        btn_add->setText(QApplication::translate("expr", "+", 0));
        btn_4->setText(QApplication::translate("expr", "4", 0));
        btn_5->setText(QApplication::translate("expr", "5", 0));
        btn_min->setText(QApplication::translate("expr", "-", 0));
        btn_6->setText(QApplication::translate("expr", "6", 0));
        btn_1->setText(QApplication::translate("expr", "1", 0));
        btn_2->setText(QApplication::translate("expr", "2", 0));
        btn_dele->setText(QApplication::translate("expr", "C", 0));
        btn_plus->setText(QApplication::translate("expr", "*", 0));
        btn_eq->setText(QApplication::translate("expr", "=", 0));
        btn_0->setText(QApplication::translate("expr", "0", 0));
        btn_3->setText(QApplication::translate("expr", "3", 0));
        btn_div->setText(QApplication::translate("expr", "/", 0));
        btn_exit->setText(QApplication::translate("expr", "EXIT", 0));
    } // retranslateUi

};

namespace Ui {
    class expr: public Ui_expr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPR_H
