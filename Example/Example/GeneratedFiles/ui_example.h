/********************************************************************************
** Form generated from reading UI file 'example.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLE_H
#define UI_EXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExampleClass
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QMainWindow *ExampleClass)
    {
        if (ExampleClass->objectName().isEmpty())
            ExampleClass->setObjectName(QStringLiteral("ExampleClass"));
        ExampleClass->resize(561, 152);
        ExampleClass->setMinimumSize(QSize(561, 152));
        ExampleClass->setMaximumSize(QSize(561, 152));
        centralWidget = new QWidget(ExampleClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 30, 431, 31));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setLineWrapMode(QTextEdit::NoWrap);
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 70, 431, 31));
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2->setLineWrapMode(QTextEdit::NoWrap);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 30, 101, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 70, 101, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 110, 541, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 221, 16));
        ExampleClass->setCentralWidget(centralWidget);

        retranslateUi(ExampleClass);

        QMetaObject::connectSlotsByName(ExampleClass);
    } // setupUi

    void retranslateUi(QMainWindow *ExampleClass)
    {
        ExampleClass->setWindowTitle(QApplication::translate("ExampleClass", "EXCEL TO PDF", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ExampleClass", "\354\235\275\354\226\264\354\230\244\352\270\260", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ExampleClass", "\354\240\200\354\236\245\355\225\230\352\270\260", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ExampleClass", "PDF \353\263\200\355\231\230", Q_NULLPTR));
        label->setText(QApplication::translate("ExampleClass", "EXCEL TO PDF", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExampleClass: public Ui_ExampleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLE_H
