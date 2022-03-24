/********************************************************************************
** Form generated from reading UI file 'radarscan.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADARSCAN_H
#define UI_RADARSCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_radarScan
{
public:
    QWidget *centralwidget;
    QPushButton *btnAdd;
    QPushButton *btnFindxy;
    QPushButton *btnClr;
    QGraphicsView *graphicsView_radarScan;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *radarScan)
    {
        if (radarScan->objectName().isEmpty())
            radarScan->setObjectName(QString::fromUtf8("radarScan"));
        radarScan->resize(800, 600);
        radarScan->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 106, 255), stop:1 rgba(67, 53, 91, 255));"));
        centralwidget = new QWidget(radarScan);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(390, 274, 152, 25));
        btnFindxy = new QPushButton(centralwidget);
        btnFindxy->setObjectName(QString::fromUtf8("btnFindxy"));
        btnFindxy->setGeometry(QRect(390, 210, 152, 25));
        btnClr = new QPushButton(centralwidget);
        btnClr->setObjectName(QString::fromUtf8("btnClr"));
        btnClr->setGeometry(QRect(390, 338, 152, 25));
        graphicsView_radarScan = new QGraphicsView(centralwidget);
        graphicsView_radarScan->setObjectName(QString::fromUtf8("graphicsView_radarScan"));
        graphicsView_radarScan->setGeometry(QRect(100, 80, 225, 460));
        graphicsView_radarScan->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
""));
        radarScan->setCentralWidget(centralwidget);
        menubar = new QMenuBar(radarScan);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        radarScan->setMenuBar(menubar);
        statusbar = new QStatusBar(radarScan);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        radarScan->setStatusBar(statusbar);

        retranslateUi(radarScan);

        QMetaObject::connectSlotsByName(radarScan);
    } // setupUi

    void retranslateUi(QMainWindow *radarScan)
    {
        radarScan->setWindowTitle(QApplication::translate("radarScan", "radarScan", nullptr));
        btnAdd->setText(QApplication::translate("radarScan", "add", nullptr));
        btnFindxy->setText(QApplication::translate("radarScan", "find", nullptr));
        btnClr->setText(QApplication::translate("radarScan", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class radarScan: public Ui_radarScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADARSCAN_H
