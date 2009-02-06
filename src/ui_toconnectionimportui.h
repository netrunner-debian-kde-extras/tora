/********************************************************************************
** Form generated from reading ui file 'toconnectionimportui.ui'
**
** Created: Mon Nov 3 14:34:34 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOCONNECTIONIMPORTUI_H
#define UI_TOCONNECTIONIMPORTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_toConnectionImport
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *toolComboBox;
    QPushButton *runButton;
    QLabel *notificationLabel;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *toConnectionImport)
    {
    if (toConnectionImport->objectName().isEmpty())
        toConnectionImport->setObjectName(QString::fromUtf8("toConnectionImport"));
    toConnectionImport->resize(679, 456);
    gridLayout = new QGridLayout(toConnectionImport);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(toConnectionImport);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    toolComboBox = new QComboBox(toConnectionImport);
    toolComboBox->setObjectName(QString::fromUtf8("toolComboBox"));
    QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(toolComboBox->sizePolicy().hasHeightForWidth());
    toolComboBox->setSizePolicy(sizePolicy);

    gridLayout->addWidget(toolComboBox, 0, 1, 1, 1);

    runButton = new QPushButton(toConnectionImport);
    runButton->setObjectName(QString::fromUtf8("runButton"));

    gridLayout->addWidget(runButton, 0, 2, 1, 1);

    notificationLabel = new QLabel(toConnectionImport);
    notificationLabel->setObjectName(QString::fromUtf8("notificationLabel"));

    gridLayout->addWidget(notificationLabel, 1, 0, 1, 3);

    tableView = new QTableView(toConnectionImport);
    tableView->setObjectName(QString::fromUtf8("tableView"));
    tableView->setAlternatingRowColors(true);

    gridLayout->addWidget(tableView, 2, 0, 1, 3);

    buttonBox = new QDialogButtonBox(toConnectionImport);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 3, 0, 1, 3);

    label->setBuddy(toolComboBox);

    retranslateUi(toConnectionImport);
    QObject::connect(buttonBox, SIGNAL(accepted()), toConnectionImport, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), toConnectionImport, SLOT(reject()));

    QMetaObject::connectSlotsByName(toConnectionImport);
    } // setupUi

    void retranslateUi(QDialog *toConnectionImport)
    {
    toConnectionImport->setWindowTitle(QApplication::translate("toConnectionImport", "Import Connections", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("toConnectionImport", "&From:", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("toConnectionImport", "&Run...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(toConnectionImport);
    } // retranslateUi

};

namespace Ui {
    class toConnectionImport: public Ui_toConnectionImport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOCONNECTIONIMPORTUI_H
