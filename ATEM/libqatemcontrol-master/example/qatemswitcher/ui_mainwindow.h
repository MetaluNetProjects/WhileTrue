/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Apr 5 16:08:13 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *autoButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QPushButton *dsk1TieButton;
    QPushButton *dsk1OnAirButton;
    QPushButton *dsk1AutoButton;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *dsk2TieButton;
    QPushButton *dsk2OnAirButton;
    QPushButton *dsk2AutoButton;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QPushButton *key4Btn;
    QPushButton *bkgdBtn;
    QPushButton *key3Btn;
    QPushButton *key2OnAirBtn;
    QPushButton *key2Btn;
    QPushButton *key1Btn;
    QPushButton *key3OnAirBtn;
    QPushButton *key4OnAirBtn;
    QPushButton *key1OnAirBtn;
    QPushButton *mixBtn;
    QPushButton *dipBtn;
    QPushButton *wipeBtn;
    QPushButton *stingBtn;
    QPushButton *dveBtn;
    QFrame *line;
    QSlider *tBar;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *preview1Button;
    QPushButton *preview2Button;
    QPushButton *preview3Button;
    QPushButton *preview4Button;
    QPushButton *preview5Button;
    QPushButton *preview6Button;
    QPushButton *preview7Button;
    QPushButton *preview8Button;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *program1Button;
    QPushButton *program2Button;
    QPushButton *program3Button;
    QPushButton *program4Button;
    QPushButton *program5Button;
    QPushButton *program6Button;
    QPushButton *program7Button;
    QPushButton *program8Button;
    QSpacerItem *verticalSpacer;
    QPushButton *prevTransBtn;
    QLCDNumber *transitionRate;
    QPushButton *cutButton;
    QPushButton *ftbBtn;
    QLCDNumber *ftbRate;
    QMenuBar *menuBar;
    QMenu *menu_File;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1420, 251);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        autoButton = new QPushButton(centralWidget);
        autoButton->setObjectName(QString::fromUtf8("autoButton"));

        gridLayout->addWidget(autoButton, 4, 5, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dsk1TieButton = new QPushButton(groupBox_3);
        dsk1TieButton->setObjectName(QString::fromUtf8("dsk1TieButton"));
        dsk1TieButton->setCheckable(true);

        verticalLayout->addWidget(dsk1TieButton);

        dsk1OnAirButton = new QPushButton(groupBox_3);
        dsk1OnAirButton->setObjectName(QString::fromUtf8("dsk1OnAirButton"));
        dsk1OnAirButton->setCheckable(true);

        verticalLayout->addWidget(dsk1OnAirButton);

        dsk1AutoButton = new QPushButton(groupBox_3);
        dsk1AutoButton->setObjectName(QString::fromUtf8("dsk1AutoButton"));

        verticalLayout->addWidget(dsk1AutoButton);


        gridLayout->addWidget(groupBox_3, 0, 8, 4, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dsk2TieButton = new QPushButton(groupBox_4);
        dsk2TieButton->setObjectName(QString::fromUtf8("dsk2TieButton"));
        dsk2TieButton->setCheckable(true);

        verticalLayout_2->addWidget(dsk2TieButton);

        dsk2OnAirButton = new QPushButton(groupBox_4);
        dsk2OnAirButton->setObjectName(QString::fromUtf8("dsk2OnAirButton"));
        dsk2OnAirButton->setCheckable(true);

        verticalLayout_2->addWidget(dsk2OnAirButton);

        dsk2AutoButton = new QPushButton(groupBox_4);
        dsk2AutoButton->setObjectName(QString::fromUtf8("dsk2AutoButton"));

        verticalLayout_2->addWidget(dsk2AutoButton);


        gridLayout->addWidget(groupBox_4, 0, 9, 4, 1);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        key4Btn = new QPushButton(groupBox_5);
        key4Btn->setObjectName(QString::fromUtf8("key4Btn"));
        key4Btn->setCheckable(true);

        gridLayout_2->addWidget(key4Btn, 1, 4, 1, 1);

        bkgdBtn = new QPushButton(groupBox_5);
        bkgdBtn->setObjectName(QString::fromUtf8("bkgdBtn"));
        bkgdBtn->setCheckable(true);

        gridLayout_2->addWidget(bkgdBtn, 1, 0, 1, 1);

        key3Btn = new QPushButton(groupBox_5);
        key3Btn->setObjectName(QString::fromUtf8("key3Btn"));
        key3Btn->setCheckable(true);

        gridLayout_2->addWidget(key3Btn, 1, 3, 1, 1);

        key2OnAirBtn = new QPushButton(groupBox_5);
        key2OnAirBtn->setObjectName(QString::fromUtf8("key2OnAirBtn"));
        key2OnAirBtn->setCheckable(true);

        gridLayout_2->addWidget(key2OnAirBtn, 0, 2, 1, 1);

        key2Btn = new QPushButton(groupBox_5);
        key2Btn->setObjectName(QString::fromUtf8("key2Btn"));
        key2Btn->setCheckable(true);

        gridLayout_2->addWidget(key2Btn, 1, 2, 1, 1);

        key1Btn = new QPushButton(groupBox_5);
        key1Btn->setObjectName(QString::fromUtf8("key1Btn"));
        key1Btn->setCheckable(true);

        gridLayout_2->addWidget(key1Btn, 1, 1, 1, 1);

        key3OnAirBtn = new QPushButton(groupBox_5);
        key3OnAirBtn->setObjectName(QString::fromUtf8("key3OnAirBtn"));
        key3OnAirBtn->setCheckable(true);

        gridLayout_2->addWidget(key3OnAirBtn, 0, 3, 1, 1);

        key4OnAirBtn = new QPushButton(groupBox_5);
        key4OnAirBtn->setObjectName(QString::fromUtf8("key4OnAirBtn"));
        key4OnAirBtn->setCheckable(true);

        gridLayout_2->addWidget(key4OnAirBtn, 0, 4, 1, 1);

        key1OnAirBtn = new QPushButton(groupBox_5);
        key1OnAirBtn->setObjectName(QString::fromUtf8("key1OnAirBtn"));
        key1OnAirBtn->setCheckable(true);

        gridLayout_2->addWidget(key1OnAirBtn, 0, 1, 1, 1);

        mixBtn = new QPushButton(groupBox_5);
        mixBtn->setObjectName(QString::fromUtf8("mixBtn"));
        mixBtn->setCheckable(true);

        gridLayout_2->addWidget(mixBtn, 3, 0, 1, 1);

        dipBtn = new QPushButton(groupBox_5);
        dipBtn->setObjectName(QString::fromUtf8("dipBtn"));
        dipBtn->setCheckable(true);

        gridLayout_2->addWidget(dipBtn, 3, 1, 1, 1);

        wipeBtn = new QPushButton(groupBox_5);
        wipeBtn->setObjectName(QString::fromUtf8("wipeBtn"));
        wipeBtn->setCheckable(true);

        gridLayout_2->addWidget(wipeBtn, 3, 2, 1, 1);

        stingBtn = new QPushButton(groupBox_5);
        stingBtn->setObjectName(QString::fromUtf8("stingBtn"));
        stingBtn->setCheckable(true);

        gridLayout_2->addWidget(stingBtn, 3, 3, 1, 1);

        dveBtn = new QPushButton(groupBox_5);
        dveBtn->setObjectName(QString::fromUtf8("dveBtn"));
        dveBtn->setCheckable(true);

        gridLayout_2->addWidget(dveBtn, 3, 4, 1, 1);

        line = new QFrame(groupBox_5);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 5);


        gridLayout->addWidget(groupBox_5, 0, 3, 4, 4);

        tBar = new QSlider(centralWidget);
        tBar->setObjectName(QString::fromUtf8("tBar"));
        tBar->setMaximum(10000);
        tBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(tBar, 0, 7, 5, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        preview1Button = new QPushButton(groupBox_2);
        preview1Button->setObjectName(QString::fromUtf8("preview1Button"));
        preview1Button->setCheckable(true);

        horizontalLayout_2->addWidget(preview1Button);

        preview2Button = new QPushButton(groupBox_2);
        preview2Button->setObjectName(QString::fromUtf8("preview2Button"));
        preview2Button->setCheckable(true);

        horizontalLayout_2->addWidget(preview2Button);

        preview3Button = new QPushButton(groupBox_2);
        preview3Button->setObjectName(QString::fromUtf8("preview3Button"));
        preview3Button->setCheckable(true);

        horizontalLayout_2->addWidget(preview3Button);

        preview4Button = new QPushButton(groupBox_2);
        preview4Button->setObjectName(QString::fromUtf8("preview4Button"));
        preview4Button->setCheckable(true);

        horizontalLayout_2->addWidget(preview4Button);

        preview5Button = new QPushButton(groupBox_2);
        preview5Button->setObjectName(QString::fromUtf8("preview5Button"));
        preview5Button->setCheckable(true);

        horizontalLayout_2->addWidget(preview5Button);

        preview6Button = new QPushButton(groupBox_2);
        preview6Button->setObjectName(QString::fromUtf8("preview6Button"));
        preview6Button->setCheckable(true);

        horizontalLayout_2->addWidget(preview6Button);

        preview7Button = new QPushButton(groupBox_2);
        preview7Button->setObjectName(QString::fromUtf8("preview7Button"));
        preview7Button->setCheckable(true);

        horizontalLayout_2->addWidget(preview7Button);

        preview8Button = new QPushButton(groupBox_2);
        preview8Button->setObjectName(QString::fromUtf8("preview8Button"));
        preview8Button->setCheckable(true);

        horizontalLayout_2->addWidget(preview8Button);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 3);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        program1Button = new QPushButton(groupBox);
        program1Button->setObjectName(QString::fromUtf8("program1Button"));
        program1Button->setCheckable(true);

        horizontalLayout->addWidget(program1Button);

        program2Button = new QPushButton(groupBox);
        program2Button->setObjectName(QString::fromUtf8("program2Button"));
        program2Button->setCheckable(true);

        horizontalLayout->addWidget(program2Button);

        program3Button = new QPushButton(groupBox);
        program3Button->setObjectName(QString::fromUtf8("program3Button"));
        program3Button->setCheckable(true);

        horizontalLayout->addWidget(program3Button);

        program4Button = new QPushButton(groupBox);
        program4Button->setObjectName(QString::fromUtf8("program4Button"));
        program4Button->setCheckable(true);

        horizontalLayout->addWidget(program4Button);

        program5Button = new QPushButton(groupBox);
        program5Button->setObjectName(QString::fromUtf8("program5Button"));
        program5Button->setCheckable(true);

        horizontalLayout->addWidget(program5Button);

        program6Button = new QPushButton(groupBox);
        program6Button->setObjectName(QString::fromUtf8("program6Button"));
        program6Button->setCheckable(true);

        horizontalLayout->addWidget(program6Button);

        program7Button = new QPushButton(groupBox);
        program7Button->setObjectName(QString::fromUtf8("program7Button"));
        program7Button->setCheckable(true);

        horizontalLayout->addWidget(program7Button);

        program8Button = new QPushButton(groupBox);
        program8Button->setObjectName(QString::fromUtf8("program8Button"));
        program8Button->setCheckable(true);

        horizontalLayout->addWidget(program8Button);


        gridLayout->addWidget(groupBox, 0, 0, 3, 3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 9, 1, 1);

        prevTransBtn = new QPushButton(centralWidget);
        prevTransBtn->setObjectName(QString::fromUtf8("prevTransBtn"));
        prevTransBtn->setCheckable(true);

        gridLayout->addWidget(prevTransBtn, 4, 3, 1, 1);

        transitionRate = new QLCDNumber(centralWidget);
        transitionRate->setObjectName(QString::fromUtf8("transitionRate"));

        gridLayout->addWidget(transitionRate, 4, 4, 1, 1);

        cutButton = new QPushButton(centralWidget);
        cutButton->setObjectName(QString::fromUtf8("cutButton"));

        gridLayout->addWidget(cutButton, 4, 6, 1, 1);

        ftbBtn = new QPushButton(centralWidget);
        ftbBtn->setObjectName(QString::fromUtf8("ftbBtn"));
        ftbBtn->setCheckable(true);

        gridLayout->addWidget(ftbBtn, 4, 9, 1, 1);

        ftbRate = new QLCDNumber(centralWidget);
        ftbRate->setObjectName(QString::fromUtf8("ftbRate"));

        gridLayout->addWidget(ftbRate, 4, 8, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1420, 33));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(program1Button, program2Button);
        QWidget::setTabOrder(program2Button, program3Button);
        QWidget::setTabOrder(program3Button, program4Button);
        QWidget::setTabOrder(program4Button, program5Button);
        QWidget::setTabOrder(program5Button, program6Button);
        QWidget::setTabOrder(program6Button, program7Button);
        QWidget::setTabOrder(program7Button, program8Button);
        QWidget::setTabOrder(program8Button, preview1Button);
        QWidget::setTabOrder(preview1Button, preview2Button);
        QWidget::setTabOrder(preview2Button, preview3Button);
        QWidget::setTabOrder(preview3Button, preview4Button);
        QWidget::setTabOrder(preview4Button, preview5Button);
        QWidget::setTabOrder(preview5Button, preview6Button);
        QWidget::setTabOrder(preview6Button, preview7Button);
        QWidget::setTabOrder(preview7Button, preview8Button);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QAtemSwitcher", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        autoButton->setText(QApplication::translate("MainWindow", "Auto", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "DSK 1", 0, QApplication::UnicodeUTF8));
        dsk1TieButton->setText(QApplication::translate("MainWindow", "Tie", 0, QApplication::UnicodeUTF8));
        dsk1OnAirButton->setText(QApplication::translate("MainWindow", "On Air", 0, QApplication::UnicodeUTF8));
        dsk1AutoButton->setText(QApplication::translate("MainWindow", "Auto", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "DSK 2", 0, QApplication::UnicodeUTF8));
        dsk2TieButton->setText(QApplication::translate("MainWindow", "Tie", 0, QApplication::UnicodeUTF8));
        dsk2OnAirButton->setText(QApplication::translate("MainWindow", "On Air", 0, QApplication::UnicodeUTF8));
        dsk2AutoButton->setText(QApplication::translate("MainWindow", "Auto", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Next Transition", 0, QApplication::UnicodeUTF8));
        key4Btn->setText(QApplication::translate("MainWindow", "Key 4", 0, QApplication::UnicodeUTF8));
        bkgdBtn->setText(QApplication::translate("MainWindow", "Bkgd", 0, QApplication::UnicodeUTF8));
        key3Btn->setText(QApplication::translate("MainWindow", "Key 3", 0, QApplication::UnicodeUTF8));
        key2OnAirBtn->setText(QApplication::translate("MainWindow", "On Air", 0, QApplication::UnicodeUTF8));
        key2Btn->setText(QApplication::translate("MainWindow", "Key 2", 0, QApplication::UnicodeUTF8));
        key1Btn->setText(QApplication::translate("MainWindow", "Key 1", 0, QApplication::UnicodeUTF8));
        key3OnAirBtn->setText(QApplication::translate("MainWindow", "On Air", 0, QApplication::UnicodeUTF8));
        key4OnAirBtn->setText(QApplication::translate("MainWindow", "On Air", 0, QApplication::UnicodeUTF8));
        key1OnAirBtn->setText(QApplication::translate("MainWindow", "On Air", 0, QApplication::UnicodeUTF8));
        mixBtn->setText(QApplication::translate("MainWindow", "Mix", 0, QApplication::UnicodeUTF8));
        dipBtn->setText(QApplication::translate("MainWindow", "Dip", 0, QApplication::UnicodeUTF8));
        wipeBtn->setText(QApplication::translate("MainWindow", "Wipe", 0, QApplication::UnicodeUTF8));
        stingBtn->setText(QApplication::translate("MainWindow", "Sting", 0, QApplication::UnicodeUTF8));
        dveBtn->setText(QApplication::translate("MainWindow", "DVE", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Preview", 0, QApplication::UnicodeUTF8));
        preview1Button->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        preview2Button->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        preview3Button->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        preview4Button->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        preview5Button->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        preview6Button->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        preview7Button->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        preview8Button->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Program", 0, QApplication::UnicodeUTF8));
        program1Button->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        program2Button->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        program3Button->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        program4Button->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        program5Button->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        program6Button->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        program7Button->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        program8Button->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        prevTransBtn->setText(QApplication::translate("MainWindow", "Prev Trans", 0, QApplication::UnicodeUTF8));
        cutButton->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        ftbBtn->setText(QApplication::translate("MainWindow", "FTB", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
