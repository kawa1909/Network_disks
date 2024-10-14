/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcpServer
{
public:

    void setupUi(QWidget *tcpServer)
    {
        if (tcpServer->objectName().isEmpty())
            tcpServer->setObjectName(QString::fromUtf8("tcpServer"));
        tcpServer->resize(800, 600);

        retranslateUi(tcpServer);

        QMetaObject::connectSlotsByName(tcpServer);
    } // setupUi

    void retranslateUi(QWidget *tcpServer)
    {
        tcpServer->setWindowTitle(QCoreApplication::translate("tcpServer", "tcpServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tcpServer: public Ui_tcpServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
