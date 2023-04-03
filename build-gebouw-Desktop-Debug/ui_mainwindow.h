/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGebouw;
    QAction *actionSlot;
    QAction *actionKaartenbalk;
    QWidget *centralWidget;
    QPushButton *sensor_act;
    QPushButton *schuifdeurKnop;
    QPushButton *deur_1;
    QPushButton *deur_2;
    QTextBrowser *kaartenbak;
    QLineEdit *lineEditS;
    QLineEdit *lineEditD1;
    QLineEdit *lineEditD2;
    QLineEdit *lineEditA;
    QPushButton *AP;
    QPushButton *AN;
    QPushButton *ToonKaart;
    QLineEdit *lineEditID;
    QLineEdit *lineEditAddress;
    QLineEdit *lineEditName;
    QPushButton *ID;
    QPushButton *ID_remove;
    QPushButton *ID_Register;
    QPushButton *ID_RemoveSlot;
    QLineEdit *lineEditRegister;
    QMenuBar *menuBar;
    QMenu *menuGebouw;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1372, 498);
        actionGebouw = new QAction(MainWindow);
        actionGebouw->setObjectName("actionGebouw");
        actionSlot = new QAction(MainWindow);
        actionSlot->setObjectName("actionSlot");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("system-lock-screen");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSlot->setIcon(icon);
        actionKaartenbalk = new QAction(MainWindow);
        actionKaartenbalk->setObjectName("actionKaartenbalk");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        sensor_act = new QPushButton(centralWidget);
        sensor_act->setObjectName("sensor_act");
        sensor_act->setGeometry(QRect(510, 80, 31, 31));
        schuifdeurKnop = new QPushButton(centralWidget);
        schuifdeurKnop->setObjectName("schuifdeurKnop");
        schuifdeurKnop->setGeometry(QRect(510, 230, 31, 31));
        deur_1 = new QPushButton(centralWidget);
        deur_1->setObjectName("deur_1");
        deur_1->setGeometry(QRect(250, 130, 31, 31));
        deur_2 = new QPushButton(centralWidget);
        deur_2->setObjectName("deur_2");
        deur_2->setGeometry(QRect(320, 210, 31, 31));
        kaartenbak = new QTextBrowser(centralWidget);
        kaartenbak->setObjectName("kaartenbak");
        kaartenbak->setGeometry(QRect(870, 20, 171, 131));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(40, 40, 40, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        kaartenbak->setPalette(palette);
        lineEditS = new QLineEdit(centralWidget);
        lineEditS->setObjectName("lineEditS");
        lineEditS->setGeometry(QRect(910, 280, 113, 34));
        QPalette palette1;
        QBrush brush2(QColor(68, 68, 68, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEditS->setPalette(palette1);
        lineEditD1 = new QLineEdit(centralWidget);
        lineEditD1->setObjectName("lineEditD1");
        lineEditD1->setGeometry(QRect(910, 320, 113, 34));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEditD1->setPalette(palette2);
        lineEditD2 = new QLineEdit(centralWidget);
        lineEditD2->setObjectName("lineEditD2");
        lineEditD2->setGeometry(QRect(910, 360, 113, 34));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEditD2->setPalette(palette3);
        lineEditA = new QLineEdit(centralWidget);
        lineEditA->setObjectName("lineEditA");
        lineEditA->setGeometry(QRect(910, 180, 113, 34));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEditA->setPalette(palette4);
        AP = new QPushButton(centralWidget);
        AP->setObjectName("AP");
        AP->setGeometry(QRect(840, 160, 31, 31));
        AN = new QPushButton(centralWidget);
        AN->setObjectName("AN");
        AN->setGeometry(QRect(840, 210, 31, 31));
        ToonKaart = new QPushButton(centralWidget);
        ToonKaart->setObjectName("ToonKaart");
        ToonKaart->setGeometry(QRect(720, 50, 118, 34));
        lineEditID = new QLineEdit(centralWidget);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setGeometry(QRect(1210, 280, 113, 34));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEditID->setPalette(palette5);
        lineEditAddress = new QLineEdit(centralWidget);
        lineEditAddress->setObjectName("lineEditAddress");
        lineEditAddress->setGeometry(QRect(1210, 360, 113, 34));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEditAddress->setPalette(palette6);
        lineEditName = new QLineEdit(centralWidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(1210, 320, 113, 34));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEditName->setPalette(palette7);
        ID = new QPushButton(centralWidget);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(1210, 200, 111, 31));
        ID_remove = new QPushButton(centralWidget);
        ID_remove->setObjectName("ID_remove");
        ID_remove->setGeometry(QRect(1210, 240, 111, 31));
        ID_Register = new QPushButton(centralWidget);
        ID_Register->setObjectName("ID_Register");
        ID_Register->setGeometry(QRect(550, 230, 111, 31));
        ID_RemoveSlot = new QPushButton(centralWidget);
        ID_RemoveSlot->setObjectName("ID_RemoveSlot");
        ID_RemoveSlot->setGeometry(QRect(550, 270, 111, 31));
        lineEditRegister = new QLineEdit(centralWidget);
        lineEditRegister->setObjectName("lineEditRegister");
        lineEditRegister->setGeometry(QRect(550, 310, 113, 34));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEditRegister->setPalette(palette8);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1372, 25));
        menuGebouw = new QMenu(menuBar);
        menuGebouw->setObjectName("menuGebouw");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGebouw->menuAction());
        menuGebouw->addAction(actionGebouw);
        menuGebouw->addAction(actionSlot);
        menuGebouw->addAction(actionKaartenbalk);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGebouw->setText(QCoreApplication::translate("MainWindow", "Gebouw", nullptr));
        actionSlot->setText(QCoreApplication::translate("MainWindow", "Slot", nullptr));
        actionKaartenbalk->setText(QCoreApplication::translate("MainWindow", "Kaartenbalk", nullptr));
        sensor_act->setText(QCoreApplication::translate("MainWindow", "s1", nullptr));
        schuifdeurKnop->setText(QCoreApplication::translate("MainWindow", "vd", nullptr));
        deur_1->setText(QCoreApplication::translate("MainWindow", "d1", nullptr));
        deur_2->setText(QCoreApplication::translate("MainWindow", "d2", nullptr));
        AP->setText(QCoreApplication::translate("MainWindow", "A+", nullptr));
        AN->setText(QCoreApplication::translate("MainWindow", "A-", nullptr));
        ToonKaart->setText(QCoreApplication::translate("MainWindow", "Toon Kaart", nullptr));
        ID->setText(QCoreApplication::translate("MainWindow", "Create ID", nullptr));
        ID_remove->setText(QCoreApplication::translate("MainWindow", "Delete ID", nullptr));
        ID_Register->setText(QCoreApplication::translate("MainWindow", "Register ID", nullptr));
        ID_RemoveSlot->setText(QCoreApplication::translate("MainWindow", "Remove ID", nullptr));
        menuGebouw->setTitle(QCoreApplication::translate("MainWindow", "Gebouw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
