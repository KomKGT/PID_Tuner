/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *IP_label;
    QLineEdit *IPv4_line_edit;
    QLabel *slave_label;
    QLineEdit *slave_line_edit;
    QLabel *port_label;
    QLineEdit *port_line_edit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *rd_reg_label;
    QLineEdit *rd_reg_line_edit;
    QLabel *rd_count_label;
    QLineEdit *rd_count_line_edit;
    QPushButton *rd_button;
    QHBoxLayout *horizontalLayout_4;
    QLabel *wr_reg_label;
    QLineEdit *wr_reg_line_edit;
    QLabel *wr_val_label;
    QLineEdit *wr_val_line_edit;
    QPushButton *wr_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *connect_button;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *KpNum;
    QLineEdit *KiNum;
    QLineEdit *KdNum;
    QVBoxLayout *verticalLayout_4;
    QPushButton *KpWrite;
    QPushButton *KiWrite;
    QPushButton *KdWrite;
    QPlainTextEdit *log_plain_text_edit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(932, 643);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        IP_label = new QLabel(centralWidget);
        IP_label->setObjectName(QString::fromUtf8("IP_label"));

        horizontalLayout->addWidget(IP_label);

        IPv4_line_edit = new QLineEdit(centralWidget);
        IPv4_line_edit->setObjectName(QString::fromUtf8("IPv4_line_edit"));
        IPv4_line_edit->setMinimumSize(QSize(300, 0));
        IPv4_line_edit->setMaxLength(20);

        horizontalLayout->addWidget(IPv4_line_edit);

        slave_label = new QLabel(centralWidget);
        slave_label->setObjectName(QString::fromUtf8("slave_label"));

        horizontalLayout->addWidget(slave_label);

        slave_line_edit = new QLineEdit(centralWidget);
        slave_line_edit->setObjectName(QString::fromUtf8("slave_line_edit"));
        slave_line_edit->setMaximumSize(QSize(50, 16777215));
        slave_line_edit->setMaxLength(10);

        horizontalLayout->addWidget(slave_line_edit);

        port_label = new QLabel(centralWidget);
        port_label->setObjectName(QString::fromUtf8("port_label"));

        horizontalLayout->addWidget(port_label);

        port_line_edit = new QLineEdit(centralWidget);
        port_line_edit->setObjectName(QString::fromUtf8("port_line_edit"));
        port_line_edit->setMaxLength(8);

        horizontalLayout->addWidget(port_line_edit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rd_reg_label = new QLabel(centralWidget);
        rd_reg_label->setObjectName(QString::fromUtf8("rd_reg_label"));

        horizontalLayout_3->addWidget(rd_reg_label);

        rd_reg_line_edit = new QLineEdit(centralWidget);
        rd_reg_line_edit->setObjectName(QString::fromUtf8("rd_reg_line_edit"));
        rd_reg_line_edit->setEnabled(true);

        horizontalLayout_3->addWidget(rd_reg_line_edit);

        rd_count_label = new QLabel(centralWidget);
        rd_count_label->setObjectName(QString::fromUtf8("rd_count_label"));

        horizontalLayout_3->addWidget(rd_count_label);

        rd_count_line_edit = new QLineEdit(centralWidget);
        rd_count_line_edit->setObjectName(QString::fromUtf8("rd_count_line_edit"));

        horizontalLayout_3->addWidget(rd_count_line_edit);

        rd_button = new QPushButton(centralWidget);
        rd_button->setObjectName(QString::fromUtf8("rd_button"));

        horizontalLayout_3->addWidget(rd_button);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        wr_reg_label = new QLabel(centralWidget);
        wr_reg_label->setObjectName(QString::fromUtf8("wr_reg_label"));

        horizontalLayout_4->addWidget(wr_reg_label);

        wr_reg_line_edit = new QLineEdit(centralWidget);
        wr_reg_line_edit->setObjectName(QString::fromUtf8("wr_reg_line_edit"));

        horizontalLayout_4->addWidget(wr_reg_line_edit);

        wr_val_label = new QLabel(centralWidget);
        wr_val_label->setObjectName(QString::fromUtf8("wr_val_label"));

        horizontalLayout_4->addWidget(wr_val_label);

        wr_val_line_edit = new QLineEdit(centralWidget);
        wr_val_line_edit->setObjectName(QString::fromUtf8("wr_val_line_edit"));

        horizontalLayout_4->addWidget(wr_val_line_edit);

        wr_button = new QPushButton(centralWidget);
        wr_button->setObjectName(QString::fromUtf8("wr_button"));

        horizontalLayout_4->addWidget(wr_button);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        connect_button = new QPushButton(centralWidget);
        connect_button->setObjectName(QString::fromUtf8("connect_button"));

        horizontalLayout_5->addWidget(connect_button);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout_6->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_6->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_6->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        KpNum = new QLineEdit(centralWidget);
        KpNum->setObjectName(QString::fromUtf8("KpNum"));
        KpNum->setFont(font);

        verticalLayout_5->addWidget(KpNum);

        KiNum = new QLineEdit(centralWidget);
        KiNum->setObjectName(QString::fromUtf8("KiNum"));
        KiNum->setFont(font);

        verticalLayout_5->addWidget(KiNum);

        KdNum = new QLineEdit(centralWidget);
        KdNum->setObjectName(QString::fromUtf8("KdNum"));
        KdNum->setFont(font);

        verticalLayout_5->addWidget(KdNum);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        KpWrite = new QPushButton(centralWidget);
        KpWrite->setObjectName(QString::fromUtf8("KpWrite"));
        KpWrite->setFont(font);

        verticalLayout_4->addWidget(KpWrite);

        KiWrite = new QPushButton(centralWidget);
        KiWrite->setObjectName(QString::fromUtf8("KiWrite"));
        KiWrite->setFont(font);

        verticalLayout_4->addWidget(KiWrite);

        KdWrite = new QPushButton(centralWidget);
        KdWrite->setObjectName(QString::fromUtf8("KdWrite"));
        KdWrite->setFont(font);

        verticalLayout_4->addWidget(KdWrite);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_2);

        log_plain_text_edit = new QPlainTextEdit(centralWidget);
        log_plain_text_edit->setObjectName(QString::fromUtf8("log_plain_text_edit"));
        log_plain_text_edit->setMinimumSize(QSize(0, 250));

        verticalLayout_7->addWidget(log_plain_text_edit);


        verticalLayout_8->addLayout(verticalLayout_7);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
#if QT_CONFIG(shortcut)
        IP_label->setBuddy(IPv4_line_edit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Test_TCP", nullptr));
        IP_label->setText(QCoreApplication::translate("MainWindow", "IPv4:", nullptr));
#if QT_CONFIG(whatsthis)
        IPv4_line_edit->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        IPv4_line_edit->setText(QCoreApplication::translate("MainWindow", "192.168.1.1", nullptr));
        slave_label->setText(QCoreApplication::translate("MainWindow", "Slave:", nullptr));
        slave_line_edit->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        port_label->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        port_line_edit->setText(QCoreApplication::translate("MainWindow", "502", nullptr));
        rd_reg_label->setText(QCoreApplication::translate("MainWindow", "Reg:", nullptr));
        rd_reg_line_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        rd_count_label->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        rd_count_line_edit->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        rd_button->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        wr_reg_label->setText(QCoreApplication::translate("MainWindow", "Reg:", nullptr));
        wr_reg_line_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        wr_val_label->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));
        wr_val_line_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        wr_button->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        connect_button->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Kp", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ki", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kd", nullptr));
        KpWrite->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        KiWrite->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        KdWrite->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
