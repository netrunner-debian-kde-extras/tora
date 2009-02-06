/********************************************************************************
** Form generated from reading ui file 'totuningoverviewui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOTUNINGOVERVIEWUI_H
#define UI_TOTUNINGOVERVIEWUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "toresultbar.h"
#include "toresultline.h"
#include "toresultpie.h"

QT_BEGIN_NAMESPACE

class Ui_toTuningOverviewUI
{
public:
    QGridLayout *gridLayout;
    toResultLine *RedoEntries;
    QSpacerItem *spacerItem;
    toResultLine *ClientInput;
    toResultLine *PhysicalWrite;
    toResultLine *LogicalRead;
    toResultLine *LogicalChange;
    toResultLine *PhysicalRead;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    toResultLine *ClientOutput;
    QSpacerItem *spacerItem3;
    QGroupBox *GroupBox1_42;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem4;
    QGroupBox *GroupBox7;
    QGridLayout *gridLayout2;
    toResultLine *BufferHit;
    QLabel *BufferSize;
    QLabel *TextLabel2_2_2_2;
    QLabel *SGATotal;
    QLabel *TextLabel2_2_2_2_2;
    QLabel *RedoBuffer;
    QSpacerItem *spacerItem5;
    QGroupBox *GroupBox8;
    QGridLayout *gridLayout3;
    QLabel *SharedSize;
    toResultBar *SharedUsed;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    toResultLine *ParseCount;
    toResultLine *ExecuteCount;
    QGroupBox *GroupBox11;
    QGridLayout *gridLayout4;
    QLabel *ArchiveInfo;
    QLabel *TextLabel2_2_2_2_3_2_2;
    QGroupBox *GroupBox1_4;
    QGridLayout *gridLayout5;
    QGroupBox *GroupBox9;
    QGridLayout *gridLayout6;
    QLabel *Filesize;
    QLabel *Files;
    QLabel *TextLabel2_2_2_2_4;
    QLabel *Tablespaces;
    QLabel *TextLabel2_2_2_2_5;
    QLabel *TextLabel2_2_2_2_3;
    toResultPie *FileUsed;
    QGroupBox *GroupBox10;
    QGridLayout *gridLayout7;
    QLabel *RedoFiles;
    QLabel *TextLabel2_2_2_2_5_2;
    QLabel *TextLabel2_2_2_2_4_2;
    QLabel *TextLabel2_2_2_2_3_2;
    QLabel *RedoSize;
    QLabel *ActiveRedo;
    QSpacerItem *spacerItem8;
    QGroupBox *ProcessGroup;
    QGridLayout *gridLayout8;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout9;
    QLabel *TextLabel2_5;
    QLabel *ParallellServer;
    QLabel *DispatcherServer;
    QLabel *TextLabel2_3;
    QLabel *SharedServer;
    QLabel *TextLabel2_4;
    QLabel *TextLabel2_2;
    QLabel *DedicatedServer;
    QLabel *TotalProcess;
    QLabel *TextLabel2_2_2;
    QGroupBox *BackgroundGroup;
    toResultLine *ArchiveWrite;
    toResultLine *Timescale;
    QSpacerItem *spacerItem9;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout10;
    QSpacerItem *spacerItem10;
    QSpacerItem *spacerItem11;
    QLabel *TextLabel2;
    QLabel *TotalClient;
    QLabel *TextLabel4;
    QLabel *ActiveClient;
    QLabel *TextLabel2_6;
    QLabel *SendFromClient;
    QLabel *SendToClient;
    QLabel *TextLabel4_2;
    toResultBar *ClientChart;
    QSpacerItem *spacerItem12;
    QSpacerItem *spacerItem13;
    toResultLine *LogWrite;
    QSpacerItem *spacerItem14;

    void setupUi(QWidget *toTuningOverviewUI)
    {
    if (toTuningOverviewUI->objectName().isEmpty())
        toTuningOverviewUI->setObjectName(QString::fromUtf8("toTuningOverviewUI"));
    toTuningOverviewUI->resize(906, 552);
    gridLayout = new QGridLayout(toTuningOverviewUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    RedoEntries = new toResultLine(toTuningOverviewUI);
    RedoEntries->setObjectName(QString::fromUtf8("RedoEntries"));

    gridLayout->addWidget(RedoEntries, 4, 3, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 0, 1, 1, 1);

    ClientInput = new toResultLine(toTuningOverviewUI);
    ClientInput->setObjectName(QString::fromUtf8("ClientInput"));

    gridLayout->addWidget(ClientInput, 1, 1, 1, 1);

    PhysicalWrite = new toResultLine(toTuningOverviewUI);
    PhysicalWrite->setObjectName(QString::fromUtf8("PhysicalWrite"));

    gridLayout->addWidget(PhysicalWrite, 2, 5, 1, 1);

    LogicalRead = new toResultLine(toTuningOverviewUI);
    LogicalRead->setObjectName(QString::fromUtf8("LogicalRead"));

    gridLayout->addWidget(LogicalRead, 1, 3, 1, 1);

    LogicalChange = new toResultLine(toTuningOverviewUI);
    LogicalChange->setObjectName(QString::fromUtf8("LogicalChange"));

    gridLayout->addWidget(LogicalChange, 2, 3, 1, 1);

    PhysicalRead = new toResultLine(toTuningOverviewUI);
    PhysicalRead->setObjectName(QString::fromUtf8("PhysicalRead"));

    gridLayout->addWidget(PhysicalRead, 1, 5, 1, 1);

    spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem1, 0, 5, 1, 1);

    spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem2, 0, 3, 1, 1);

    ClientOutput = new toResultLine(toTuningOverviewUI);
    ClientOutput->setObjectName(QString::fromUtf8("ClientOutput"));

    gridLayout->addWidget(ClientOutput, 2, 1, 1, 1);

    spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem3, 3, 3, 1, 1);

    GroupBox1_42 = new QGroupBox(toTuningOverviewUI);
    GroupBox1_42->setObjectName(QString::fromUtf8("GroupBox1_42"));
    gridLayout1 = new QGridLayout(GroupBox1_42);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem4, 3, 0, 1, 1);

    GroupBox7 = new QGroupBox(GroupBox1_42);
    GroupBox7->setObjectName(QString::fromUtf8("GroupBox7"));
    gridLayout2 = new QGridLayout(GroupBox7);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    BufferHit = new toResultLine(GroupBox7);
    BufferHit->setObjectName(QString::fromUtf8("BufferHit"));

    gridLayout2->addWidget(BufferHit, 1, 0, 1, 1);

    BufferSize = new QLabel(GroupBox7);
    BufferSize->setObjectName(QString::fromUtf8("BufferSize"));
    QFont font;
    font.setBold(true);
    font.setWeight(75);
    BufferSize->setFont(font);
    BufferSize->setAlignment(Qt::AlignCenter);
    BufferSize->setWordWrap(false);

    gridLayout2->addWidget(BufferSize, 0, 0, 1, 1);


    gridLayout1->addWidget(GroupBox7, 2, 0, 1, 1);

    TextLabel2_2_2_2 = new QLabel(GroupBox1_42);
    TextLabel2_2_2_2->setObjectName(QString::fromUtf8("TextLabel2_2_2_2"));
    TextLabel2_2_2_2->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel2_2_2_2, 0, 0, 1, 1);

    SGATotal = new QLabel(GroupBox1_42);
    SGATotal->setObjectName(QString::fromUtf8("SGATotal"));
    SGATotal->setFont(font);
    SGATotal->setAlignment(Qt::AlignCenter);
    SGATotal->setWordWrap(false);

    gridLayout1->addWidget(SGATotal, 1, 0, 1, 1);

    TextLabel2_2_2_2_2 = new QLabel(GroupBox1_42);
    TextLabel2_2_2_2_2->setObjectName(QString::fromUtf8("TextLabel2_2_2_2_2"));
    TextLabel2_2_2_2_2->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2_2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel2_2_2_2_2, 4, 0, 1, 1);

    RedoBuffer = new QLabel(GroupBox1_42);
    RedoBuffer->setObjectName(QString::fromUtf8("RedoBuffer"));
    RedoBuffer->setFont(font);
    RedoBuffer->setAlignment(Qt::AlignCenter);
    RedoBuffer->setWordWrap(false);

    gridLayout1->addWidget(RedoBuffer, 5, 0, 1, 1);

    spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem5, 8, 0, 1, 1);

    GroupBox8 = new QGroupBox(GroupBox1_42);
    GroupBox8->setObjectName(QString::fromUtf8("GroupBox8"));
    gridLayout3 = new QGridLayout(GroupBox8);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    gridLayout3->setHorizontalSpacing(6);
    gridLayout3->setVerticalSpacing(6);
    gridLayout3->setContentsMargins(11, 11, 11, 11);
    SharedSize = new QLabel(GroupBox8);
    SharedSize->setObjectName(QString::fromUtf8("SharedSize"));
    SharedSize->setFont(font);
    SharedSize->setAlignment(Qt::AlignCenter);
    SharedSize->setWordWrap(false);

    gridLayout3->addWidget(SharedSize, 0, 0, 1, 1);

    SharedUsed = new toResultBar(GroupBox8);
    SharedUsed->setObjectName(QString::fromUtf8("SharedUsed"));

    gridLayout3->addWidget(SharedUsed, 1, 0, 1, 1);


    gridLayout1->addWidget(GroupBox8, 7, 0, 1, 1);

    spacerItem6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem6, 6, 0, 1, 1);


    gridLayout->addWidget(GroupBox1_42, 0, 4, 9, 1);

    spacerItem7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem7, 5, 3, 1, 1);

    ParseCount = new toResultLine(toTuningOverviewUI);
    ParseCount->setObjectName(QString::fromUtf8("ParseCount"));

    gridLayout->addWidget(ParseCount, 6, 3, 1, 1);

    ExecuteCount = new toResultLine(toTuningOverviewUI);
    ExecuteCount->setObjectName(QString::fromUtf8("ExecuteCount"));

    gridLayout->addWidget(ExecuteCount, 7, 3, 1, 1);

    GroupBox11 = new QGroupBox(toTuningOverviewUI);
    GroupBox11->setObjectName(QString::fromUtf8("GroupBox11"));
    gridLayout4 = new QGridLayout(GroupBox11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    gridLayout4->setHorizontalSpacing(6);
    gridLayout4->setVerticalSpacing(6);
    gridLayout4->setContentsMargins(11, 11, 11, 11);
    ArchiveInfo = new QLabel(GroupBox11);
    ArchiveInfo->setObjectName(QString::fromUtf8("ArchiveInfo"));
    ArchiveInfo->setFont(font);
    ArchiveInfo->setAlignment(Qt::AlignCenter);
    ArchiveInfo->setWordWrap(false);

    gridLayout4->addWidget(ArchiveInfo, 1, 0, 1, 1);

    TextLabel2_2_2_2_3_2_2 = new QLabel(GroupBox11);
    TextLabel2_2_2_2_3_2_2->setObjectName(QString::fromUtf8("TextLabel2_2_2_2_3_2_2"));
    TextLabel2_2_2_2_3_2_2->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2_3_2_2->setWordWrap(false);

    gridLayout4->addWidget(TextLabel2_2_2_2_3_2_2, 0, 0, 1, 1);


    gridLayout->addWidget(GroupBox11, 9, 4, 2, 1);

    GroupBox1_4 = new QGroupBox(toTuningOverviewUI);
    GroupBox1_4->setObjectName(QString::fromUtf8("GroupBox1_4"));
    gridLayout5 = new QGridLayout(GroupBox1_4);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    gridLayout5->setHorizontalSpacing(6);
    gridLayout5->setVerticalSpacing(6);
    gridLayout5->setContentsMargins(11, 11, 11, 11);
    GroupBox9 = new QGroupBox(GroupBox1_4);
    GroupBox9->setObjectName(QString::fromUtf8("GroupBox9"));
    gridLayout6 = new QGridLayout(GroupBox9);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    gridLayout6->setHorizontalSpacing(6);
    gridLayout6->setVerticalSpacing(6);
    gridLayout6->setContentsMargins(11, 11, 11, 11);
    Filesize = new QLabel(GroupBox9);
    Filesize->setObjectName(QString::fromUtf8("Filesize"));
    Filesize->setFont(font);
    Filesize->setAlignment(Qt::AlignCenter);
    Filesize->setWordWrap(false);

    gridLayout6->addWidget(Filesize, 5, 0, 1, 1);

    Files = new QLabel(GroupBox9);
    Files->setObjectName(QString::fromUtf8("Files"));
    Files->setFont(font);
    Files->setAlignment(Qt::AlignCenter);
    Files->setWordWrap(false);

    gridLayout6->addWidget(Files, 3, 0, 1, 1);

    TextLabel2_2_2_2_4 = new QLabel(GroupBox9);
    TextLabel2_2_2_2_4->setObjectName(QString::fromUtf8("TextLabel2_2_2_2_4"));
    TextLabel2_2_2_2_4->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2_4->setWordWrap(false);

    gridLayout6->addWidget(TextLabel2_2_2_2_4, 4, 0, 1, 1);

    Tablespaces = new QLabel(GroupBox9);
    Tablespaces->setObjectName(QString::fromUtf8("Tablespaces"));
    Tablespaces->setFont(font);
    Tablespaces->setAlignment(Qt::AlignCenter);
    Tablespaces->setWordWrap(false);

    gridLayout6->addWidget(Tablespaces, 1, 0, 1, 1);

    TextLabel2_2_2_2_5 = new QLabel(GroupBox9);
    TextLabel2_2_2_2_5->setObjectName(QString::fromUtf8("TextLabel2_2_2_2_5"));
    TextLabel2_2_2_2_5->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2_5->setWordWrap(false);

    gridLayout6->addWidget(TextLabel2_2_2_2_5, 2, 0, 1, 1);

    TextLabel2_2_2_2_3 = new QLabel(GroupBox9);
    TextLabel2_2_2_2_3->setObjectName(QString::fromUtf8("TextLabel2_2_2_2_3"));
    TextLabel2_2_2_2_3->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2_3->setWordWrap(false);

    gridLayout6->addWidget(TextLabel2_2_2_2_3, 0, 0, 1, 1);

    FileUsed = new toResultPie(GroupBox9);
    FileUsed->setObjectName(QString::fromUtf8("FileUsed"));

    gridLayout6->addWidget(FileUsed, 6, 0, 1, 1);


    gridLayout5->addWidget(GroupBox9, 0, 0, 1, 1);

    GroupBox10 = new QGroupBox(GroupBox1_4);
    GroupBox10->setObjectName(QString::fromUtf8("GroupBox10"));
    gridLayout7 = new QGridLayout(GroupBox10);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    gridLayout7->setHorizontalSpacing(6);
    gridLayout7->setVerticalSpacing(6);
    gridLayout7->setContentsMargins(11, 11, 11, 11);
    RedoFiles = new QLabel(GroupBox10);
    RedoFiles->setObjectName(QString::fromUtf8("RedoFiles"));
    RedoFiles->setFont(font);
    RedoFiles->setAlignment(Qt::AlignCenter);
    RedoFiles->setWordWrap(false);

    gridLayout7->addWidget(RedoFiles, 1, 0, 1, 1);

    TextLabel2_2_2_2_5_2 = new QLabel(GroupBox10);
    TextLabel2_2_2_2_5_2->setObjectName(QString::fromUtf8("TextLabel2_2_2_2_5_2"));
    TextLabel2_2_2_2_5_2->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2_5_2->setWordWrap(false);

    gridLayout7->addWidget(TextLabel2_2_2_2_5_2, 2, 0, 1, 1);

    TextLabel2_2_2_2_4_2 = new QLabel(GroupBox10);
    TextLabel2_2_2_2_4_2->setObjectName(QString::fromUtf8("TextLabel2_2_2_2_4_2"));
    TextLabel2_2_2_2_4_2->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2_4_2->setWordWrap(false);

    gridLayout7->addWidget(TextLabel2_2_2_2_4_2, 4, 0, 1, 1);

    TextLabel2_2_2_2_3_2 = new QLabel(GroupBox10);
    TextLabel2_2_2_2_3_2->setObjectName(QString::fromUtf8("TextLabel2_2_2_2_3_2"));
    TextLabel2_2_2_2_3_2->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2_2_3_2->setWordWrap(false);

    gridLayout7->addWidget(TextLabel2_2_2_2_3_2, 0, 0, 1, 1);

    RedoSize = new QLabel(GroupBox10);
    RedoSize->setObjectName(QString::fromUtf8("RedoSize"));
    RedoSize->setFont(font);
    RedoSize->setAlignment(Qt::AlignCenter);
    RedoSize->setWordWrap(false);

    gridLayout7->addWidget(RedoSize, 3, 0, 1, 1);

    ActiveRedo = new QLabel(GroupBox10);
    ActiveRedo->setObjectName(QString::fromUtf8("ActiveRedo"));
    ActiveRedo->setFont(font);
    ActiveRedo->setAlignment(Qt::AlignCenter);
    ActiveRedo->setWordWrap(false);

    gridLayout7->addWidget(ActiveRedo, 5, 0, 1, 1);


    gridLayout5->addWidget(GroupBox10, 1, 0, 1, 1);

    spacerItem8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout5->addItem(spacerItem8, 2, 0, 1, 1);


    gridLayout->addWidget(GroupBox1_4, 0, 6, 11, 1);

    ProcessGroup = new QGroupBox(toTuningOverviewUI);
    ProcessGroup->setObjectName(QString::fromUtf8("ProcessGroup"));
    gridLayout8 = new QGridLayout(ProcessGroup);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    gridLayout8->setHorizontalSpacing(6);
    gridLayout8->setVerticalSpacing(6);
    gridLayout8->setContentsMargins(11, 11, 11, 11);
    GroupBox5 = new QGroupBox(ProcessGroup);
    GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
    gridLayout9 = new QGridLayout(GroupBox5);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    gridLayout9->setHorizontalSpacing(6);
    gridLayout9->setVerticalSpacing(6);
    gridLayout9->setContentsMargins(11, 11, 11, 11);
    TextLabel2_5 = new QLabel(GroupBox5);
    TextLabel2_5->setObjectName(QString::fromUtf8("TextLabel2_5"));
    TextLabel2_5->setAlignment(Qt::AlignCenter);
    TextLabel2_5->setWordWrap(false);

    gridLayout9->addWidget(TextLabel2_5, 2, 0, 1, 1);

    ParallellServer = new QLabel(GroupBox5);
    ParallellServer->setObjectName(QString::fromUtf8("ParallellServer"));
    ParallellServer->setFont(font);
    ParallellServer->setAlignment(Qt::AlignCenter);
    ParallellServer->setWordWrap(false);

    gridLayout9->addWidget(ParallellServer, 5, 0, 1, 1);

    DispatcherServer = new QLabel(GroupBox5);
    DispatcherServer->setObjectName(QString::fromUtf8("DispatcherServer"));
    DispatcherServer->setFont(font);
    DispatcherServer->setAlignment(Qt::AlignCenter);
    DispatcherServer->setWordWrap(false);

    gridLayout9->addWidget(DispatcherServer, 7, 0, 1, 1);

    TextLabel2_3 = new QLabel(GroupBox5);
    TextLabel2_3->setObjectName(QString::fromUtf8("TextLabel2_3"));
    TextLabel2_3->setAlignment(Qt::AlignCenter);
    TextLabel2_3->setWordWrap(false);

    gridLayout9->addWidget(TextLabel2_3, 6, 0, 1, 1);

    SharedServer = new QLabel(GroupBox5);
    SharedServer->setObjectName(QString::fromUtf8("SharedServer"));
    SharedServer->setFont(font);
    SharedServer->setAlignment(Qt::AlignCenter);
    SharedServer->setWordWrap(false);

    gridLayout9->addWidget(SharedServer, 3, 0, 1, 1);

    TextLabel2_4 = new QLabel(GroupBox5);
    TextLabel2_4->setObjectName(QString::fromUtf8("TextLabel2_4"));
    TextLabel2_4->setAlignment(Qt::AlignCenter);
    TextLabel2_4->setWordWrap(false);

    gridLayout9->addWidget(TextLabel2_4, 4, 0, 1, 1);

    TextLabel2_2 = new QLabel(GroupBox5);
    TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
    TextLabel2_2->setAlignment(Qt::AlignCenter);
    TextLabel2_2->setWordWrap(false);

    gridLayout9->addWidget(TextLabel2_2, 0, 0, 1, 1);

    DedicatedServer = new QLabel(GroupBox5);
    DedicatedServer->setObjectName(QString::fromUtf8("DedicatedServer"));
    DedicatedServer->setFont(font);
    DedicatedServer->setAlignment(Qt::AlignCenter);
    DedicatedServer->setWordWrap(false);

    gridLayout9->addWidget(DedicatedServer, 1, 0, 1, 1);


    gridLayout8->addWidget(GroupBox5, 2, 0, 1, 1);

    TotalProcess = new QLabel(ProcessGroup);
    TotalProcess->setObjectName(QString::fromUtf8("TotalProcess"));
    TotalProcess->setFont(font);
    TotalProcess->setAlignment(Qt::AlignCenter);
    TotalProcess->setWordWrap(false);

    gridLayout8->addWidget(TotalProcess, 1, 0, 1, 1);

    TextLabel2_2_2 = new QLabel(ProcessGroup);
    TextLabel2_2_2->setObjectName(QString::fromUtf8("TextLabel2_2_2"));
    TextLabel2_2_2->setAlignment(Qt::AlignCenter);
    TextLabel2_2_2->setWordWrap(false);

    gridLayout8->addWidget(TextLabel2_2_2, 0, 0, 1, 1);

    BackgroundGroup = new QGroupBox(ProcessGroup);
    BackgroundGroup->setObjectName(QString::fromUtf8("BackgroundGroup"));

    gridLayout8->addWidget(BackgroundGroup, 3, 0, 1, 1);


    gridLayout->addWidget(ProcessGroup, 0, 2, 11, 1);

    ArchiveWrite = new toResultLine(toTuningOverviewUI);
    ArchiveWrite->setObjectName(QString::fromUtf8("ArchiveWrite"));

    gridLayout->addWidget(ArchiveWrite, 10, 5, 1, 1);

    Timescale = new toResultLine(toTuningOverviewUI);
    Timescale->setObjectName(QString::fromUtf8("Timescale"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Timescale->sizePolicy().hasHeightForWidth());
    Timescale->setSizePolicy(sizePolicy);

    gridLayout->addWidget(Timescale, 10, 0, 1, 2);

    spacerItem9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem9, 3, 1, 7, 1);

    GroupBox1 = new QGroupBox(toTuningOverviewUI);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout10 = new QGridLayout(GroupBox1);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    gridLayout10->setHorizontalSpacing(6);
    gridLayout10->setVerticalSpacing(6);
    gridLayout10->setContentsMargins(11, 11, 11, 11);
    spacerItem10 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout10->addItem(spacerItem10, 9, 0, 1, 1);

    spacerItem11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout10->addItem(spacerItem11, 4, 0, 1, 1);

    TextLabel2 = new QLabel(GroupBox1);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setAlignment(Qt::AlignCenter);
    TextLabel2->setWordWrap(false);

    gridLayout10->addWidget(TextLabel2, 5, 0, 1, 1);

    TotalClient = new QLabel(GroupBox1);
    TotalClient->setObjectName(QString::fromUtf8("TotalClient"));
    TotalClient->setFont(font);
    TotalClient->setAlignment(Qt::AlignCenter);
    TotalClient->setWordWrap(false);

    gridLayout10->addWidget(TotalClient, 6, 0, 1, 1);

    TextLabel4 = new QLabel(GroupBox1);
    TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
    TextLabel4->setAlignment(Qt::AlignCenter);
    TextLabel4->setWordWrap(false);

    gridLayout10->addWidget(TextLabel4, 7, 0, 1, 1);

    ActiveClient = new QLabel(GroupBox1);
    ActiveClient->setObjectName(QString::fromUtf8("ActiveClient"));
    ActiveClient->setFont(font);
    ActiveClient->setAlignment(Qt::AlignCenter);
    ActiveClient->setWordWrap(false);

    gridLayout10->addWidget(ActiveClient, 8, 0, 1, 1);

    TextLabel2_6 = new QLabel(GroupBox1);
    TextLabel2_6->setObjectName(QString::fromUtf8("TextLabel2_6"));
    TextLabel2_6->setAlignment(Qt::AlignCenter);
    TextLabel2_6->setWordWrap(false);

    gridLayout10->addWidget(TextLabel2_6, 0, 0, 1, 1);

    SendFromClient = new QLabel(GroupBox1);
    SendFromClient->setObjectName(QString::fromUtf8("SendFromClient"));
    SendFromClient->setFont(font);
    SendFromClient->setAlignment(Qt::AlignCenter);
    SendFromClient->setWordWrap(false);

    gridLayout10->addWidget(SendFromClient, 3, 0, 1, 1);

    SendToClient = new QLabel(GroupBox1);
    SendToClient->setObjectName(QString::fromUtf8("SendToClient"));
    SendToClient->setFont(font);
    SendToClient->setAlignment(Qt::AlignCenter);
    SendToClient->setWordWrap(false);

    gridLayout10->addWidget(SendToClient, 1, 0, 1, 1);

    TextLabel4_2 = new QLabel(GroupBox1);
    TextLabel4_2->setObjectName(QString::fromUtf8("TextLabel4_2"));
    TextLabel4_2->setAlignment(Qt::AlignCenter);
    TextLabel4_2->setWordWrap(false);

    gridLayout10->addWidget(TextLabel4_2, 2, 0, 1, 1);

    ClientChart = new toResultBar(GroupBox1);
    ClientChart->setObjectName(QString::fromUtf8("ClientChart"));

    gridLayout10->addWidget(ClientChart, 10, 0, 1, 1);


    gridLayout->addWidget(GroupBox1, 0, 0, 10, 1);

    spacerItem12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem12, 8, 3, 1, 1);

    spacerItem13 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem13, 7, 5, 3, 1);

    LogWrite = new toResultLine(toTuningOverviewUI);
    LogWrite->setObjectName(QString::fromUtf8("LogWrite"));

    gridLayout->addWidget(LogWrite, 6, 5, 1, 1);

    spacerItem14 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem14, 3, 5, 3, 1);


    retranslateUi(toTuningOverviewUI);

    QMetaObject::connectSlotsByName(toTuningOverviewUI);
    } // setupUi

    void retranslateUi(QWidget *toTuningOverviewUI)
    {
    toTuningOverviewUI->setWindowTitle(QApplication::translate("toTuningOverviewUI", "Form1", 0, QApplication::UnicodeUTF8));
    GroupBox1_42->setTitle(QApplication::translate("toTuningOverviewUI", "SGA", 0, QApplication::UnicodeUTF8));
    GroupBox7->setTitle(QApplication::translate("toTuningOverviewUI", "Buffer Cache", 0, QApplication::UnicodeUTF8));
    BufferSize->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2->setText(QApplication::translate("toTuningOverviewUI", "Total", 0, QApplication::UnicodeUTF8));
    SGATotal->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2_2->setText(QApplication::translate("toTuningOverviewUI", "Redo Buffer", 0, QApplication::UnicodeUTF8));
    GroupBox8->setTitle(QApplication::translate("toTuningOverviewUI", "Shared Pool", 0, QApplication::UnicodeUTF8));
    SharedSize->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    GroupBox11->setTitle(QApplication::translate("toTuningOverviewUI", "Archive logs", 0, QApplication::UnicodeUTF8));
    ArchiveInfo->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2_3_2_2->setText(QApplication::translate("toTuningOverviewUI", "Files/Size", 0, QApplication::UnicodeUTF8));
    GroupBox1_4->setTitle(QApplication::translate("toTuningOverviewUI", "Files", 0, QApplication::UnicodeUTF8));
    GroupBox9->setTitle(QApplication::translate("toTuningOverviewUI", "Datafiles", 0, QApplication::UnicodeUTF8));
    Filesize->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    Files->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2_4->setText(QApplication::translate("toTuningOverviewUI", "Used/Total", 0, QApplication::UnicodeUTF8));
    Tablespaces->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2_5->setText(QApplication::translate("toTuningOverviewUI", "Files", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2_3->setText(QApplication::translate("toTuningOverviewUI", "Tablespaces", 0, QApplication::UnicodeUTF8));
    GroupBox10->setTitle(QApplication::translate("toTuningOverviewUI", "Redo Logs", 0, QApplication::UnicodeUTF8));
    RedoFiles->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2_5_2->setText(QApplication::translate("toTuningOverviewUI", "Active/Total", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2_4_2->setText(QApplication::translate("toTuningOverviewUI", "Active group", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2_2_3_2->setText(QApplication::translate("toTuningOverviewUI", "Files", 0, QApplication::UnicodeUTF8));
    RedoSize->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    ActiveRedo->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    ProcessGroup->setTitle(QApplication::translate("toTuningOverviewUI", "Processes", 0, QApplication::UnicodeUTF8));
    GroupBox5->setTitle(QApplication::translate("toTuningOverviewUI", "Server", 0, QApplication::UnicodeUTF8));
    TextLabel2_5->setText(QApplication::translate("toTuningOverviewUI", "Shared", 0, QApplication::UnicodeUTF8));
    ParallellServer->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    DispatcherServer->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_3->setText(QApplication::translate("toTuningOverviewUI", "Dispatchers", 0, QApplication::UnicodeUTF8));
    SharedServer->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_4->setText(QApplication::translate("toTuningOverviewUI", "Parallel", 0, QApplication::UnicodeUTF8));
    TextLabel2_2->setText(QApplication::translate("toTuningOverviewUI", "Dedicated", 0, QApplication::UnicodeUTF8));
    DedicatedServer->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TotalProcess->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel2_2_2->setText(QApplication::translate("toTuningOverviewUI", "Total", 0, QApplication::UnicodeUTF8));
    BackgroundGroup->setTitle(QApplication::translate("toTuningOverviewUI", "Background", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("toTuningOverviewUI", "Clients", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("toTuningOverviewUI", "Total", 0, QApplication::UnicodeUTF8));
    TotalClient->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel4->setText(QApplication::translate("toTuningOverviewUI", "Active", 0, QApplication::UnicodeUTF8));
    ActiveClient->setText(QApplication::translate("toTuningOverviewUI", "TextLabel5", 0, QApplication::UnicodeUTF8));
    TextLabel2_6->setText(QApplication::translate("toTuningOverviewUI", "Send to client", 0, QApplication::UnicodeUTF8));
    SendFromClient->setText(QApplication::translate("toTuningOverviewUI", "TextLabel5", 0, QApplication::UnicodeUTF8));
    SendToClient->setText(QApplication::translate("toTuningOverviewUI", "TextLabel3", 0, QApplication::UnicodeUTF8));
    TextLabel4_2->setText(QApplication::translate("toTuningOverviewUI", "Send from client", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toTuningOverviewUI);
    } // retranslateUi

};

namespace Ui {
    class toTuningOverviewUI: public Ui_toTuningOverviewUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTUNINGOVERVIEWUI_H
