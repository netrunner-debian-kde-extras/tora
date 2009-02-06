/********************************************************************************
** Form generated from reading ui file 'toscriptui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSCRIPTUI_H
#define UI_TOSCRIPTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "tofilesize.h"
#include "toscriptschemawidget.h"
#include "totreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_toScriptUI
{
public:
    QTabWidget *Tabs;
    QWidget *tab;
    QWidget *confContainer;
    QGridLayout *gridLayout;
    QGroupBox *ModeGroup;
    QGridLayout *gridLayout1;
    QRadioButton *Compare;
    QRadioButton *Extract;
    QCheckBox *IncludeCode;
    QCheckBox *IncludeStorage;
    QCheckBox *IncludeParallell;
    QCheckBox *IncludePartition;
    QCheckBox *IncludeIndexes;
    QCheckBox *IncludeComment;
    QCheckBox *IncludeGrants;
    QCheckBox *IncludeConstraints;
    QCheckBox *IncludeDDL;
    QRadioButton *Search;
    QFrame *Line3;
    QSpacerItem *spacerItem;
    QRadioButton *Migrate;
    QRadioButton *Report;
    QCheckBox *IncludePrompt;
    QSpacerItem *spacerItem1;
    QCheckBox *IncludeHeader;
    QComboBox *Schema;
    QLabel *TextLabel3;
    QCheckBox *IncludeContent;
    QLabel *TextLabel1_3;
    QSpinBox *CommitDistance;
    toScriptSchemaWidget *Source;
    toScriptSchemaWidget *Destination;
    QGroupBox *OutputGroup;
    QGridLayout *gridLayout2;
    QRadioButton *OutputTab;
    QRadioButton *OutputDir;
    QRadioButton *OutputFile;
    QHBoxLayout *hboxLayout;
    QLineEdit *Filename;
    QPushButton *Browse;
    QGroupBox *SearchGroup;
    QGridLayout *gridLayout3;
    QLineEdit *SearchWord;
    QRadioButton *AnyWords;
    QRadioButton *AllWords;
    QRadioButton *RegExp;
    QRadioButton *ExactMatch;
    QWidget *ResizeTab;
    QGridLayout *gridLayout4;
    QGroupBox *ButtonGroup2_2;
    QGridLayout *gridLayout5;
    QRadioButton *DontResize;
    QRadioButton *AutoResize;
    QRadioButton *CustomResize;
    QFrame *Frame4;
    QGridLayout *gridLayout6;
    QSpacerItem *spacerItem2;
    toTreeWidget *Sizes;
    toFilesize *Limit;
    toFilesize *Initial;
    toFilesize *Next;
    QPushButton *AddButton;
    QPushButton *Remove;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QWidget *ResultTab;
    QWidget *DifferenceTab;

    void setupUi(QWidget *toScriptUI)
    {
    if (toScriptUI->objectName().isEmpty())
        toScriptUI->setObjectName(QString::fromUtf8("toScriptUI"));
    toScriptUI->resize(918, 881);
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(toScriptUI->sizePolicy().hasHeightForWidth());
    toScriptUI->setSizePolicy(sizePolicy);
    Tabs = new QTabWidget(toScriptUI);
    Tabs->setObjectName(QString::fromUtf8("Tabs"));
    Tabs->setGeometry(QRect(0, 0, 918, 881));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    tab->setGeometry(QRect(0, 0, 906, 837));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
    tab->setSizePolicy(sizePolicy1);
    confContainer = new QWidget(tab);
    confContainer->setObjectName(QString::fromUtf8("confContainer"));
    confContainer->setGeometry(QRect(0, 0, 453, 827));
    gridLayout = new QGridLayout(confContainer);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    ModeGroup = new QGroupBox(confContainer);
    ModeGroup->setObjectName(QString::fromUtf8("ModeGroup"));
    gridLayout1 = new QGridLayout(ModeGroup);
#ifndef Q_OS_MAC
    gridLayout1->setSpacing(6);
#endif
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    Compare = new QRadioButton(ModeGroup);
    Compare->setObjectName(QString::fromUtf8("Compare"));
    Compare->setChecked(true);
    Compare->setProperty("buttonGroupId", QVariant(0));

    gridLayout1->addWidget(Compare, 0, 0, 1, 1);

    Extract = new QRadioButton(ModeGroup);
    Extract->setObjectName(QString::fromUtf8("Extract"));
    Extract->setChecked(false);
    Extract->setProperty("buttonGroupId", QVariant(1));

    gridLayout1->addWidget(Extract, 1, 0, 1, 1);

    IncludeCode = new QCheckBox(ModeGroup);
    IncludeCode->setObjectName(QString::fromUtf8("IncludeCode"));
    IncludeCode->setChecked(true);
    IncludeCode->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeCode, 7, 2, 1, 2);

    IncludeStorage = new QCheckBox(ModeGroup);
    IncludeStorage->setObjectName(QString::fromUtf8("IncludeStorage"));
    IncludeStorage->setChecked(true);
    IncludeStorage->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeStorage, 4, 2, 1, 2);

    IncludeParallell = new QCheckBox(ModeGroup);
    IncludeParallell->setObjectName(QString::fromUtf8("IncludeParallell"));
    IncludeParallell->setChecked(true);
    IncludeParallell->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeParallell, 5, 2, 1, 2);

    IncludePartition = new QCheckBox(ModeGroup);
    IncludePartition->setObjectName(QString::fromUtf8("IncludePartition"));
    IncludePartition->setChecked(true);
    IncludePartition->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludePartition, 6, 2, 1, 2);

    IncludeIndexes = new QCheckBox(ModeGroup);
    IncludeIndexes->setObjectName(QString::fromUtf8("IncludeIndexes"));
    IncludeIndexes->setChecked(true);
    IncludeIndexes->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeIndexes, 2, 2, 1, 2);

    IncludeComment = new QCheckBox(ModeGroup);
    IncludeComment->setObjectName(QString::fromUtf8("IncludeComment"));
    IncludeComment->setEnabled(true);
    IncludeComment->setChecked(true);
    IncludeComment->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeComment, 8, 2, 1, 2);

    IncludeGrants = new QCheckBox(ModeGroup);
    IncludeGrants->setObjectName(QString::fromUtf8("IncludeGrants"));
    IncludeGrants->setChecked(true);
    IncludeGrants->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeGrants, 3, 2, 1, 2);

    IncludeConstraints = new QCheckBox(ModeGroup);
    IncludeConstraints->setObjectName(QString::fromUtf8("IncludeConstraints"));
    IncludeConstraints->setChecked(true);
    IncludeConstraints->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeConstraints, 1, 2, 1, 2);

    IncludeDDL = new QCheckBox(ModeGroup);
    IncludeDDL->setObjectName(QString::fromUtf8("IncludeDDL"));
    IncludeDDL->setEnabled(false);
    IncludeDDL->setChecked(true);
    IncludeDDL->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeDDL, 0, 2, 1, 2);

    Search = new QRadioButton(ModeGroup);
    Search->setObjectName(QString::fromUtf8("Search"));
    Search->setProperty("buttonGroupId", QVariant(3));

    gridLayout1->addWidget(Search, 2, 0, 1, 1);

    Line3 = new QFrame(ModeGroup);
    Line3->setObjectName(QString::fromUtf8("Line3"));

    gridLayout1->addWidget(Line3, 0, 1, 15, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 5, 0, 10, 1);

    Migrate = new QRadioButton(ModeGroup);
    Migrate->setObjectName(QString::fromUtf8("Migrate"));
    Migrate->setEnabled(true);
    Migrate->setChecked(false);
    Migrate->setProperty("buttonGroupId", QVariant(2));

    gridLayout1->addWidget(Migrate, 3, 0, 1, 1);

    Report = new QRadioButton(ModeGroup);
    Report->setObjectName(QString::fromUtf8("Report"));
    Report->setEnabled(true);
    Report->setChecked(false);
    Report->setProperty("buttonGroupId", QVariant(4));

    gridLayout1->addWidget(Report, 4, 0, 1, 1);

    IncludePrompt = new QCheckBox(ModeGroup);
    IncludePrompt->setObjectName(QString::fromUtf8("IncludePrompt"));
    IncludePrompt->setEnabled(false);
    IncludePrompt->setFocusPolicy(Qt::NoFocus);
    IncludePrompt->setChecked(false);
    IncludePrompt->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludePrompt, 9, 2, 1, 2);

    spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem1, 14, 2, 1, 1);

    IncludeHeader = new QCheckBox(ModeGroup);
    IncludeHeader->setObjectName(QString::fromUtf8("IncludeHeader"));
    IncludeHeader->setEnabled(false);
    IncludeHeader->setChecked(true);
    IncludeHeader->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeHeader, 10, 2, 1, 2);

    Schema = new QComboBox(ModeGroup);
    Schema->setObjectName(QString::fromUtf8("Schema"));
    Schema->setEditable(true);
    Schema->setDuplicatesEnabled(false);

    gridLayout1->addWidget(Schema, 13, 3, 1, 1);

    TextLabel3 = new QLabel(ModeGroup);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    TextLabel3->setWordWrap(false);

    gridLayout1->addWidget(TextLabel3, 13, 2, 1, 1);

    IncludeContent = new QCheckBox(ModeGroup);
    IncludeContent->setObjectName(QString::fromUtf8("IncludeContent"));
    IncludeContent->setEnabled(false);
    IncludeContent->setFocusPolicy(Qt::NoFocus);
    IncludeContent->setChecked(false);
    IncludeContent->setProperty("buttonGroupId", QVariant(10));

    gridLayout1->addWidget(IncludeContent, 11, 2, 1, 2);

    TextLabel1_3 = new QLabel(ModeGroup);
    TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
    TextLabel1_3->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1_3, 12, 2, 1, 1);

    CommitDistance = new QSpinBox(ModeGroup);
    CommitDistance->setObjectName(QString::fromUtf8("CommitDistance"));
    CommitDistance->setEnabled(false);
    CommitDistance->setMaximum(1000000);

    gridLayout1->addWidget(CommitDistance, 12, 3, 1, 1);


    gridLayout->addWidget(ModeGroup, 0, 0, 1, 1);

    Source = new toScriptSchemaWidget(confContainer);
    Source->setObjectName(QString::fromUtf8("Source"));

    gridLayout->addWidget(Source, 0, 1, 3, 1);

    Destination = new toScriptSchemaWidget(confContainer);
    Destination->setObjectName(QString::fromUtf8("Destination"));

    gridLayout->addWidget(Destination, 0, 2, 3, 1);

    OutputGroup = new QGroupBox(confContainer);
    OutputGroup->setObjectName(QString::fromUtf8("OutputGroup"));
    OutputGroup->setEnabled(false);
    gridLayout2 = new QGridLayout(OutputGroup);
#ifndef Q_OS_MAC
    gridLayout2->setSpacing(6);
#endif
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    OutputTab = new QRadioButton(OutputGroup);
    OutputTab->setObjectName(QString::fromUtf8("OutputTab"));
    OutputTab->setChecked(true);
    OutputTab->setProperty("buttonGroupId", QVariant(1));

    gridLayout2->addWidget(OutputTab, 0, 0, 1, 1);

    OutputDir = new QRadioButton(OutputGroup);
    OutputDir->setObjectName(QString::fromUtf8("OutputDir"));
    OutputDir->setFocusPolicy(Qt::NoFocus);
    OutputDir->setProperty("buttonGroupId", QVariant(3));

    gridLayout2->addWidget(OutputDir, 0, 2, 1, 1);

    OutputFile = new QRadioButton(OutputGroup);
    OutputFile->setObjectName(QString::fromUtf8("OutputFile"));
    OutputFile->setFocusPolicy(Qt::NoFocus);

    gridLayout2->addWidget(OutputFile, 0, 1, 1, 1);

    hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
    hboxLayout->setSpacing(6);
#endif
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    Filename = new QLineEdit(OutputGroup);
    Filename->setObjectName(QString::fromUtf8("Filename"));
    Filename->setEnabled(false);

    hboxLayout->addWidget(Filename);

    Browse = new QPushButton(OutputGroup);
    Browse->setObjectName(QString::fromUtf8("Browse"));
    Browse->setEnabled(false);

    hboxLayout->addWidget(Browse);


    gridLayout2->addLayout(hboxLayout, 1, 0, 1, 3);


    gridLayout->addWidget(OutputGroup, 1, 0, 1, 1);

    SearchGroup = new QGroupBox(confContainer);
    SearchGroup->setObjectName(QString::fromUtf8("SearchGroup"));
    SearchGroup->setEnabled(false);
    gridLayout3 = new QGridLayout(SearchGroup);
#ifndef Q_OS_MAC
    gridLayout3->setSpacing(6);
#endif
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    SearchWord = new QLineEdit(SearchGroup);
    SearchWord->setObjectName(QString::fromUtf8("SearchWord"));

    gridLayout3->addWidget(SearchWord, 2, 0, 1, 2);

    AnyWords = new QRadioButton(SearchGroup);
    AnyWords->setObjectName(QString::fromUtf8("AnyWords"));
    AnyWords->setChecked(true);
    AnyWords->setProperty("buttonGroupId", QVariant(2));

    gridLayout3->addWidget(AnyWords, 0, 0, 1, 1);

    AllWords = new QRadioButton(SearchGroup);
    AllWords->setObjectName(QString::fromUtf8("AllWords"));
    AllWords->setFocusPolicy(Qt::NoFocus);
    AllWords->setChecked(false);
    AllWords->setProperty("buttonGroupId", QVariant(1));

    gridLayout3->addWidget(AllWords, 0, 1, 1, 1);

    RegExp = new QRadioButton(SearchGroup);
    RegExp->setObjectName(QString::fromUtf8("RegExp"));
    RegExp->setFocusPolicy(Qt::NoFocus);
    RegExp->setChecked(false);
    RegExp->setProperty("buttonGroupId", QVariant(3));

    gridLayout3->addWidget(RegExp, 1, 1, 1, 1);

    ExactMatch = new QRadioButton(SearchGroup);
    ExactMatch->setObjectName(QString::fromUtf8("ExactMatch"));
    ExactMatch->setFocusPolicy(Qt::NoFocus);
    ExactMatch->setProperty("buttonGroupId", QVariant(4));

    gridLayout3->addWidget(ExactMatch, 1, 0, 1, 1);


    gridLayout->addWidget(SearchGroup, 2, 0, 1, 1);

    Tabs->addTab(tab, QString());
    ResizeTab = new QWidget();
    ResizeTab->setObjectName(QString::fromUtf8("ResizeTab"));
    ResizeTab->setGeometry(QRect(0, 0, 906, 837));
    gridLayout4 = new QGridLayout(ResizeTab);
#ifndef Q_OS_MAC
    gridLayout4->setSpacing(6);
#endif
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    ButtonGroup2_2 = new QGroupBox(ResizeTab);
    ButtonGroup2_2->setObjectName(QString::fromUtf8("ButtonGroup2_2"));
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(ButtonGroup2_2->sizePolicy().hasHeightForWidth());
    ButtonGroup2_2->setSizePolicy(sizePolicy2);
    gridLayout5 = new QGridLayout(ButtonGroup2_2);
#ifndef Q_OS_MAC
    gridLayout5->setSpacing(6);
#endif
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    DontResize = new QRadioButton(ButtonGroup2_2);
    DontResize->setObjectName(QString::fromUtf8("DontResize"));
    DontResize->setChecked(true);

    gridLayout5->addWidget(DontResize, 0, 0, 1, 1);

    AutoResize = new QRadioButton(ButtonGroup2_2);
    AutoResize->setObjectName(QString::fromUtf8("AutoResize"));

    gridLayout5->addWidget(AutoResize, 0, 1, 1, 1);

    CustomResize = new QRadioButton(ButtonGroup2_2);
    CustomResize->setObjectName(QString::fromUtf8("CustomResize"));

    gridLayout5->addWidget(CustomResize, 0, 2, 1, 1);


    gridLayout4->addWidget(ButtonGroup2_2, 0, 0, 1, 1);

    Frame4 = new QFrame(ResizeTab);
    Frame4->setObjectName(QString::fromUtf8("Frame4"));
    Frame4->setEnabled(false);
    Frame4->setFrameShape(QFrame::NoFrame);
    Frame4->setFrameShadow(QFrame::Plain);
    gridLayout6 = new QGridLayout(Frame4);
#ifndef Q_OS_MAC
    gridLayout6->setSpacing(6);
#endif
    gridLayout6->setMargin(11);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout6->addItem(spacerItem2, 3, 0, 1, 1);

    Sizes = new toTreeWidget(Frame4);
    Sizes->setObjectName(QString::fromUtf8("Sizes"));
    Sizes->setAllColumnsShowFocus(true);

    gridLayout6->addWidget(Sizes, 0, 2, 4, 2);

    Limit = new toFilesize(Frame4);
    Limit->setObjectName(QString::fromUtf8("Limit"));
    Limit->setFocusPolicy(Qt::TabFocus);

    gridLayout6->addWidget(Limit, 0, 0, 1, 2);

    Initial = new toFilesize(Frame4);
    Initial->setObjectName(QString::fromUtf8("Initial"));
    Initial->setFocusPolicy(Qt::TabFocus);

    gridLayout6->addWidget(Initial, 1, 0, 1, 2);

    Next = new toFilesize(Frame4);
    Next->setObjectName(QString::fromUtf8("Next"));
    Next->setFocusPolicy(Qt::TabFocus);

    gridLayout6->addWidget(Next, 2, 0, 1, 2);

    AddButton = new QPushButton(Frame4);
    AddButton->setObjectName(QString::fromUtf8("AddButton"));
    QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(AddButton->sizePolicy().hasHeightForWidth());
    AddButton->setSizePolicy(sizePolicy3);
    AddButton->setDefault(true);

    gridLayout6->addWidget(AddButton, 4, 1, 1, 1);

    Remove = new QPushButton(Frame4);
    Remove->setObjectName(QString::fromUtf8("Remove"));
    sizePolicy3.setHeightForWidth(Remove->sizePolicy().hasHeightForWidth());
    Remove->setSizePolicy(sizePolicy3);

    gridLayout6->addWidget(Remove, 4, 3, 1, 1);

    spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    gridLayout6->addItem(spacerItem3, 4, 0, 1, 1);

    spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout6->addItem(spacerItem4, 4, 2, 1, 1);


    gridLayout4->addWidget(Frame4, 1, 0, 1, 1);

    Tabs->addTab(ResizeTab, QString());
    ResultTab = new QWidget();
    ResultTab->setObjectName(QString::fromUtf8("ResultTab"));
    ResultTab->setGeometry(QRect(0, 0, 906, 837));
    Tabs->addTab(ResultTab, QString());
    DifferenceTab = new QWidget();
    DifferenceTab->setObjectName(QString::fromUtf8("DifferenceTab"));
    DifferenceTab->setGeometry(QRect(0, 0, 906, 837));
    Tabs->addTab(DifferenceTab, QString());
    QWidget::setTabOrder(Tabs, Compare);
    QWidget::setTabOrder(Compare, IncludeDDL);
    QWidget::setTabOrder(IncludeDDL, IncludeConstraints);
    QWidget::setTabOrder(IncludeConstraints, IncludeIndexes);
    QWidget::setTabOrder(IncludeIndexes, IncludeGrants);
    QWidget::setTabOrder(IncludeGrants, IncludeStorage);
    QWidget::setTabOrder(IncludeStorage, IncludeParallell);
    QWidget::setTabOrder(IncludeParallell, IncludePartition);
    QWidget::setTabOrder(IncludePartition, IncludeCode);
    QWidget::setTabOrder(IncludeCode, IncludeComment);
    QWidget::setTabOrder(IncludeComment, IncludeContent);
    QWidget::setTabOrder(IncludeContent, IncludePrompt);
    QWidget::setTabOrder(IncludePrompt, IncludeHeader);
    QWidget::setTabOrder(IncludeHeader, Schema);
    QWidget::setTabOrder(Schema, OutputTab);
    QWidget::setTabOrder(OutputTab, Filename);
    QWidget::setTabOrder(Filename, Browse);
    QWidget::setTabOrder(Browse, AnyWords);
    QWidget::setTabOrder(AnyWords, SearchWord);
    QWidget::setTabOrder(SearchWord, OutputFile);
    QWidget::setTabOrder(OutputFile, DontResize);
    QWidget::setTabOrder(DontResize, AutoResize);
    QWidget::setTabOrder(AutoResize, CustomResize);
    QWidget::setTabOrder(CustomResize, Limit);
    QWidget::setTabOrder(Limit, Initial);
    QWidget::setTabOrder(Initial, Next);
    QWidget::setTabOrder(Next, Sizes);
    QWidget::setTabOrder(Sizes, AddButton);
    QWidget::setTabOrder(AddButton, Remove);
    QWidget::setTabOrder(Remove, ExactMatch);
    QWidget::setTabOrder(ExactMatch, RegExp);
    QWidget::setTabOrder(RegExp, Extract);
    QWidget::setTabOrder(Extract, Migrate);
    QWidget::setTabOrder(Migrate, AllWords);
    QWidget::setTabOrder(AllWords, OutputDir);

    retranslateUi(toScriptUI);
    QObject::connect(CustomResize, SIGNAL(toggled(bool)), Frame4, SLOT(setEnabled(bool)));
    QObject::connect(Search, SIGNAL(toggled(bool)), Schema, SLOT(setDisabled(bool)));
    QObject::connect(IncludeDDL, SIGNAL(toggled(bool)), IncludeConstraints, SLOT(setEnabled(bool)));
    QObject::connect(IncludeDDL, SIGNAL(toggled(bool)), IncludeIndexes, SLOT(setEnabled(bool)));
    QObject::connect(IncludeDDL, SIGNAL(toggled(bool)), IncludeGrants, SLOT(setEnabled(bool)));
    QObject::connect(IncludeDDL, SIGNAL(toggled(bool)), IncludeStorage, SLOT(setEnabled(bool)));
    QObject::connect(IncludeDDL, SIGNAL(toggled(bool)), IncludeParallell, SLOT(setEnabled(bool)));
    QObject::connect(IncludeDDL, SIGNAL(toggled(bool)), IncludeComment, SLOT(setEnabled(bool)));
    QObject::connect(IncludeDDL, SIGNAL(toggled(bool)), IncludeCode, SLOT(setEnabled(bool)));
    QObject::connect(IncludeDDL, SIGNAL(toggled(bool)), IncludePartition, SLOT(setEnabled(bool)));
    QObject::connect(Search, SIGNAL(toggled(bool)), SearchGroup, SLOT(setEnabled(bool)));
    QObject::connect(OutputTab, SIGNAL(toggled(bool)), Filename, SLOT(setDisabled(bool)));
    QObject::connect(OutputTab, SIGNAL(toggled(bool)), Browse, SLOT(setDisabled(bool)));
    QObject::connect(Extract, SIGNAL(toggled(bool)), OutputDir, SLOT(setEnabled(bool)));
    QObject::connect(IncludeContent, SIGNAL(toggled(bool)), CommitDistance, SLOT(setEnabled(bool)));

    Tabs->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(toScriptUI);
    } // setupUi

    void retranslateUi(QWidget *toScriptUI)
    {
    toScriptUI->setWindowTitle(QString());
    ModeGroup->setTitle(QApplication::translate("toScriptUI", "&Options", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Compare->setToolTip(QApplication::translate("toScriptUI", "Compare two databases or schemas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Compare->setText(QApplication::translate("toScriptUI", "Compare", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Extract->setToolTip(QApplication::translate("toScriptUI", "Extract script to recreate database objects.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Extract->setText(QApplication::translate("toScriptUI", "Extract", 0, QApplication::UnicodeUTF8));
    IncludeCode->setText(QApplication::translate("toScriptUI", "Include code specification", 0, QApplication::UnicodeUTF8));
    IncludeStorage->setText(QApplication::translate("toScriptUI", "Include storage specification", 0, QApplication::UnicodeUTF8));
    IncludeParallell->setText(QApplication::translate("toScriptUI", "Include parallel specification", 0, QApplication::UnicodeUTF8));
    IncludePartition->setText(QApplication::translate("toScriptUI", "Include partition specification", 0, QApplication::UnicodeUTF8));
    IncludeIndexes->setText(QApplication::translate("toScriptUI", "Include indexes", 0, QApplication::UnicodeUTF8));
    IncludeComment->setText(QApplication::translate("toScriptUI", "Include comments", 0, QApplication::UnicodeUTF8));
    IncludeGrants->setText(QApplication::translate("toScriptUI", "Include grants", 0, QApplication::UnicodeUTF8));
    IncludeConstraints->setText(QApplication::translate("toScriptUI", "Include constraints", 0, QApplication::UnicodeUTF8));
    IncludeDDL->setText(QApplication::translate("toScriptUI", "Include DDL", 0, QApplication::UnicodeUTF8));
    Search->setText(QApplication::translate("toScriptUI", "Search", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Migrate->setToolTip(QApplication::translate("toScriptUI", "Create database scripts to convert schema or database from source to destination", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Migrate->setText(QApplication::translate("toScriptUI", "Migrate", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Report->setToolTip(QApplication::translate("toScriptUI", "Create database scripts to convert schema or database from source to destination", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Report->setText(QApplication::translate("toScriptUI", "Report", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    IncludePrompt->setToolTip(QApplication::translate("toScriptUI", "Generate prompts to display progress in SQLPlus", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    IncludePrompt->setText(QApplication::translate("toScriptUI", "Generate prompts", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    IncludeHeader->setToolTip(QApplication::translate("toScriptUI", "Generate header at the top of the script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    IncludeHeader->setText(QApplication::translate("toScriptUI", "Generate header", 0, QApplication::UnicodeUTF8));
    Schema->insertItems(0, QStringList()
     << QApplication::translate("toScriptUI", "Same", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("toScriptUI", "None", 0, QApplication::UnicodeUTF8)
    );

#ifndef QT_NO_TOOLTIP
    TextLabel3->setToolTip(QApplication::translate("toScriptUI", "Select the schema to generate in script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3->setText(QApplication::translate("toScriptUI", "Generated schema", 0, QApplication::UnicodeUTF8));
    IncludeContent->setText(QApplication::translate("toScriptUI", "Include content of tables", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1_3->setToolTip(QApplication::translate("toScriptUI", "The number of insertstatements to make between each commit (0 means whole table)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel1_3->setText(QApplication::translate("toScriptUI", "Commit distance", 0, QApplication::UnicodeUTF8));
    OutputGroup->setTitle(QApplication::translate("toScriptUI", "Output", 0, QApplication::UnicodeUTF8));
    OutputTab->setText(QApplication::translate("toScriptUI", "Output tab", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    OutputDir->setToolTip(QApplication::translate("toScriptUI", "Output to directory so that each object is placed in a different file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    OutputDir->setText(QApplication::translate("toScriptUI", "Output dir", 0, QApplication::UnicodeUTF8));
    OutputFile->setText(QApplication::translate("toScriptUI", "Output file", 0, QApplication::UnicodeUTF8));
    Browse->setText(QApplication::translate("toScriptUI", "Browse", 0, QApplication::UnicodeUTF8));
    SearchGroup->setTitle(QApplication::translate("toScriptUI", "&Search", 0, QApplication::UnicodeUTF8));
    AnyWords->setText(QApplication::translate("toScriptUI", "Contain any words", 0, QApplication::UnicodeUTF8));
    AllWords->setText(QApplication::translate("toScriptUI", "Contain all words", 0, QApplication::UnicodeUTF8));
    RegExp->setText(QApplication::translate("toScriptUI", "RegExp", 0, QApplication::UnicodeUTF8));
    ExactMatch->setText(QApplication::translate("toScriptUI", "Exact match", 0, QApplication::UnicodeUTF8));
    Tabs->setTabText(Tabs->indexOf(tab), QApplication::translate("toScriptUI", "Configuration", 0, QApplication::UnicodeUTF8));
    ButtonGroup2_2->setTitle(QApplication::translate("toScriptUI", "Script Resize", 0, QApplication::UnicodeUTF8));
    DontResize->setText(QApplication::translate("toScriptUI", "Don't resize", 0, QApplication::UnicodeUTF8));
    AutoResize->setText(QApplication::translate("toScriptUI", "Auto resize", 0, QApplication::UnicodeUTF8));
    CustomResize->setText(QApplication::translate("toScriptUI", "Custom resize", 0, QApplication::UnicodeUTF8));
    Sizes->headerItem()->setText(0, QApplication::translate("toScriptUI", "Limit", 0, QApplication::UnicodeUTF8));
    Sizes->headerItem()->setText(1, QApplication::translate("toScriptUI", "Initial", 0, QApplication::UnicodeUTF8));
    Sizes->headerItem()->setText(2, QApplication::translate("toScriptUI", "Next", 0, QApplication::UnicodeUTF8));
    AddButton->setText(QApplication::translate("toScriptUI", "&Add", 0, QApplication::UnicodeUTF8));
    Remove->setText(QApplication::translate("toScriptUI", "&Remove", 0, QApplication::UnicodeUTF8));
    Tabs->setTabText(Tabs->indexOf(ResizeTab), QApplication::translate("toScriptUI", "Resize", 0, QApplication::UnicodeUTF8));
    Tabs->setTabText(Tabs->indexOf(ResultTab), QApplication::translate("toScriptUI", "Result", 0, QApplication::UnicodeUTF8));
    Tabs->setTabText(Tabs->indexOf(DifferenceTab), QApplication::translate("toScriptUI", "Difference", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toScriptUI);
    } // retranslateUi

};

namespace Ui {
    class toScriptUI: public Ui_toScriptUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSCRIPTUI_H
