/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
    QAction *actionObject_Window;
    QAction *actionObject_Addition_Window;
    QAction *actionOptions;
    QAction *actionHelp;
    QAction *actionObject_Addition_Window_2;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *buttonLayout;
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
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QListView *objectListView;
    QTabWidget *layerTab;
    QWidget *tab;
    QOpenGLWidget *openGLWidget;
    QWidget *tab_2;
    QOpenGLWidget *openGLWidget_2;
    QWidget *objectAdditionView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuedit;
    QMenu *menuView;
    QMenu *menuWindow;
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
        actionObject_Window = new QAction(MainWindow);
        actionObject_Window->setObjectName(QString::fromUtf8("actionObject_Window"));
        actionObject_Addition_Window = new QAction(MainWindow);
        actionObject_Addition_Window->setObjectName(QString::fromUtf8("actionObject_Addition_Window"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionObject_Addition_Window_2 = new QAction(MainWindow);
        actionObject_Addition_Window_2->setObjectName(QString::fromUtf8("actionObject_Addition_Window_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 1, 2220, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(6);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonLayout->setContentsMargins(5, 5, 10, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        undoButton = new QPushButton(layoutWidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(undoButton);

        redoButton = new QPushButton(layoutWidget);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));
        redoButton->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(redoButton);


        buttonLayout->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        moveButton = new QPushButton(layoutWidget);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        moveButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(moveButton);

        rotateButton = new QPushButton(layoutWidget);
        rotateButton->setObjectName(QString::fromUtf8("rotateButton"));
        rotateButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(rotateButton);

        scaleButton = new QPushButton(layoutWidget);
        scaleButton->setObjectName(QString::fromUtf8("scaleButton"));
        scaleButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(scaleButton);


        buttonLayout->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        flipButton = new QPushButton(layoutWidget);
        flipButton->setObjectName(QString::fromUtf8("flipButton"));
        flipButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(flipButton);

        textButton = new QPushButton(layoutWidget);
        textButton->setObjectName(QString::fromUtf8("textButton"));
        textButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(textButton);

        lengthButton = new QPushButton(layoutWidget);
        lengthButton->setObjectName(QString::fromUtf8("lengthButton"));
        lengthButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(lengthButton);


        buttonLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_3);

        colorButton = new QPushButton(layoutWidget);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setMaximumSize(QSize(30, 30));

        buttonLayout->addWidget(colorButton);


        horizontalLayout_4->addLayout(buttonLayout);

        horizontalSpacer_4 = new QSpacerItem(1800, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(2, 51, 1911, 961));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        objectListView = new QListView(widget);
        objectListView->setObjectName(QString::fromUtf8("objectListView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(objectListView->sizePolicy().hasHeightForWidth());
        objectListView->setSizePolicy(sizePolicy);
        objectListView->setMaximumSize(QSize(275, 970));

        horizontalLayout_5->addWidget(objectListView);

        layerTab = new QTabWidget(widget);
        layerTab->setObjectName(QString::fromUtf8("layerTab"));
        sizePolicy.setHeightForWidth(layerTab->sizePolicy().hasHeightForWidth());
        layerTab->setSizePolicy(sizePolicy);
        layerTab->setMaximumSize(QSize(1200, 16777215));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        openGLWidget = new QOpenGLWidget(tab);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(0, 0, 1201, 940));
        layerTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        openGLWidget_2 = new QOpenGLWidget(tab_2);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));
        openGLWidget_2->setGeometry(QRect(0, 0, 1350, 940));
        layerTab->addTab(tab_2, QString());

        horizontalLayout_5->addWidget(layerTab);

        objectAdditionView = new QWidget(widget);
        objectAdditionView->setObjectName(QString::fromUtf8("objectAdditionView"));
        objectAdditionView->setMaximumSize(QSize(300, 1020));

        horizontalLayout_5->addWidget(objectAdditionView);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuedit = new QMenu(menuBar);
        menuedit->setObjectName(QString::fromUtf8("menuedit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
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
        menuBar->addAction(menuWindow->menuAction());
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
        menuWindow->addAction(actionObject_Window);
        menuWindow->addAction(actionObject_Addition_Window);
        menuWindow->addAction(actionObject_Addition_Window_2);
        menuTools->addAction(actionOptions);
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
        actionObject_Window->setText(QApplication::translate("MainWindow", "Object List Window", nullptr));
        actionObject_Addition_Window->setText(QApplication::translate("MainWindow", "Object Edit Window", nullptr));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", nullptr));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", nullptr));
        actionObject_Addition_Window_2->setText(QApplication::translate("MainWindow", "Object Addition Window", nullptr));
        undoButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        redoButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        moveButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        rotateButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        scaleButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        flipButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        textButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        lengthButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        colorButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        layerTab->setTabText(layerTab->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        layerTab->setTabText(layerTab->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuedit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuWindow->setTitle(QApplication::translate("MainWindow", "Window", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
