/********************************************************************************
** Form generated from reading ui file 'tosyntaxsetupui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSYNTAXSETUPUI_H
#define UI_TOSYNTAXSETUPUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "tohighlightedtext.h"

QT_BEGIN_NAMESPACE

class Ui_toSyntaxSetupUI
{
public:
    QGridLayout *gridLayout;
    QGroupBox *Options;
    QGridLayout *gridLayout1;
    QCheckBox *KeywordUpper;
    QCheckBox *CodeCompletion;
    QCheckBox *CompletionSort;
    QCheckBox *SyntaxHighlighting;
    QCheckBox *AutoIndent;
    QPushButton *PushButton1;
    QLabel *ResultExample;
    QLabel *CodeExample;
    QPushButton *PushButton1_2;
    QPushButton *PushButton1_2_2;
    QLabel *TextExample;
    QLineEdit *Extensions;
    QLabel *TextLabel1;
    QSpacerItem *spacerItem;
    QSpinBox *TabStop;
    QLabel *TextLabel1_2;
    QCheckBox *TabSpaces;
    toHighlightedText *Example;
    QGroupBox *GroupBox2;
    QGridLayout *gridLayout2;
    QLabel *ExampleColor;
    QPushButton *PushButton3;
    QListWidget *SyntaxComponent;

    void setupUi(QWidget *toSyntaxSetupUI)
    {
    if (toSyntaxSetupUI->objectName().isEmpty())
        toSyntaxSetupUI->setObjectName(QString::fromUtf8("toSyntaxSetupUI"));
    toSyntaxSetupUI->resize(548, 527);
    gridLayout = new QGridLayout(toSyntaxSetupUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(0, 0, 0, 0);
    Options = new QGroupBox(toSyntaxSetupUI);
    Options->setObjectName(QString::fromUtf8("Options"));
    gridLayout1 = new QGridLayout(Options);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    KeywordUpper = new QCheckBox(Options);
    KeywordUpper->setObjectName(QString::fromUtf8("KeywordUpper"));

    gridLayout1->addWidget(KeywordUpper, 1, 0, 1, 3);

    CodeCompletion = new QCheckBox(Options);
    CodeCompletion->setObjectName(QString::fromUtf8("CodeCompletion"));

    gridLayout1->addWidget(CodeCompletion, 2, 0, 1, 3);

    CompletionSort = new QCheckBox(Options);
    CompletionSort->setObjectName(QString::fromUtf8("CompletionSort"));
    CompletionSort->setEnabled(false);
    CompletionSort->setChecked(true);

    gridLayout1->addWidget(CompletionSort, 3, 0, 1, 3);

    SyntaxHighlighting = new QCheckBox(Options);
    SyntaxHighlighting->setObjectName(QString::fromUtf8("SyntaxHighlighting"));

    gridLayout1->addWidget(SyntaxHighlighting, 0, 0, 1, 3);

    AutoIndent = new QCheckBox(Options);
    AutoIndent->setObjectName(QString::fromUtf8("AutoIndent"));

    gridLayout1->addWidget(AutoIndent, 4, 0, 1, 3);

    PushButton1 = new QPushButton(Options);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));

    gridLayout1->addWidget(PushButton1, 7, 2, 1, 1);

    ResultExample = new QLabel(Options);
    ResultExample->setObjectName(QString::fromUtf8("ResultExample"));
    ResultExample->setWordWrap(false);

    gridLayout1->addWidget(ResultExample, 7, 0, 1, 1);

    CodeExample = new QLabel(Options);
    CodeExample->setObjectName(QString::fromUtf8("CodeExample"));
    CodeExample->setWordWrap(false);

    gridLayout1->addWidget(CodeExample, 6, 0, 1, 1);

    PushButton1_2 = new QPushButton(Options);
    PushButton1_2->setObjectName(QString::fromUtf8("PushButton1_2"));

    gridLayout1->addWidget(PushButton1_2, 6, 2, 1, 1);

    PushButton1_2_2 = new QPushButton(Options);
    PushButton1_2_2->setObjectName(QString::fromUtf8("PushButton1_2_2"));

    gridLayout1->addWidget(PushButton1_2_2, 5, 2, 1, 1);

    TextExample = new QLabel(Options);
    TextExample->setObjectName(QString::fromUtf8("TextExample"));
    TextExample->setWordWrap(false);

    gridLayout1->addWidget(TextExample, 5, 0, 1, 1);

    Extensions = new QLineEdit(Options);
    Extensions->setObjectName(QString::fromUtf8("Extensions"));

    gridLayout1->addWidget(Extensions, 8, 1, 1, 2);

    TextLabel1 = new QLabel(Options);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1, 8, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 11, 1, 1, 1);

    TabStop = new QSpinBox(Options);
    TabStop->setObjectName(QString::fromUtf8("TabStop"));
    TabStop->setMinimum(1);

    gridLayout1->addWidget(TabStop, 9, 2, 1, 1);

    TextLabel1_2 = new QLabel(Options);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel1_2, 9, 0, 1, 2);

    TabSpaces = new QCheckBox(Options);
    TabSpaces->setObjectName(QString::fromUtf8("TabSpaces"));

    gridLayout1->addWidget(TabSpaces, 10, 0, 1, 1);


    gridLayout->addWidget(Options, 0, 1, 1, 1);

    Example = new toHighlightedText(toSyntaxSetupUI);
    Example->setObjectName(QString::fromUtf8("Example"));

    gridLayout->addWidget(Example, 1, 0, 1, 2);

    GroupBox2 = new QGroupBox(toSyntaxSetupUI);
    GroupBox2->setObjectName(QString::fromUtf8("GroupBox2"));
    gridLayout2 = new QGridLayout(GroupBox2);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    ExampleColor = new QLabel(GroupBox2);
    ExampleColor->setObjectName(QString::fromUtf8("ExampleColor"));
    ExampleColor->setWordWrap(false);

    gridLayout2->addWidget(ExampleColor, 1, 0, 1, 1);

    PushButton3 = new QPushButton(GroupBox2);
    PushButton3->setObjectName(QString::fromUtf8("PushButton3"));
    QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(PushButton3->sizePolicy().hasHeightForWidth());
    PushButton3->setSizePolicy(sizePolicy);

    gridLayout2->addWidget(PushButton3, 1, 1, 1, 1);

    SyntaxComponent = new QListWidget(GroupBox2);
    SyntaxComponent->setObjectName(QString::fromUtf8("SyntaxComponent"));

    gridLayout2->addWidget(SyntaxComponent, 0, 0, 1, 2);


    gridLayout->addWidget(GroupBox2, 0, 0, 1, 1);

    TextLabel1_2->setBuddy(TabStop);
    QWidget::setTabOrder(SyntaxComponent, PushButton3);
    QWidget::setTabOrder(PushButton3, SyntaxHighlighting);
    QWidget::setTabOrder(SyntaxHighlighting, KeywordUpper);
    QWidget::setTabOrder(KeywordUpper, CodeCompletion);
    QWidget::setTabOrder(CodeCompletion, AutoIndent);
    QWidget::setTabOrder(AutoIndent, PushButton1_2_2);
    QWidget::setTabOrder(PushButton1_2_2, PushButton1_2);
    QWidget::setTabOrder(PushButton1_2, PushButton1);
    QWidget::setTabOrder(PushButton1, Extensions);
    QWidget::setTabOrder(Extensions, TabStop);
    QWidget::setTabOrder(TabStop, Example);
    QWidget::setTabOrder(Example, CompletionSort);

    retranslateUi(toSyntaxSetupUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toSyntaxSetupUI, SLOT(selectResultFont()));
    QObject::connect(PushButton1_2, SIGNAL(clicked()), toSyntaxSetupUI, SLOT(selectFont()));
    QObject::connect(SyntaxHighlighting, SIGNAL(toggled(bool)), toSyntaxSetupUI, SLOT(changeHighlight(bool)));
    QObject::connect(KeywordUpper, SIGNAL(toggled(bool)), toSyntaxSetupUI, SLOT(changeUpper(bool)));
    QObject::connect(PushButton3, SIGNAL(clicked()), toSyntaxSetupUI, SLOT(selectColor()));
    QObject::connect(SyntaxComponent, SIGNAL(itemClicked(QListWidgetItem*)), toSyntaxSetupUI, SLOT(changeLine(QListWidgetItem*)));
    QObject::connect(CodeCompletion, SIGNAL(toggled(bool)), CompletionSort, SLOT(setEnabled(bool)));
    QObject::connect(SyntaxHighlighting, SIGNAL(toggled(bool)), CodeCompletion, SLOT(setEnabled(bool)));
    QObject::connect(PushButton1_2_2, SIGNAL(clicked()), toSyntaxSetupUI, SLOT(selectText()));

    QMetaObject::connectSlotsByName(toSyntaxSetupUI);
    } // setupUi

    void retranslateUi(QWidget *toSyntaxSetupUI)
    {
    toSyntaxSetupUI->setWindowTitle(QApplication::translate("toSyntaxSetupUI", "Form1", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toSyntaxSetupUI->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    Options->setTitle(QApplication::translate("toSyntaxSetupUI", "Options", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    KeywordUpper->setToolTip(QApplication::translate("toSyntaxSetupUI", "Convert all keywords to uppercase when displayingsyntaxhighlighted text.  Only available for monospaced fonts.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    KeywordUpper->setText(QApplication::translate("toSyntaxSetupUI", "&Keyword upper", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    CodeCompletion->setToolTip(QApplication::translate("toSyntaxSetupUI", "Activate code completion in SQL editors. Not recommended on slow connections.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    CodeCompletion->setText(QApplication::translate("toSyntaxSetupUI", "&Code completion", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    CompletionSort->setToolTip(QApplication::translate("toSyntaxSetupUI", "Sort the available completion rows alphabetically or in the order the are.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    CompletionSort->setText(QApplication::translate("toSyntaxSetupUI", "&Sort completion rows", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    SyntaxHighlighting->setToolTip(QApplication::translate("toSyntaxSetupUI", "Enable syntax highlighting, or use simple text editor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    SyntaxHighlighting->setText(QApplication::translate("toSyntaxSetupUI", "S&yntax highlighting", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    AutoIndent->setToolTip(QApplication::translate("toSyntaxSetupUI", "Indent a new line in an editor to the same column as the previous line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    AutoIndent->setText(QApplication::translate("toSyntaxSetupUI", "&Indent same as previous line", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toSyntaxSetupUI", "Choose", 0, QApplication::UnicodeUTF8));
    ResultExample->setText(QApplication::translate("toSyntaxSetupUI", "List example", 0, QApplication::UnicodeUTF8));
    CodeExample->setText(QApplication::translate("toSyntaxSetupUI", "Code example", 0, QApplication::UnicodeUTF8));
    PushButton1_2->setText(QApplication::translate("toSyntaxSetupUI", "Choose", 0, QApplication::UnicodeUTF8));
    PushButton1_2_2->setText(QApplication::translate("toSyntaxSetupUI", "Choose", 0, QApplication::UnicodeUTF8));
    TextExample->setText(QApplication::translate("toSyntaxSetupUI", "Text example", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toSyntaxSetupUI", "Filename extensions", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel1_2->setToolTip(QApplication::translate("toSyntaxSetupUI", "Number of character width of tabstops", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP


#ifndef QT_NO_WHATSTHIS
    TextLabel1_2->setWhatsThis(QApplication::translate("toSyntaxSetupUI", "Number of character width of tabstops", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS

    TextLabel1_2->setText(QApplication::translate("toSyntaxSetupUI", "Tab stop width", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TabSpaces->setToolTip(QApplication::translate("toSyntaxSetupUI", "If set the editor will insert spaces rather than tabs", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TabSpaces->setText(QApplication::translate("toSyntaxSetupUI", "Use only spaces when indenting", 0, QApplication::UnicodeUTF8));
    GroupBox2->setTitle(QApplication::translate("toSyntaxSetupUI", "Sy&ntax components", 0, QApplication::UnicodeUTF8));
    ExampleColor->setText(QString());
    PushButton3->setText(QApplication::translate("toSyntaxSetupUI", "&Pick", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toSyntaxSetupUI);
    } // retranslateUi

};

namespace Ui {
    class toSyntaxSetupUI: public Ui_toSyntaxSetupUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSYNTAXSETUPUI_H
