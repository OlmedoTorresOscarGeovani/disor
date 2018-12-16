/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *label_5;
    QPlainTextEdit *txtCifradoCesar;
    QLineEdit *txtDesplazamiento;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPlainTextEdit *txtCifradoInverso;
    QPlainTextEdit *txtPlano;
    QPushButton *btnCifrado;
    QPlainTextEdit *txtCifradoInversoGrupal;
    QLabel *label_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1083, 467);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 260, 59, 15));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 260, 59, 15));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(340, 10, 20, 451));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(710, 10, 20, 451));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(870, 250, 121, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 310, 81, 16));
        txtCifradoCesar = new QPlainTextEdit(centralWidget);
        txtCifradoCesar->setObjectName(QString::fromUtf8("txtCifradoCesar"));
        txtCifradoCesar->setGeometry(QRect(10, 330, 321, 121));
        txtDesplazamiento = new QLineEdit(centralWidget);
        txtDesplazamiento->setObjectName(QString::fromUtf8("txtDesplazamiento"));
        txtDesplazamiento->setGeometry(QRect(390, 180, 201, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(390, 160, 111, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(390, 10, 81, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 310, 81, 16));
        txtCifradoInverso = new QPlainTextEdit(centralWidget);
        txtCifradoInverso->setObjectName(QString::fromUtf8("txtCifradoInverso"));
        txtCifradoInverso->setGeometry(QRect(370, 330, 321, 121));
        txtPlano = new QPlainTextEdit(centralWidget);
        txtPlano->setObjectName(QString::fromUtf8("txtPlano"));
        txtPlano->setGeometry(QRect(390, 30, 321, 121));
        btnCifrado = new QPushButton(centralWidget);
        btnCifrado->setObjectName(QString::fromUtf8("btnCifrado"));
        btnCifrado->setGeometry(QRect(610, 230, 101, 23));
        txtCifradoInversoGrupal = new QPlainTextEdit(centralWidget);
        txtCifradoInversoGrupal->setObjectName(QString::fromUtf8("txtCifradoInversoGrupal"));
        txtCifradoInversoGrupal->setGeometry(QRect(730, 330, 321, 121));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(730, 310, 81, 16));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "CESAR", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "INVERSO", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "INVERSO GRUPAL", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Cifrado:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Desplazamiento:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Texto Plano:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Inverso:", nullptr));
        btnCifrado->setText(QApplication::translate("MainWindow", "Cifrar", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Inverso Grupal:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
