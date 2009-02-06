/********************************************************************************
** Form generated from reading ui file 'tosearchreplaceui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOSEARCHREPLACEUI_H
#define UI_TOSEARCHREPLACEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toSearchReplaceUI
{
public:
    QGridLayout *gridLayout;
    QPushButton *Search;
    QSpacerItem *spacerItem;
    QPushButton *SearchNext;
    QPushButton *Replace;
    QPushButton *ReplaceAll;
    QPushButton *Close;
    QFrame *Line1;
    QFrame *Frame3;
    QGridLayout *gridLayout1;
    QWidget *ButtonGroup1;
    QGridLayout *gridLayout2;
    QTextEdit *SearchText;
    QRadioButton *Exact;
    QCheckBox *WholeWord;
    QCheckBox *IgnoreCase;
    QRadioButton *RegExp;
    QSpacerItem *spacerItem1;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout3;
    QTextEdit *ReplaceText;

    void setupUi(QDialog *toSearchReplaceUI)
    {
    if (toSearchReplaceUI->objectName().isEmpty())
        toSearchReplaceUI->setObjectName(QString::fromUtf8("toSearchReplaceUI"));
    toSearchReplaceUI->resize(570, 228);
    gridLayout = new QGridLayout(toSearchReplaceUI);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    Search = new QPushButton(toSearchReplaceUI);
    Search->setObjectName(QString::fromUtf8("Search"));
    Search->setEnabled(false);
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Search->sizePolicy().hasHeightForWidth());
    Search->setSizePolicy(sizePolicy);

    gridLayout->addWidget(Search, 0, 2, 1, 1);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 5, 2, 1, 1);

    SearchNext = new QPushButton(toSearchReplaceUI);
    SearchNext->setObjectName(QString::fromUtf8("SearchNext"));
    SearchNext->setEnabled(false);
    sizePolicy.setHeightForWidth(SearchNext->sizePolicy().hasHeightForWidth());
    SearchNext->setSizePolicy(sizePolicy);

    gridLayout->addWidget(SearchNext, 1, 2, 1, 1);

    Replace = new QPushButton(toSearchReplaceUI);
    Replace->setObjectName(QString::fromUtf8("Replace"));
    Replace->setEnabled(false);
    sizePolicy.setHeightForWidth(Replace->sizePolicy().hasHeightForWidth());
    Replace->setSizePolicy(sizePolicy);

    gridLayout->addWidget(Replace, 2, 2, 1, 1);

    ReplaceAll = new QPushButton(toSearchReplaceUI);
    ReplaceAll->setObjectName(QString::fromUtf8("ReplaceAll"));
    ReplaceAll->setEnabled(false);
    sizePolicy.setHeightForWidth(ReplaceAll->sizePolicy().hasHeightForWidth());
    ReplaceAll->setSizePolicy(sizePolicy);

    gridLayout->addWidget(ReplaceAll, 3, 2, 1, 1);

    Close = new QPushButton(toSearchReplaceUI);
    Close->setObjectName(QString::fromUtf8("Close"));
    Close->setEnabled(true);
    sizePolicy.setHeightForWidth(Close->sizePolicy().hasHeightForWidth());
    Close->setSizePolicy(sizePolicy);

    gridLayout->addWidget(Close, 4, 2, 1, 1);

    Line1 = new QFrame(toSearchReplaceUI);
    Line1->setObjectName(QString::fromUtf8("Line1"));
    Line1->setFrameShape(QFrame::VLine);
    Line1->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(Line1, 0, 1, 6, 1);

    Frame3 = new QFrame(toSearchReplaceUI);
    Frame3->setObjectName(QString::fromUtf8("Frame3"));
    Frame3->setFrameShape(QFrame::NoFrame);
    Frame3->setFrameShadow(QFrame::Plain);
    gridLayout1 = new QGridLayout(Frame3);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    ButtonGroup1 = new QWidget(Frame3);
    ButtonGroup1->setObjectName(QString::fromUtf8("ButtonGroup1"));
    gridLayout2 = new QGridLayout(ButtonGroup1);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setHorizontalSpacing(6);
    gridLayout2->setVerticalSpacing(6);
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    SearchText = new QTextEdit(ButtonGroup1);
    SearchText->setObjectName(QString::fromUtf8("SearchText"));

    gridLayout2->addWidget(SearchText, 0, 0, 1, 3);

    Exact = new QRadioButton(ButtonGroup1);
    Exact->setObjectName(QString::fromUtf8("Exact"));
    Exact->setChecked(true);

    gridLayout2->addWidget(Exact, 1, 0, 1, 1);

    WholeWord = new QCheckBox(ButtonGroup1);
    WholeWord->setObjectName(QString::fromUtf8("WholeWord"));

    gridLayout2->addWidget(WholeWord, 2, 0, 1, 1);

    IgnoreCase = new QCheckBox(ButtonGroup1);
    IgnoreCase->setObjectName(QString::fromUtf8("IgnoreCase"));

    gridLayout2->addWidget(IgnoreCase, 2, 1, 1, 1);

    RegExp = new QRadioButton(ButtonGroup1);
    RegExp->setObjectName(QString::fromUtf8("RegExp"));

    gridLayout2->addWidget(RegExp, 1, 1, 1, 1);

    spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem1, 1, 2, 1, 1);


    gridLayout1->addWidget(ButtonGroup1, 0, 0, 1, 1);

    GroupBox1 = new QGroupBox(Frame3);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(GroupBox1->sizePolicy().hasHeightForWidth());
    GroupBox1->setSizePolicy(sizePolicy1);
    gridLayout3 = new QGridLayout(GroupBox1);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    gridLayout3->setHorizontalSpacing(6);
    gridLayout3->setVerticalSpacing(6);
    gridLayout3->setContentsMargins(11, 11, 11, 11);
    ReplaceText = new QTextEdit(GroupBox1);
    ReplaceText->setObjectName(QString::fromUtf8("ReplaceText"));

    gridLayout3->addWidget(ReplaceText, 0, 0, 1, 1);


    gridLayout1->addWidget(GroupBox1, 1, 0, 1, 1);


    gridLayout->addWidget(Frame3, 0, 0, 6, 1);

    QWidget::setTabOrder(SearchText, Exact);
    QWidget::setTabOrder(Exact, RegExp);
    QWidget::setTabOrder(RegExp, WholeWord);
    QWidget::setTabOrder(WholeWord, IgnoreCase);
    QWidget::setTabOrder(IgnoreCase, ReplaceText);
    QWidget::setTabOrder(ReplaceText, Search);
    QWidget::setTabOrder(Search, SearchNext);
    QWidget::setTabOrder(SearchNext, Replace);
    QWidget::setTabOrder(Replace, ReplaceAll);
    QWidget::setTabOrder(ReplaceAll, Close);

    retranslateUi(toSearchReplaceUI);
    QObject::connect(Close, SIGNAL(clicked()), toSearchReplaceUI, SLOT(reject()));
    QObject::connect(Search, SIGNAL(clicked()), toSearchReplaceUI, SLOT(search()));
    QObject::connect(SearchNext, SIGNAL(clicked()), toSearchReplaceUI, SLOT(searchNext()));
    QObject::connect(ReplaceAll, SIGNAL(clicked()), toSearchReplaceUI, SLOT(replaceAll()));
    QObject::connect(SearchText, SIGNAL(textChanged()), toSearchReplaceUI, SLOT(searchChanged()));
    QObject::connect(Replace, SIGNAL(clicked()), toSearchReplaceUI, SLOT(replace()));

    QMetaObject::connectSlotsByName(toSearchReplaceUI);
    } // setupUi

    void retranslateUi(QDialog *toSearchReplaceUI)
    {
    toSearchReplaceUI->setWindowTitle(QApplication::translate("toSearchReplaceUI", "Search & Replace", 0, QApplication::UnicodeUTF8));
    Search->setText(QApplication::translate("toSearchReplaceUI", "&Search Top", 0, QApplication::UnicodeUTF8));
    SearchNext->setText(QApplication::translate("toSearchReplaceUI", "Search &Next", 0, QApplication::UnicodeUTF8));
    Replace->setText(QApplication::translate("toSearchReplaceUI", "&Replace", 0, QApplication::UnicodeUTF8));
    ReplaceAll->setText(QApplication::translate("toSearchReplaceUI", "Replace &All", 0, QApplication::UnicodeUTF8));
    Close->setText(QApplication::translate("toSearchReplaceUI", "Close", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    Exact->setToolTip(QApplication::translate("toSearchReplaceUI", "Match text exactly as written", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Exact->setText(QApplication::translate("toSearchReplaceUI", "Exact", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    WholeWord->setToolTip(QApplication::translate("toSearchReplaceUI", "Only match whole words", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    WholeWord->setText(QApplication::translate("toSearchReplaceUI", "Match Word", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    IgnoreCase->setToolTip(QApplication::translate("toSearchReplaceUI", "Only match whole words", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    IgnoreCase->setText(QApplication::translate("toSearchReplaceUI", "Ignore Case", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    RegExp->setToolTip(QApplication::translate("toSearchReplaceUI", "Use RegExp semantics for matching (See Qt documentation)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    RegExp->setText(QApplication::translate("toSearchReplaceUI", "RegExp", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("toSearchReplaceUI", "Replace", 0, QApplication::UnicodeUTF8));
    ReplaceText->setHtml(QApplication::translate("toSearchReplaceUI", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toSearchReplaceUI);
    } // retranslateUi

};

namespace Ui {
    class toSearchReplaceUI: public Ui_toSearchReplaceUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSEARCHREPLACEUI_H
