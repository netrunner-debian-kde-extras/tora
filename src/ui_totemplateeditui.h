/********************************************************************************
** Form generated from reading ui file 'totemplateeditui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOTEMPLATEEDITUI_H
#define UI_TOTEMPLATEEDITUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include "tomarkedtext.h"
#include "totreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_toTemplateEditUI
{
public:
    QGridLayout *gridLayout;
    toTreeWidget *Templates;
    QFrame *Frame3;
    QGridLayout *gridLayout1;
    QLineEdit *Name;
    toMarkedText *Description;
    QLabel *TextLabel3;
    QTextEdit *Preview;
    QPushButton *PreviewButton;
    QLabel *TextLabel2;
    QPushButton *TrashButton;
    QPushButton *NewButton;
    QLabel *TextLabel4;
    QSpacerItem *spacerItem;
    QPushButton *PushButton2;
    QPushButton *PushButton1;

    void setupUi(QDialog *toTemplateEditUI)
    {
    if (toTemplateEditUI->objectName().isEmpty())
        toTemplateEditUI->setObjectName(QString::fromUtf8("toTemplateEditUI"));
    toTemplateEditUI->resize(659, 547);
    gridLayout = new QGridLayout(toTemplateEditUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    Templates = new toTreeWidget(toTemplateEditUI);
    Templates->setObjectName(QString::fromUtf8("Templates"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(Templates->sizePolicy().hasHeightForWidth());
    Templates->setSizePolicy(sizePolicy);
    Templates->setRootIsDecorated(true);
    Templates->setAllColumnsShowFocus(true);

    gridLayout->addWidget(Templates, 0, 0, 1, 1);

    Frame3 = new QFrame(toTemplateEditUI);
    Frame3->setObjectName(QString::fromUtf8("Frame3"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(Frame3->sizePolicy().hasHeightForWidth());
    Frame3->setSizePolicy(sizePolicy1);
    Frame3->setFrameShape(QFrame::NoFrame);
    Frame3->setFrameShadow(QFrame::Plain);
    gridLayout1 = new QGridLayout(Frame3);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    Name = new QLineEdit(Frame3);
    Name->setObjectName(QString::fromUtf8("Name"));

    gridLayout1->addWidget(Name, 1, 0, 1, 3);

    Description = new toMarkedText(Frame3);
    Description->setObjectName(QString::fromUtf8("Description"));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(Description->sizePolicy().hasHeightForWidth());
    Description->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(Description, 3, 0, 1, 3);

    TextLabel3 = new QLabel(Frame3);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
    TextLabel3->setWordWrap(false);

    gridLayout1->addWidget(TextLabel3, 2, 0, 1, 3);

    Preview = new QTextEdit(Frame3);
    Preview->setObjectName(QString::fromUtf8("Preview"));
    sizePolicy2.setHeightForWidth(Preview->sizePolicy().hasHeightForWidth());
    Preview->setSizePolicy(sizePolicy2);
    Preview->setReadOnly(true);

    gridLayout1->addWidget(Preview, 5, 0, 1, 3);

    PreviewButton = new QPushButton(Frame3);
    PreviewButton->setObjectName(QString::fromUtf8("PreviewButton"));

    gridLayout1->addWidget(PreviewButton, 4, 1, 1, 2);

    TextLabel2 = new QLabel(Frame3);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(TextLabel2->sizePolicy().hasHeightForWidth());
    TextLabel2->setSizePolicy(sizePolicy3);
    TextLabel2->setWordWrap(false);

    gridLayout1->addWidget(TextLabel2, 0, 0, 1, 1);

    TrashButton = new QPushButton(Frame3);
    TrashButton->setObjectName(QString::fromUtf8("TrashButton"));
    QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(TrashButton->sizePolicy().hasHeightForWidth());
    TrashButton->setSizePolicy(sizePolicy4);

    gridLayout1->addWidget(TrashButton, 0, 2, 1, 1);

    NewButton = new QPushButton(Frame3);
    NewButton->setObjectName(QString::fromUtf8("NewButton"));
    sizePolicy4.setHeightForWidth(NewButton->sizePolicy().hasHeightForWidth());
    NewButton->setSizePolicy(sizePolicy4);

    gridLayout1->addWidget(NewButton, 0, 1, 1, 1);

    TextLabel4 = new QLabel(Frame3);
    TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
    sizePolicy3.setHeightForWidth(TextLabel4->sizePolicy().hasHeightForWidth());
    TextLabel4->setSizePolicy(sizePolicy3);
    TextLabel4->setWordWrap(false);

    gridLayout1->addWidget(TextLabel4, 4, 0, 1, 1);


    gridLayout->addWidget(Frame3, 0, 1, 1, 3);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 0, 1, 2);

    PushButton2 = new QPushButton(toTemplateEditUI);
    PushButton2->setObjectName(QString::fromUtf8("PushButton2"));

    gridLayout->addWidget(PushButton2, 1, 3, 1, 1);

    PushButton1 = new QPushButton(toTemplateEditUI);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    gridLayout->addWidget(PushButton1, 1, 2, 1, 1);

    TextLabel3->setBuddy(Description);
    TextLabel2->setBuddy(Name);
    TextLabel4->setBuddy(Preview);

    retranslateUi(toTemplateEditUI);
    QObject::connect(PushButton1, SIGNAL(clicked()), toTemplateEditUI, SLOT(accept()));
    QObject::connect(PushButton2, SIGNAL(clicked()), toTemplateEditUI, SLOT(reject()));
    QObject::connect(PreviewButton, SIGNAL(clicked()), toTemplateEditUI, SLOT(preview()));
    QObject::connect(TrashButton, SIGNAL(clicked()), toTemplateEditUI, SLOT(remove()));
    QObject::connect(NewButton, SIGNAL(clicked()), toTemplateEditUI, SLOT(newTemplate()));
    QObject::connect(Templates, SIGNAL(selectionChanged()), toTemplateEditUI, SLOT(changeSelection()));

    QMetaObject::connectSlotsByName(toTemplateEditUI);
    } // setupUi

    void retranslateUi(QDialog *toTemplateEditUI)
    {
    toTemplateEditUI->setWindowTitle(QApplication::translate("toTemplateEditUI", "Template editor", 0, QApplication::UnicodeUTF8));
    Templates->headerItem()->setText(0, QApplication::translate("toTemplateEditUI", "Template", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel3->setToolTip(QApplication::translate("toTemplateEditUI", "Description text. Can be in HTML format.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel3->setText(QApplication::translate("toTemplateEditUI", "&Description", 0, QApplication::UnicodeUTF8));
    PreviewButton->setText(QApplication::translate("toTemplateEditUI", "&Preview", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel2->setToolTip(QApplication::translate("toTemplateEditUI", "Name of the template.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel2->setText(QApplication::translate("toTemplateEditUI", "&Name", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TrashButton->setToolTip(QApplication::translate("toTemplateEditUI", "Remove the current template", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TrashButton->setText(QApplication::translate("toTemplateEditUI", "Remove", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    NewButton->setToolTip(QApplication::translate("toTemplateEditUI", "Add new template", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    NewButton->setText(QApplication::translate("toTemplateEditUI", "Add", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    TextLabel4->setToolTip(QApplication::translate("toTemplateEditUI", "Preview of the description. Press the button to update", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    TextLabel4->setText(QApplication::translate("toTemplateEditUI", "Preview", 0, QApplication::UnicodeUTF8));
    PushButton2->setText(QApplication::translate("toTemplateEditUI", "Cancel", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("toTemplateEditUI", "&Ok", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toTemplateEditUI);
    } // retranslateUi

};

namespace Ui {
    class toTemplateEditUI: public Ui_toTemplateEditUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTEMPLATEEDITUI_H
