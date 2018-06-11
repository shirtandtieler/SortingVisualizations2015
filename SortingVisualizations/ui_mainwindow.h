/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QLabel *label_maxNum;
    QLabel *label_minNum;
    QLabel *label_num2gen;
    QSpinBox *spin_minNum;
    QSpinBox *spin_num2gen;
    QPushButton *btn_genData;
    QSpinBox *spin_maxNum;
    QFrame *line_4;
    QLabel *label_inputOrder;
    QGridLayout *gridLayout_4;
    QTextEdit *field_preSort;
    QPushButton *btn_clearData;
    QLabel *label_preSort;
    QLabel *label_postSort;
    QTextEdit *field_postSort;
    QTableWidget *table_prevData;
    QGridLayout *gridLayout_6;
    QRadioButton *radio_asc;
    QRadioButton *radio_dec;
    QRadioButton *radio_rand;
    QRadioButton *radio_same;
    QLabel *label_sortMethod;
    QGridLayout *gLayout_sortMethod;
    QRadioButton *radio_insert;
    QRadioButton *radio_merge;
    QRadioButton *radio_bubble;
    QRadioButton *radio_heap;
    QRadioButton *radio_selec;
    QRadioButton *radio_shell;
    QVBoxLayout *vLayout_quick1;
    QRadioButton *radio_quick1;
    QLabel *label_quick1;
    QGridLayout *gridLayout_3;
    QRadioButton *radio_quick2;
    QSpinBox *spin_quick2;
    QLabel *label_quick2;
    QVBoxLayout *vLayout_quick3;
    QRadioButton *radio_quick3;
    QLabel *label_quick3;
    QCustomPlot *customPlot;
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line_5;
    QFrame *line;
    QLabel *label_constraints;
    QStatusBar *statusBar;
    QButtonGroup *btngroup_sorting;
    QButtonGroup *btngroup_order;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1027, 720);
        MainWindow->setAnimated(false);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(0, -1, -1, 0);
        label_maxNum = new QLabel(centralWidget);
        label_maxNum->setObjectName(QStringLiteral("label_maxNum"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_maxNum->sizePolicy().hasHeightForWidth());
        label_maxNum->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label_maxNum->setFont(font);
        label_maxNum->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_maxNum, 1, 0, 1, 1);

        label_minNum = new QLabel(centralWidget);
        label_minNum->setObjectName(QStringLiteral("label_minNum"));
        sizePolicy.setHeightForWidth(label_minNum->sizePolicy().hasHeightForWidth());
        label_minNum->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        font1.setKerning(true);
        label_minNum->setFont(font1);
        label_minNum->setAcceptDrops(false);
        label_minNum->setInputMethodHints(Qt::ImhNone);
        label_minNum->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_minNum, 0, 0, 1, 1);

        label_num2gen = new QLabel(centralWidget);
        label_num2gen->setObjectName(QStringLiteral("label_num2gen"));
        sizePolicy.setHeightForWidth(label_num2gen->sizePolicy().hasHeightForWidth());
        label_num2gen->setSizePolicy(sizePolicy);
        label_num2gen->setFont(font);
        label_num2gen->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_num2gen, 3, 0, 1, 1);

        spin_minNum = new QSpinBox(centralWidget);
        spin_minNum->setObjectName(QStringLiteral("spin_minNum"));
        spin_minNum->setEnabled(true);
        sizePolicy.setHeightForWidth(spin_minNum->sizePolicy().hasHeightForWidth());
        spin_minNum->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(14);
        spin_minNum->setFont(font2);
        spin_minNum->setAlignment(Qt::AlignCenter);
        spin_minNum->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spin_minNum->setMinimum(-32765);
        spin_minNum->setMaximum(32764);

        gridLayout->addWidget(spin_minNum, 0, 1, 1, 1);

        spin_num2gen = new QSpinBox(centralWidget);
        spin_num2gen->setObjectName(QStringLiteral("spin_num2gen"));
        sizePolicy.setHeightForWidth(spin_num2gen->sizePolicy().hasHeightForWidth());
        spin_num2gen->setSizePolicy(sizePolicy);
        spin_num2gen->setMinimumSize(QSize(85, 0));
        spin_num2gen->setFont(font2);
        spin_num2gen->setAlignment(Qt::AlignCenter);
        spin_num2gen->setMinimum(1);
        spin_num2gen->setMaximum(10000);
        spin_num2gen->setDisplayIntegerBase(10);

        gridLayout->addWidget(spin_num2gen, 3, 1, 1, 2);

        btn_genData = new QPushButton(centralWidget);
        btn_genData->setObjectName(QStringLiteral("btn_genData"));
        sizePolicy.setHeightForWidth(btn_genData->sizePolicy().hasHeightForWidth());
        btn_genData->setSizePolicy(sizePolicy);
        btn_genData->setAutoRepeatInterval(100);
        btn_genData->setAutoDefault(false);
        btn_genData->setFlat(false);

        gridLayout->addWidget(btn_genData, 4, 0, 1, 2);

        spin_maxNum = new QSpinBox(centralWidget);
        spin_maxNum->setObjectName(QStringLiteral("spin_maxNum"));
        sizePolicy.setHeightForWidth(spin_maxNum->sizePolicy().hasHeightForWidth());
        spin_maxNum->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(14);
        font3.setStyleStrategy(QFont::PreferDefault);
        spin_maxNum->setFont(font3);
        spin_maxNum->setAlignment(Qt::AlignCenter);
        spin_maxNum->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spin_maxNum->setMinimum(-32764);
        spin_maxNum->setMaximum(32765);

        gridLayout->addWidget(spin_maxNum, 1, 1, 1, 1);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy1);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 2, 0, 1, 2);


        gridLayout_5->addLayout(gridLayout, 1, 4, 1, 1);

        label_inputOrder = new QLabel(centralWidget);
        label_inputOrder->setObjectName(QStringLiteral("label_inputOrder"));
        sizePolicy.setHeightForWidth(label_inputOrder->sizePolicy().hasHeightForWidth());
        label_inputOrder->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(12);
        font4.setUnderline(true);
        label_inputOrder->setFont(font4);
        label_inputOrder->setAlignment(Qt::AlignCenter);
        label_inputOrder->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_5->addWidget(label_inputOrder, 0, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(10);
        gridLayout_4->setContentsMargins(0, -1, 0, 0);
        field_preSort = new QTextEdit(centralWidget);
        field_preSort->setObjectName(QStringLiteral("field_preSort"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(field_preSort->sizePolicy().hasHeightForWidth());
        field_preSort->setSizePolicy(sizePolicy2);
        field_preSort->setMaximumSize(QSize(16777215, 16777215));
        field_preSort->setFrameShape(QFrame::Panel);
        field_preSort->setFrameShadow(QFrame::Sunken);
        field_preSort->setReadOnly(true);

        gridLayout_4->addWidget(field_preSort, 3, 0, 1, 1);

        btn_clearData = new QPushButton(centralWidget);
        btn_clearData->setObjectName(QStringLiteral("btn_clearData"));
        sizePolicy.setHeightForWidth(btn_clearData->sizePolicy().hasHeightForWidth());
        btn_clearData->setSizePolicy(sizePolicy);
        btn_clearData->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_4->addWidget(btn_clearData, 6, 0, 1, 1);

        label_preSort = new QLabel(centralWidget);
        label_preSort->setObjectName(QStringLiteral("label_preSort"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_preSort->sizePolicy().hasHeightForWidth());
        label_preSort->setSizePolicy(sizePolicy3);
        label_preSort->setMaximumSize(QSize(16777215, 16777215));
        label_preSort->setFont(font4);
        label_preSort->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_preSort, 2, 0, 1, 5);

        label_postSort = new QLabel(centralWidget);
        label_postSort->setObjectName(QStringLiteral("label_postSort"));
        sizePolicy3.setHeightForWidth(label_postSort->sizePolicy().hasHeightForWidth());
        label_postSort->setSizePolicy(sizePolicy3);
        label_postSort->setFont(font4);
        label_postSort->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_postSort, 4, 0, 1, 5);

        field_postSort = new QTextEdit(centralWidget);
        field_postSort->setObjectName(QStringLiteral("field_postSort"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(field_postSort->sizePolicy().hasHeightForWidth());
        field_postSort->setSizePolicy(sizePolicy4);
        field_postSort->setMaximumSize(QSize(16777215, 16777215));
        field_postSort->setFrameShape(QFrame::Panel);
        field_postSort->setReadOnly(true);

        gridLayout_4->addWidget(field_postSort, 5, 0, 1, 5);

        table_prevData = new QTableWidget(centralWidget);
        if (table_prevData->columnCount() < 2)
            table_prevData->setColumnCount(2);
        QFont font5;
        font5.setUnderline(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font5);
        table_prevData->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font5);
        table_prevData->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        table_prevData->setObjectName(QStringLiteral("table_prevData"));
        sizePolicy.setHeightForWidth(table_prevData->sizePolicy().hasHeightForWidth());
        table_prevData->setSizePolicy(sizePolicy);
        table_prevData->setMinimumSize(QSize(0, 200));
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(false);
        font6.setWeight(50);
        table_prevData->setFont(font6);
        table_prevData->setLayoutDirection(Qt::LeftToRight);
        table_prevData->setFrameShape(QFrame::Panel);
        table_prevData->setFrameShadow(QFrame::Sunken);
        table_prevData->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        table_prevData->setAutoScrollMargin(16);
        table_prevData->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_prevData->setProperty("showDropIndicator", QVariant(true));
        table_prevData->setDragEnabled(true);
        table_prevData->setDragDropOverwriteMode(false);
        table_prevData->setAlternatingRowColors(true);
        table_prevData->setSelectionMode(QAbstractItemView::NoSelection);
        table_prevData->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_prevData->setTextElideMode(Qt::ElideRight);
        table_prevData->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        table_prevData->setShowGrid(false);
        table_prevData->setGridStyle(Qt::SolidLine);
        table_prevData->setSortingEnabled(true);
        table_prevData->setWordWrap(false);
        table_prevData->setCornerButtonEnabled(false);
        table_prevData->horizontalHeader()->setVisible(true);
        table_prevData->horizontalHeader()->setCascadingSectionResizes(true);
        table_prevData->horizontalHeader()->setDefaultSectionSize(150);
        table_prevData->horizontalHeader()->setHighlightSections(true);
        table_prevData->horizontalHeader()->setMinimumSectionSize(35);
        table_prevData->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_prevData->horizontalHeader()->setStretchLastSection(true);
        table_prevData->verticalHeader()->setVisible(false);
        table_prevData->verticalHeader()->setCascadingSectionResizes(false);
        table_prevData->verticalHeader()->setMinimumSectionSize(30);

        gridLayout_4->addWidget(table_prevData, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 4, 4, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_6->setContentsMargins(-1, -1, -1, 0);
        radio_asc = new QRadioButton(centralWidget);
        btngroup_order = new QButtonGroup(MainWindow);
        btngroup_order->setObjectName(QStringLiteral("btngroup_order"));
        btngroup_order->addButton(radio_asc);
        radio_asc->setObjectName(QStringLiteral("radio_asc"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(radio_asc->sizePolicy().hasHeightForWidth());
        radio_asc->setSizePolicy(sizePolicy5);
        radio_asc->setFont(font);
        radio_asc->setLayoutDirection(Qt::LeftToRight);
        radio_asc->setChecked(true);

        gridLayout_6->addWidget(radio_asc, 0, 0, 1, 1);

        radio_dec = new QRadioButton(centralWidget);
        btngroup_order->addButton(radio_dec);
        radio_dec->setObjectName(QStringLiteral("radio_dec"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(radio_dec->sizePolicy().hasHeightForWidth());
        radio_dec->setSizePolicy(sizePolicy6);
        radio_dec->setFont(font);
        radio_dec->setChecked(false);

        gridLayout_6->addWidget(radio_dec, 1, 0, 1, 1);

        radio_rand = new QRadioButton(centralWidget);
        btngroup_order->addButton(radio_rand);
        radio_rand->setObjectName(QStringLiteral("radio_rand"));
        sizePolicy6.setHeightForWidth(radio_rand->sizePolicy().hasHeightForWidth());
        radio_rand->setSizePolicy(sizePolicy6);
        radio_rand->setFont(font);

        gridLayout_6->addWidget(radio_rand, 2, 0, 1, 1);

        radio_same = new QRadioButton(centralWidget);
        btngroup_order->addButton(radio_same);
        radio_same->setObjectName(QStringLiteral("radio_same"));
        radio_same->setEnabled(true);
        sizePolicy6.setHeightForWidth(radio_same->sizePolicy().hasHeightForWidth());
        radio_same->setSizePolicy(sizePolicy6);
        radio_same->setFont(font);

        gridLayout_6->addWidget(radio_same, 3, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_6, 1, 2, 1, 1);

        label_sortMethod = new QLabel(centralWidget);
        label_sortMethod->setObjectName(QStringLiteral("label_sortMethod"));
        sizePolicy.setHeightForWidth(label_sortMethod->sizePolicy().hasHeightForWidth());
        label_sortMethod->setSizePolicy(sizePolicy);
        label_sortMethod->setFont(font4);
        label_sortMethod->setLayoutDirection(Qt::LeftToRight);
        label_sortMethod->setAutoFillBackground(false);
        label_sortMethod->setScaledContents(false);
        label_sortMethod->setAlignment(Qt::AlignCenter);
        label_sortMethod->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_5->addWidget(label_sortMethod, 0, 0, 1, 1);

        gLayout_sortMethod = new QGridLayout();
        gLayout_sortMethod->setSpacing(0);
        gLayout_sortMethod->setObjectName(QStringLiteral("gLayout_sortMethod"));
        gLayout_sortMethod->setSizeConstraint(QLayout::SetFixedSize);
        gLayout_sortMethod->setContentsMargins(0, -1, -1, 0);
        radio_insert = new QRadioButton(centralWidget);
        btngroup_sorting = new QButtonGroup(MainWindow);
        btngroup_sorting->setObjectName(QStringLiteral("btngroup_sorting"));
        btngroup_sorting->addButton(radio_insert);
        radio_insert->setObjectName(QStringLiteral("radio_insert"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(radio_insert->sizePolicy().hasHeightForWidth());
        radio_insert->setSizePolicy(sizePolicy7);
        radio_insert->setFont(font);

        gLayout_sortMethod->addWidget(radio_insert, 1, 3, 1, 1);

        radio_merge = new QRadioButton(centralWidget);
        btngroup_sorting->addButton(radio_merge);
        radio_merge->setObjectName(QStringLiteral("radio_merge"));
        sizePolicy7.setHeightForWidth(radio_merge->sizePolicy().hasHeightForWidth());
        radio_merge->setSizePolicy(sizePolicy7);
        radio_merge->setFont(font);

        gLayout_sortMethod->addWidget(radio_merge, 2, 1, 1, 1);

        radio_bubble = new QRadioButton(centralWidget);
        btngroup_sorting->addButton(radio_bubble);
        radio_bubble->setObjectName(QStringLiteral("radio_bubble"));
        sizePolicy7.setHeightForWidth(radio_bubble->sizePolicy().hasHeightForWidth());
        radio_bubble->setSizePolicy(sizePolicy7);
        radio_bubble->setFont(font);
        radio_bubble->setChecked(true);

        gLayout_sortMethod->addWidget(radio_bubble, 1, 1, 1, 1);

        radio_heap = new QRadioButton(centralWidget);
        btngroup_sorting->addButton(radio_heap);
        radio_heap->setObjectName(QStringLiteral("radio_heap"));
        sizePolicy7.setHeightForWidth(radio_heap->sizePolicy().hasHeightForWidth());
        radio_heap->setSizePolicy(sizePolicy7);
        radio_heap->setFont(font);

        gLayout_sortMethod->addWidget(radio_heap, 1, 2, 1, 1);

        radio_selec = new QRadioButton(centralWidget);
        btngroup_sorting->addButton(radio_selec);
        radio_selec->setObjectName(QStringLiteral("radio_selec"));
        sizePolicy7.setHeightForWidth(radio_selec->sizePolicy().hasHeightForWidth());
        radio_selec->setSizePolicy(sizePolicy7);
        radio_selec->setFont(font);

        gLayout_sortMethod->addWidget(radio_selec, 2, 2, 1, 1);

        radio_shell = new QRadioButton(centralWidget);
        btngroup_sorting->addButton(radio_shell);
        radio_shell->setObjectName(QStringLiteral("radio_shell"));
        sizePolicy7.setHeightForWidth(radio_shell->sizePolicy().hasHeightForWidth());
        radio_shell->setSizePolicy(sizePolicy7);
        radio_shell->setFont(font);

        gLayout_sortMethod->addWidget(radio_shell, 2, 3, 1, 1);

        vLayout_quick1 = new QVBoxLayout();
        vLayout_quick1->setSpacing(6);
        vLayout_quick1->setObjectName(QStringLiteral("vLayout_quick1"));
        vLayout_quick1->setSizeConstraint(QLayout::SetNoConstraint);
        radio_quick1 = new QRadioButton(centralWidget);
        btngroup_sorting->addButton(radio_quick1);
        radio_quick1->setObjectName(QStringLiteral("radio_quick1"));
        sizePolicy7.setHeightForWidth(radio_quick1->sizePolicy().hasHeightForWidth());
        radio_quick1->setSizePolicy(sizePolicy7);
        radio_quick1->setFont(font);

        vLayout_quick1->addWidget(radio_quick1);

        label_quick1 = new QLabel(centralWidget);
        label_quick1->setObjectName(QStringLiteral("label_quick1"));
        sizePolicy7.setHeightForWidth(label_quick1->sizePolicy().hasHeightForWidth());
        label_quick1->setSizePolicy(sizePolicy7);
        QFont font7;
        font7.setPointSize(10);
        label_quick1->setFont(font7);
        label_quick1->setFrameShadow(QFrame::Plain);
        label_quick1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_quick1->setWordWrap(false);

        vLayout_quick1->addWidget(label_quick1);


        gLayout_sortMethod->addLayout(vLayout_quick1, 3, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        radio_quick2 = new QRadioButton(centralWidget);
        btngroup_sorting->addButton(radio_quick2);
        radio_quick2->setObjectName(QStringLiteral("radio_quick2"));
        sizePolicy7.setHeightForWidth(radio_quick2->sizePolicy().hasHeightForWidth());
        radio_quick2->setSizePolicy(sizePolicy7);
        radio_quick2->setFont(font);

        gridLayout_3->addWidget(radio_quick2, 0, 0, 1, 1);

        spin_quick2 = new QSpinBox(centralWidget);
        spin_quick2->setObjectName(QStringLiteral("spin_quick2"));
        spin_quick2->setEnabled(false);
        sizePolicy7.setHeightForWidth(spin_quick2->sizePolicy().hasHeightForWidth());
        spin_quick2->setSizePolicy(sizePolicy7);
        spin_quick2->setWrapping(true);
        spin_quick2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spin_quick2->setReadOnly(false);
        spin_quick2->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spin_quick2->setAccelerated(true);
        spin_quick2->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        spin_quick2->setProperty("showGroupSeparator", QVariant(false));
        spin_quick2->setMaximum(16777215);

        gridLayout_3->addWidget(spin_quick2, 0, 1, 1, 1);

        label_quick2 = new QLabel(centralWidget);
        label_quick2->setObjectName(QStringLiteral("label_quick2"));
        sizePolicy7.setHeightForWidth(label_quick2->sizePolicy().hasHeightForWidth());
        label_quick2->setSizePolicy(sizePolicy7);
        label_quick2->setFont(font7);
        label_quick2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_quick2->setWordWrap(false);

        gridLayout_3->addWidget(label_quick2, 1, 0, 1, 2);


        gLayout_sortMethod->addLayout(gridLayout_3, 3, 2, 1, 1);

        vLayout_quick3 = new QVBoxLayout();
        vLayout_quick3->setSpacing(6);
        vLayout_quick3->setObjectName(QStringLiteral("vLayout_quick3"));
        vLayout_quick3->setSizeConstraint(QLayout::SetNoConstraint);
        radio_quick3 = new QRadioButton(centralWidget);
        btngroup_sorting->addButton(radio_quick3);
        radio_quick3->setObjectName(QStringLiteral("radio_quick3"));
        sizePolicy7.setHeightForWidth(radio_quick3->sizePolicy().hasHeightForWidth());
        radio_quick3->setSizePolicy(sizePolicy7);
        radio_quick3->setFont(font);

        vLayout_quick3->addWidget(radio_quick3);

        label_quick3 = new QLabel(centralWidget);
        label_quick3->setObjectName(QStringLiteral("label_quick3"));
        sizePolicy7.setHeightForWidth(label_quick3->sizePolicy().hasHeightForWidth());
        label_quick3->setSizePolicy(sizePolicy7);
        label_quick3->setFont(font7);
        label_quick3->setFrameShape(QFrame::NoFrame);
        label_quick3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_quick3->setWordWrap(false);

        vLayout_quick3->addWidget(label_quick3);


        gLayout_sortMethod->addLayout(vLayout_quick3, 3, 3, 1, 1);


        gridLayout_5->addLayout(gLayout_sortMethod, 1, 0, 1, 1);

        customPlot = new QCustomPlot(centralWidget);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        sizePolicy.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(customPlot, 4, 0, 1, 3);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_3, 1, 3, 1, 1);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_2, 1, 1, 1, 1);

        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_5, 4, 3, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 3, 0, 1, 5);

        label_constraints = new QLabel(centralWidget);
        label_constraints->setObjectName(QStringLiteral("label_constraints"));
        sizePolicy.setHeightForWidth(label_constraints->sizePolicy().hasHeightForWidth());
        label_constraints->setSizePolicy(sizePolicy);
        label_constraints->setFont(font4);
        label_constraints->setAlignment(Qt::AlignCenter);
        label_constraints->setWordWrap(false);
        label_constraints->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_5->addWidget(label_constraints, 0, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 0, 1, 2, 4);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        btn_genData->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_maxNum->setText(QApplication::translate("MainWindow", "Maximum number:", 0));
        label_minNum->setText(QApplication::translate("MainWindow", "Minimum number:", 0));
        label_num2gen->setText(QApplication::translate("MainWindow", "Nums to generate:", 0));
#ifndef QT_NO_TOOLTIP
        btn_genData->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btn_genData->setText(QApplication::translate("MainWindow", "Generate/Plot Data", 0));
        label_inputOrder->setText(QApplication::translate("MainWindow", "Order of input", 0));
        field_preSort->setDocumentTitle(QString());
        btn_clearData->setText(QApplication::translate("MainWindow", "Clear/Reset all data", 0));
        label_preSort->setText(QApplication::translate("MainWindow", "Before Sorting", 0));
        label_postSort->setText(QApplication::translate("MainWindow", "After Sorting", 0));
        QTableWidgetItem *___qtablewidgetitem = table_prevData->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Prev. generated sizes", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_prevData->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Prev. run times", 0));
        radio_asc->setText(QApplication::translate("MainWindow", "Ascending", 0));
        radio_dec->setText(QApplication::translate("MainWindow", "Descending", 0));
        radio_rand->setText(QApplication::translate("MainWindow", "Random", 0));
        radio_same->setText(QApplication::translate("MainWindow", "Same data", 0));
        label_sortMethod->setText(QApplication::translate("MainWindow", "Sorting Method", 0));
        radio_insert->setText(QApplication::translate("MainWindow", "Insert", 0));
        radio_merge->setText(QApplication::translate("MainWindow", "Merge", 0));
        radio_bubble->setText(QApplication::translate("MainWindow", "Bubble", 0));
        radio_heap->setText(QApplication::translate("MainWindow", "Heap", 0));
        radio_selec->setText(QApplication::translate("MainWindow", "Selection", 0));
        radio_shell->setText(QApplication::translate("MainWindow", "Shell", 0));
        radio_quick1->setText(QApplication::translate("MainWindow", "Quick 1", 0));
        label_quick1->setText(QApplication::translate("MainWindow", "    (Right pivot point)", 0));
#ifndef QT_NO_TOOLTIP
        radio_quick2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        radio_quick2->setText(QApplication::translate("MainWindow", "Quick 2", 0));
#ifndef QT_NO_WHATSTHIS
        spin_quick2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        spin_quick2->setPrefix(QString());
        label_quick2->setText(QApplication::translate("MainWindow", "    (Right pivot point w/switch)", 0));
        radio_quick3->setText(QApplication::translate("MainWindow", "Quick 3", 0));
        label_quick3->setText(QApplication::translate("MainWindow", "    (Median of threes)", 0));
        label_constraints->setText(QApplication::translate("MainWindow", "Generated Number Constraints", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
