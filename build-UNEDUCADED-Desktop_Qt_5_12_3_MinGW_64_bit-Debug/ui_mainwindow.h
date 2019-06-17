/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "dialog.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionFront_View;
    QAction *actionBack_View;
    QAction *actionRight_View;
    QAction *actionLeft_View;
    QAction *actionTop_View;
    QAction *actionOptions;
    QAction *actionFont;
    QAction *actionHelp;
    QAction *actionOption;
    QWidget *centralWidget;
    QTreeWidget *objectTreeWidget;
    QTabWidget *layerTab;
    QWidget *tab;
    QLabel *label;
    QMdiArea *mdiArea;
    Dialog *subwindow;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QMdiArea *mdiArea_2;
    Dialog *subwindow_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QComboBox *comboBox_2;
    QListWidget *itemListWidget_2;
    QWidget *tab_2;
    QOpenGLWidget *openGLWidget_2;
    QWidget *objectAdditionView;
    QListWidget *itemListWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *undoButton;
    QPushButton *redoButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *moveButton;
    QPushButton *rotateButton;
    QPushButton *scaleButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *flipButton;
    QPushButton *textButton;
    QPushButton *lengthButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *colorButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuedit;
    QMenu *menuView;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionFront_View = new QAction(MainWindow);
        actionFront_View->setObjectName(QString::fromUtf8("actionFront_View"));
        actionBack_View = new QAction(MainWindow);
        actionBack_View->setObjectName(QString::fromUtf8("actionBack_View"));
        actionRight_View = new QAction(MainWindow);
        actionRight_View->setObjectName(QString::fromUtf8("actionRight_View"));
        actionLeft_View = new QAction(MainWindow);
        actionLeft_View->setObjectName(QString::fromUtf8("actionLeft_View"));
        actionTop_View = new QAction(MainWindow);
        actionTop_View->setObjectName(QString::fromUtf8("actionTop_View"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionOption = new QAction(MainWindow);
        actionOption->setObjectName(QString::fromUtf8("actionOption"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        objectTreeWidget = new QTreeWidget(centralWidget);
        objectTreeWidget->setObjectName(QString::fromUtf8("objectTreeWidget"));
        objectTreeWidget->setGeometry(QRect(3, 52, 275, 961));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(objectTreeWidget->sizePolicy().hasHeightForWidth());
        objectTreeWidget->setSizePolicy(sizePolicy1);
        objectTreeWidget->setMaximumSize(QSize(275, 970));
        QFont font;
        font.setPointSize(12);
        objectTreeWidget->setFont(font);
        objectTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        objectTreeWidget->setProperty("showDropIndicator", QVariant(false));
        objectTreeWidget->setDragEnabled(false);
        objectTreeWidget->setIconSize(QSize(10, 10));
        layerTab = new QTabWidget(centralWidget);
        layerTab->setObjectName(QString::fromUtf8("layerTab"));
        layerTab->setGeometry(QRect(279, 50, 1350, 971));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(layerTab->sizePolicy().hasHeightForWidth());
        layerTab->setSizePolicy(sizePolicy2);
        layerTab->setMaximumSize(QSize(1350, 16777215));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(840, 910, 500, 30));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        mdiArea = new QMdiArea(tab);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(0, 0, 1341, 891));
        mdiArea->setMaximumSize(QSize(16777215, 16777215));
        subwindow = new Dialog();
        subwindow->setObjectName(QString::fromUtf8("subwindow"));
        subwindow->setMinimumSize(QSize(1325, 820));
        subwindow->setMaximumSize(QSize(1325, 820));
        layoutWidget = new QWidget(subwindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(830, 858, 501, 89));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        textBrowser_2 = new QTextBrowser(layoutWidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        horizontalLayout_5->addWidget(textBrowser_2);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout_5->addWidget(textBrowser);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        mdiArea_2 = new QMdiArea(subwindow);
        mdiArea_2->setObjectName(QString::fromUtf8("mdiArea_2"));
        mdiArea_2->setGeometry(QRect(110, -140, 1341, 891));
        mdiArea_2->setMaximumSize(QSize(16777215, 16777215));
        subwindow_2 = new Dialog();
        subwindow_2->setObjectName(QString::fromUtf8("subwindow_2"));
        subwindow_2->setMinimumSize(QSize(1325, 820));
        subwindow_2->setMaximumSize(QSize(1325, 820));
        layoutWidget_2 = new QWidget(subwindow_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(830, 858, 501, 89));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        textBrowser_3 = new QTextBrowser(layoutWidget_2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        horizontalLayout_6->addWidget(textBrowser_3);

        textBrowser_4 = new QTextBrowser(layoutWidget_2);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        horizontalLayout_6->addWidget(textBrowser_4);

        comboBox_2 = new QComboBox(layoutWidget_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_6->addWidget(comboBox_2);

        mdiArea_2->addSubWindow(subwindow_2);
        itemListWidget_2 = new QListWidget(subwindow);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/resources/icons/door.png"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font1;
        font1.setPointSize(15);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(itemListWidget_2);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setFont(font1);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resources/icons/window.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(itemListWidget_2);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem1->setFont(font1);
        __qlistwidgetitem1->setIcon(icon1);
        itemListWidget_2->setObjectName(QString::fromUtf8("itemListWidget_2"));
        itemListWidget_2->setGeometry(QRect(1464, -161, 281, 961));
        itemListWidget_2->setFont(font1);
        itemListWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        itemListWidget_2->setDragEnabled(true);
        itemListWidget_2->setDragDropMode(QAbstractItemView::DragDrop);
        itemListWidget_2->setIconSize(QSize(50, 50));
        itemListWidget_2->setFlow(QListView::LeftToRight);
        itemListWidget_2->setSpacing(10);
        itemListWidget_2->setViewMode(QListView::IconMode);
        itemListWidget_2->setItemAlignment(Qt::AlignJustify);
        mdiArea->addSubWindow(subwindow);
        layerTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        openGLWidget_2 = new QOpenGLWidget(tab_2);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(0, 0, 1350, 940));
        layerTab->addTab(tab_2, QString());
        objectAdditionView = new QWidget(centralWidget);
        objectAdditionView->setObjectName(QString::fromUtf8("objectAdditionView"));
        objectAdditionView->setGeometry(QRect(1635, 50, 281, 961));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(objectAdditionView->sizePolicy().hasHeightForWidth());
        objectAdditionView->setSizePolicy(sizePolicy3);
        objectAdditionView->setMaximumSize(QSize(300, 1020));
        itemListWidget = new QListWidget(objectAdditionView);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/resources/icons/wall.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(itemListWidget);
        __qlistwidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem2->setFont(font1);
        __qlistwidgetitem2->setIcon(icon2);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(itemListWidget);
        __qlistwidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem3->setFont(font1);
        __qlistwidgetitem3->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(itemListWidget);
        __qlistwidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem4->setFont(font1);
        __qlistwidgetitem4->setIcon(icon);
        itemListWidget->setObjectName(QString::fromUtf8("itemListWidget"));
        itemListWidget->setGeometry(QRect(0, 0, 281, 961));
        itemListWidget->setFont(font1);
        itemListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        itemListWidget->setDragEnabled(true);
        itemListWidget->setDragDropMode(QAbstractItemView::DragDrop);
        itemListWidget->setIconSize(QSize(50, 50));
        itemListWidget->setFlow(QListView::LeftToRight);
        itemListWidget->setSpacing(15);
        itemListWidget->setViewMode(QListView::IconMode);
        itemListWidget->setItemAlignment(Qt::AlignHCenter);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(4, 10, 533, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(15);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        undoButton = new QPushButton(layoutWidget1);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setMinimumSize(QSize(30, 30));
        undoButton->setMaximumSize(QSize(30, 30));
        undoButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/undo.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout->addWidget(undoButton);

        redoButton = new QPushButton(layoutWidget1);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));
        redoButton->setMaximumSize(QSize(30, 30));
        redoButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/redo.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout->addWidget(redoButton);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        moveButton = new QPushButton(layoutWidget1);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        moveButton->setMaximumSize(QSize(30, 30));
        moveButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/move.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_2->addWidget(moveButton);

        rotateButton = new QPushButton(layoutWidget1);
        rotateButton->setObjectName(QString::fromUtf8("rotateButton"));
        rotateButton->setMaximumSize(QSize(30, 30));
        rotateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/rotate.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_2->addWidget(rotateButton);

        scaleButton = new QPushButton(layoutWidget1);
        scaleButton->setObjectName(QString::fromUtf8("scaleButton"));
        scaleButton->setMaximumSize(QSize(30, 30));
        scaleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/resize.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_2->addWidget(scaleButton);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(15);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        flipButton = new QPushButton(layoutWidget1);
        flipButton->setObjectName(QString::fromUtf8("flipButton"));
        flipButton->setMaximumSize(QSize(30, 30));
        flipButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/flip_icon.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_3->addWidget(flipButton);

        textButton = new QPushButton(layoutWidget1);
        textButton->setObjectName(QString::fromUtf8("textButton"));
        textButton->setMaximumSize(QSize(30, 30));
        textButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/text.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_3->addWidget(textButton);

        lengthButton = new QPushButton(layoutWidget1);
        lengthButton->setObjectName(QString::fromUtf8("lengthButton"));
        lengthButton->setMaximumSize(QSize(30, 30));
        lengthButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/measure_icon.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_3->addWidget(lengthButton);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        colorButton = new QPushButton(layoutWidget1);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setMaximumSize(QSize(30, 30));
        colorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(:/icons/resources/icons/color-picker.png) 0 0 0 0 stretch stretch;\n"
"}"));

        horizontalLayout_4->addWidget(colorButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuedit = new QMenu(menuBar);
        menuedit->setObjectName(QString::fromUtf8("menuedit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuedit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuedit->addAction(actionUndo);
        menuedit->addAction(actionRedo);
        menuedit->addAction(actionCopy);
        menuedit->addAction(actionCut);
        menuedit->addAction(actionPaste);
        menuedit->addAction(actionDelete);
        menuView->addAction(actionFront_View);
        menuView->addAction(actionBack_View);
        menuView->addAction(actionRight_View);
        menuView->addAction(actionLeft_View);
        menuView->addAction(actionTop_View);
        menuTools->addAction(actionFont);
        menuTools->addAction(actionOption);
        menuHelp->addAction(actionHelp);

        retranslateUi(MainWindow);

        layerTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        actionFront_View->setText(QApplication::translate("MainWindow", "Front View", nullptr));
        actionBack_View->setText(QApplication::translate("MainWindow", "Back View", nullptr));
        actionRight_View->setText(QApplication::translate("MainWindow", "Right View", nullptr));
        actionLeft_View->setText(QApplication::translate("MainWindow", "Left View", nullptr));
        actionTop_View->setText(QApplication::translate("MainWindow", "Top View", nullptr));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", nullptr));
        actionFont->setText(QApplication::translate("MainWindow", "Font", nullptr));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", nullptr));
        actionOption->setText(QApplication::translate("MainWindow", "Option", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = objectTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Property", nullptr));
        label->setText(QString());
        subwindow->setWindowTitle(QApplication::translate("MainWindow", "Subwindow", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "m", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "cm", nullptr));

        subwindow_2->setWindowTitle(QApplication::translate("MainWindow", "Subwindow", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "m", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "cm", nullptr));


        const bool __sortingEnabled = itemListWidget_2->isSortingEnabled();
        itemListWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = itemListWidget_2->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "bath", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = itemListWidget_2->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "window", nullptr));
        itemListWidget_2->setSortingEnabled(__sortingEnabled);

        layerTab->setTabText(layerTab->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        layerTab->setTabText(layerTab->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));

        const bool __sortingEnabled1 = itemListWidget->isSortingEnabled();
        itemListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem2 = itemListWidget->item(0);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "wall", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = itemListWidget->item(1);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "window", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = itemListWidget->item(2);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "door", nullptr));
        itemListWidget->setSortingEnabled(__sortingEnabled1);

        undoButton->setText(QString());
        redoButton->setText(QString());
        moveButton->setText(QString());
        rotateButton->setText(QString());
        scaleButton->setText(QString());
        flipButton->setText(QString());
        textButton->setText(QString());
        lengthButton->setText(QString());
        colorButton->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuedit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
