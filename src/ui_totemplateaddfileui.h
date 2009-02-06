/********************************************************************************
** Form generated from reading ui file 'totemplateaddfileui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOTEMPLATEADDFILEUI_H
#define UI_TOTEMPLATEADDFILEUI_H

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

QT_BEGIN_NAMESPACE

class Ui_toTemplateAddFileUI
{
public:
    QGridLayout *gridLayout;
    QLineEdit *Filename;
    QPushButton *Browse;
    QLineEdit *Root;
    QFrame *Line1;
    QPushButton *PushButton2_2;
    QPushButton *OkButton;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *toTemplateAddFileUI)
    {
    if (toTemplateAddFileUI->objectName().isEmpty())
        toTemplateAddFileUI->setObjectName(QString::fromUtf8("toTemplateAddFileUI"));
    toTemplateAddFileUI->resize(438, 164);
    gridLayout = new QGridLayout(toTemplateAddFileUI);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    Filename = new QLineEdit(toTemplateAddFileUI);
    Filename->setObjectName(QString::fromUtf8("Filename"));

    gridLayout->addWidget(Filename, 3, 0, 1, 3);

    Browse = new QPushButton(toTemplateAddFileUI);
    Browse->setObjectName(QString::fromUtf8("Browse"));

    gridLayout->addWidget(Browse, 3, 4, 1, 1);

    Root = new QLineEdit(toTemplateAddFileUI);
    Root->setObjectName(QString::fromUtf8("Root"));

    gridLayout->addWidget(Root, 1, 0, 1, 5);

    Line1 = new QFrame(toTemplateAddFileUI);
    Line1->setObjectName(QString::fromUtf8("Line1"));

    gridLayout->addWidget(Line1, 4, 0, 1, 2);

    PushButton2_2 = new QPushButton(toTemplateAddFileUI);
    PushButton2_2->setObjectName(QString::fromUtf8("PushButton2_2"));

    gridLayout->addWidget(PushButton2_2, 4, 4, 2, 1);

    OkButton = new QPushButton(toTemplateAddFileUI);
    OkButton->setObjectName(QString::fromUtf8("OkButton"));
    OkButton->setDefault(true);

    gridLayout->addWidget(OkButton, 4, 2, 2, 1);

    TextLabel1_2 = new QLabel(toTemplateAddFileUI);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setWordWrap(false);

    gridLayout->addWidget(TextLabel1_2, 2, 0, 1, 5);

    TextLabel1 = new QLabel(toTemplateAddFileUI);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setWordWrap(false);

    gridLayout->addWidget(TextLabel1, 0, 0, 1, 5);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 5, 1, 1, 1);

    TextLabel1_2->setBuddy(Root);
    TextLabel1->setBuddy(Root);
    QWidget::setTabOrder(Root, Filename);
    QWidget::setTabOrder(Filename, Browse);
    QWidget::setTabOrder(Browse, OkButton);
    QWidget::setTabOrder(OkButton, PushButton2_2);

    retranslateUi(toTemplateAddFileUI);
    QObject::connect(OkButton, SIGNAL(clicked()), toTemplateAddFileUI, SLOT(accept()));
    QObject::connect(PushButton2_2, SIGNAL(clicked()), toTemplateAddFileUI, SLOT(reject()));
    QObject::connect(Browse, SIGNAL(clicked()), toTemplateAddFileUI, SLOT(browse()));
    QObject::connect(Root, SIGNAL(textChanged(QString)), toTemplateAddFileUI, SLOT(valid()));
    QObject::connect(Filename, SIGNAL(textChanged(QString)), toTemplateAddFileUI, SLOT(valid()));

    QMetaObject::connectSlotsByName(toTemplateAddFileUI);
    } // setupUi

    void retranslateUi(QDialog *toTemplateAddFileUI)
    {
    toTemplateAddFileUI->setWindowTitle(QApplication::translate("toTemplateAddFileUI", "Add template file", 0, QApplication::UnicodeUTF8));
    Browse->setText(QApplication::translate("toTemplateAddFileUI", "&Browse", 0, QApplication::UnicodeUTF8));
    PushButton2_2->setText(QApplication::translate("toTemplateAddFileUI", "Cancel", 0, QApplication::UnicodeUTF8));
    OkButton->setText(QApplication::translate("toTemplateAddFileUI", "&Ok", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("toTemplateAddFileUI", "&File", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("toTemplateAddFileUI", "&Root", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toTemplateAddFileUI);
    } // retranslateUi

};

namespace Ui {
    class toTemplateAddFileUI: public Ui_toTemplateAddFileUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTEMPLATEADDFILEUI_H
