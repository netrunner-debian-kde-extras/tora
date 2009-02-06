/********************************************************************************
** Form generated from reading ui file 'toeditextensionsetupui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOEDITEXTENSIONSETUPUI_H
#define UI_TOEDITEXTENSIONSETUPUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "tohighlightedtext.h"

QT_BEGIN_NAMESPACE

class Ui_toEditExtensionSetupUI
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1_2;
    QSpinBox *CommentColumn;
    QVBoxLayout *vboxLayout1;
    QCheckBox *CommaBefore;
    QCheckBox *BlockOpenLine;
    QCheckBox *OperatorSpace;
    QCheckBox *KeywordUpper;
    QCheckBox *RightSeparator;
    QCheckBox *EndBlockNewline;
    QCheckBox *AutoIndent;
    QCheckBox *DragDrop;
    QLabel *ExampleLabel;
    toHighlightedText *Example;

    void setupUi(QWidget *toEditExtensionSetupUI)
    {
    if (toEditExtensionSetupUI->objectName().isEmpty())
        toEditExtensionSetupUI->setObjectName(QString::fromUtf8("toEditExtensionSetupUI"));
    toEditExtensionSetupUI->resize(527, 421);
    vboxLayout = new QVBoxLayout(toEditExtensionSetupUI);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    TextLabel1_2 = new QLabel(toEditExtensionSetupUI);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    hboxLayout->addWidget(TextLabel1_2);

    CommentColumn = new QSpinBox(toEditExtensionSetupUI);
    CommentColumn->setObjectName(QString::fromUtf8("CommentColumn"));

    hboxLayout->addWidget(CommentColumn);


    vboxLayout->addLayout(hboxLayout);

    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    CommaBefore = new QCheckBox(toEditExtensionSetupUI);
    CommaBefore->setObjectName(QString::fromUtf8("CommaBefore"));

    vboxLayout1->addWidget(CommaBefore);

    BlockOpenLine = new QCheckBox(toEditExtensionSetupUI);
    BlockOpenLine->setObjectName(QString::fromUtf8("BlockOpenLine"));

    vboxLayout1->addWidget(BlockOpenLine);

    OperatorSpace = new QCheckBox(toEditExtensionSetupUI);
    OperatorSpace->setObjectName(QString::fromUtf8("OperatorSpace"));

    vboxLayout1->addWidget(OperatorSpace);

    KeywordUpper = new QCheckBox(toEditExtensionSetupUI);
    KeywordUpper->setObjectName(QString::fromUtf8("KeywordUpper"));

    vboxLayout1->addWidget(KeywordUpper);

    RightSeparator = new QCheckBox(toEditExtensionSetupUI);
    RightSeparator->setObjectName(QString::fromUtf8("RightSeparator"));

    vboxLayout1->addWidget(RightSeparator);

    EndBlockNewline = new QCheckBox(toEditExtensionSetupUI);
    EndBlockNewline->setObjectName(QString::fromUtf8("EndBlockNewline"));

    vboxLayout1->addWidget(EndBlockNewline);

    AutoIndent = new QCheckBox(toEditExtensionSetupUI);
    AutoIndent->setObjectName(QString::fromUtf8("AutoIndent"));

    vboxLayout1->addWidget(AutoIndent);

    DragDrop = new QCheckBox(toEditExtensionSetupUI);
    DragDrop->setObjectName(QString::fromUtf8("DragDrop"));

    vboxLayout1->addWidget(DragDrop);

    ExampleLabel = new QLabel(toEditExtensionSetupUI);
    ExampleLabel->setObjectName(QString::fromUtf8("ExampleLabel"));
    ExampleLabel->setWordWrap(false);

    vboxLayout1->addWidget(ExampleLabel);

    Example = new toHighlightedText(toEditExtensionSetupUI);
    Example->setObjectName(QString::fromUtf8("Example"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Example->sizePolicy().hasHeightForWidth());
    Example->setSizePolicy(sizePolicy);

    vboxLayout1->addWidget(Example);


    vboxLayout->addLayout(vboxLayout1);

    TextLabel1_2->setBuddy(CommentColumn);
    QWidget::setTabOrder(CommentColumn, CommaBefore);
    QWidget::setTabOrder(CommaBefore, BlockOpenLine);
    QWidget::setTabOrder(BlockOpenLine, OperatorSpace);
    QWidget::setTabOrder(OperatorSpace, KeywordUpper);
    QWidget::setTabOrder(KeywordUpper, RightSeparator);
    QWidget::setTabOrder(RightSeparator, EndBlockNewline);

    retranslateUi(toEditExtensionSetupUI);
    QObject::connect(CommaBefore, SIGNAL(toggled(bool)), toEditExtensionSetupUI, SLOT(changed()));
    QObject::connect(BlockOpenLine, SIGNAL(toggled(bool)), toEditExtensionSetupUI, SLOT(changed()));
    QObject::connect(KeywordUpper, SIGNAL(toggled(bool)), toEditExtensionSetupUI, SLOT(changed()));
    QObject::connect(RightSeparator, SIGNAL(toggled(bool)), toEditExtensionSetupUI, SLOT(changed()));
    QObject::connect(EndBlockNewline, SIGNAL(toggled(bool)), toEditExtensionSetupUI, SLOT(changed()));
    QObject::connect(OperatorSpace, SIGNAL(toggled(bool)), toEditExtensionSetupUI, SLOT(changed()));
    QObject::connect(CommentColumn, SIGNAL(valueChanged(int)), toEditExtensionSetupUI, SLOT(changed()));

    QMetaObject::connectSlotsByName(toEditExtensionSetupUI);
    } // setupUi

    void retranslateUi(QWidget *toEditExtensionSetupUI)
    {
    toEditExtensionSetupUI->setWindowTitle(QApplication::translate("toEditExtensionSetupUI", "Form1", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("toEditExtensionSetupUI", "&Same line comment column", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    CommaBefore->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    CommaBefore->setText(QApplication::translate("toEditExtensionSetupUI", "Place &comma on new line before item instead of after on same line", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    BlockOpenLine->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    BlockOpenLine->setText(QApplication::translate("toEditExtensionSetupUI", "Place THEN, LOOP, AS and IS on new line at b&eginning of new block", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    OperatorSpace->setToolTip(QApplication::translate("toEditExtensionSetupUI", "Insert extra spaces between operators.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    OperatorSpace->setText(QApplication::translate("toEditExtensionSetupUI", "Put spaces around operators", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    KeywordUpper->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    KeywordUpper->setText(QApplication::translate("toEditExtensionSetupUI", "Transform keywords to &uppercase", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    RightSeparator->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    RightSeparator->setText(QApplication::translate("toEditExtensionSetupUI", "&Right align keywords in each statement.", 0, QApplication::UnicodeUTF8));
    EndBlockNewline->setText(QApplication::translate("toEditExtensionSetupUI", "Insert a &newline after each block", 0, QApplication::UnicodeUTF8));
    AutoIndent->setText(QApplication::translate("toEditExtensionSetupUI", "Auto indent read only SQL text editors", 0, QApplication::UnicodeUTF8));
    DragDrop->setText(QApplication::translate("toEditExtensionSetupUI", "Allow Drag and Drop", 0, QApplication::UnicodeUTF8));
    ExampleLabel->setText(QApplication::translate("toEditExtensionSetupUI", "Example", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toEditExtensionSetupUI);
    } // retranslateUi

};

namespace Ui {
    class toEditExtensionSetupUI: public Ui_toEditExtensionSetupUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOEDITEXTENSIONSETUPUI_H
