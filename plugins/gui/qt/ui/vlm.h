#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'vlm.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VLM_H
#define VLM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vlm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mediaConfBox;
    QGridLayout *gridLayout1;
    QComboBox *mediaType;
    QFrame *line;
    QLabel *nameLabel;
    QLineEdit *nameLedit;
    QCheckBox *enableCheck;
    QLabel *inputLabel;
    QLineEdit *inputLedit;
    QPushButton *inputButton;
    QLabel *outputLabel;
    QLineEdit *outputLedit;
    QPushButton *outputButton;
    QGroupBox *schedBox;
    QGroupBox *vodBox;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *muxLedit;
    QSpacerItem *spacerItem;
    QCheckBox *loopBCast;
    QSpacerItem *spacerItem1;
    QPushButton *addButton;
    QPushButton *clearButton;
    QPushButton *saveButton;
    QSpacerItem *spacerItem2;
    QGroupBox *mediaBox;
    QGridLayout *gridLayout2;
    QListWidget *vlmListItem;
    QFrame *line_2;
    QScrollArea *vlmItemScroll;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Vlm)
    {
        if (Vlm->objectName().isEmpty())
            Vlm->setObjectName(QStringLiteral("Vlm"));
        Vlm->setWindowModality(Qt::NonModal);
        Vlm->resize(738, 693);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Vlm->sizePolicy().hasHeightForWidth());
        Vlm->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Vlm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mediaConfBox = new QGroupBox(Vlm);
        mediaConfBox->setObjectName(QStringLiteral("mediaConfBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mediaConfBox->sizePolicy().hasHeightForWidth());
        mediaConfBox->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(mediaConfBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        mediaType = new QComboBox(mediaConfBox);
        mediaType->setObjectName(QStringLiteral("mediaType"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mediaType->sizePolicy().hasHeightForWidth());
        mediaType->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(mediaType, 0, 0, 1, 3);

        line = new QFrame(mediaConfBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line, 1, 0, 1, 3);

        nameLabel = new QLabel(mediaConfBox);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout1->addWidget(nameLabel, 2, 0, 1, 1);

        nameLedit = new QLineEdit(mediaConfBox);
        nameLedit->setObjectName(QStringLiteral("nameLedit"));

        gridLayout1->addWidget(nameLedit, 2, 1, 1, 1);

        enableCheck = new QCheckBox(mediaConfBox);
        enableCheck->setObjectName(QStringLiteral("enableCheck"));
        enableCheck->setChecked(true);

        gridLayout1->addWidget(enableCheck, 2, 2, 1, 1);

        inputLabel = new QLabel(mediaConfBox);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));

        gridLayout1->addWidget(inputLabel, 3, 0, 1, 1);

        inputLedit = new QLineEdit(mediaConfBox);
        inputLedit->setObjectName(QStringLiteral("inputLedit"));

        gridLayout1->addWidget(inputLedit, 3, 1, 1, 1);

        inputButton = new QPushButton(mediaConfBox);
        inputButton->setObjectName(QStringLiteral("inputButton"));

        gridLayout1->addWidget(inputButton, 3, 2, 1, 1);

        outputLabel = new QLabel(mediaConfBox);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));

        gridLayout1->addWidget(outputLabel, 4, 0, 1, 1);

        outputLedit = new QLineEdit(mediaConfBox);
        outputLedit->setObjectName(QStringLiteral("outputLedit"));

        gridLayout1->addWidget(outputLedit, 4, 1, 1, 1);

        outputButton = new QPushButton(mediaConfBox);
        outputButton->setObjectName(QStringLiteral("outputButton"));

        gridLayout1->addWidget(outputButton, 4, 2, 1, 1);

        schedBox = new QGroupBox(mediaConfBox);
        schedBox->setObjectName(QStringLiteral("schedBox"));

        gridLayout1->addWidget(schedBox, 5, 0, 1, 3);

        vodBox = new QGroupBox(mediaConfBox);
        vodBox->setObjectName(QStringLiteral("vodBox"));
        hboxLayout = new QHBoxLayout(vodBox);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(vodBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMargin(3);

        hboxLayout->addWidget(label);

        muxLedit = new QLineEdit(vodBox);
        muxLedit->setObjectName(QStringLiteral("muxLedit"));

        hboxLayout->addWidget(muxLedit);

        spacerItem = new QSpacerItem(411, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout1->addWidget(vodBox, 6, 0, 1, 3);

        loopBCast = new QCheckBox(mediaConfBox);
        loopBCast->setObjectName(QStringLiteral("loopBCast"));

        gridLayout1->addWidget(loopBCast, 7, 0, 1, 2);


        gridLayout->addWidget(mediaConfBox, 0, 0, 5, 3);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem1, 0, 3, 1, 1);

        addButton = new QPushButton(Vlm);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout->addWidget(addButton, 1, 3, 1, 1);

        clearButton = new QPushButton(Vlm);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        gridLayout->addWidget(clearButton, 2, 3, 1, 1);

        saveButton = new QPushButton(Vlm);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        gridLayout->addWidget(saveButton, 3, 3, 1, 1);

        spacerItem2 = new QSpacerItem(80, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 4, 3, 1, 1);

        mediaBox = new QGroupBox(Vlm);
        mediaBox->setObjectName(QStringLiteral("mediaBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(mediaBox->sizePolicy().hasHeightForWidth());
        mediaBox->setSizePolicy(sizePolicy3);
        gridLayout2 = new QGridLayout(mediaBox);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        vlmListItem = new QListWidget(mediaBox);
        vlmListItem->setObjectName(QStringLiteral("vlmListItem"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(vlmListItem->sizePolicy().hasHeightForWidth());
        vlmListItem->setSizePolicy(sizePolicy4);
        vlmListItem->setMaximumSize(QSize(200, 16777215));

        gridLayout2->addWidget(vlmListItem, 0, 0, 1, 1);

        line_2 = new QFrame(mediaBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout2->addWidget(line_2, 0, 1, 1, 1);

        vlmItemScroll = new QScrollArea(mediaBox);
        vlmItemScroll->setObjectName(QStringLiteral("vlmItemScroll"));
        sizePolicy4.setHeightForWidth(vlmItemScroll->sizePolicy().hasHeightForWidth());
        vlmItemScroll->setSizePolicy(sizePolicy4);
        vlmItemScroll->setMinimumSize(QSize(300, 0));

        gridLayout2->addWidget(vlmItemScroll, 0, 2, 1, 1);


        gridLayout->addWidget(mediaBox, 5, 0, 1, 4);

        buttonBox = new QDialogButtonBox(Vlm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout->addWidget(buttonBox, 6, 2, 1, 2);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(nameLedit);
        inputLabel->setBuddy(inputLedit);
        outputLabel->setBuddy(outputLedit);
        label->setBuddy(muxLedit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mediaType, nameLedit);
        QWidget::setTabOrder(nameLedit, enableCheck);
        QWidget::setTabOrder(enableCheck, inputLedit);
        QWidget::setTabOrder(inputLedit, inputButton);
        QWidget::setTabOrder(inputButton, outputLedit);
        QWidget::setTabOrder(outputLedit, outputButton);
        QWidget::setTabOrder(outputButton, addButton);
        QWidget::setTabOrder(addButton, clearButton);
        QWidget::setTabOrder(clearButton, saveButton);
        QWidget::setTabOrder(saveButton, muxLedit);
        QWidget::setTabOrder(muxLedit, loopBCast);
        QWidget::setTabOrder(loopBCast, vlmListItem);
        QWidget::setTabOrder(vlmListItem, vlmItemScroll);
        QWidget::setTabOrder(vlmItemScroll, buttonBox);

        retranslateUi(Vlm);

        QMetaObject::connectSlotsByName(Vlm);
    } // setupUi

    void retranslateUi(QWidget *Vlm)
    {
        Vlm->setWindowTitle(Q_("VLM configurator", Q_NULLPTR));
        mediaConfBox->setTitle(Q_("Media Manager Edition", Q_NULLPTR));
        nameLabel->setText(Q_("Name:", Q_NULLPTR));
        enableCheck->setText(Q_("Enable", Q_NULLPTR));
        inputLabel->setText(Q_("Input:", Q_NULLPTR));
        inputButton->setText(Q_("Select Input", Q_NULLPTR));
        outputLabel->setText(Q_("Output:", Q_NULLPTR));
        outputButton->setText(Q_("Select Output", Q_NULLPTR));
        schedBox->setTitle(Q_("Time Control", Q_NULLPTR));
        vodBox->setTitle(Q_("Mux Control", Q_NULLPTR));
        label->setText(Q_("Muxer:", Q_NULLPTR));
        muxLedit->setInputMask(Q_("AAAA; ", Q_NULLPTR));
        loopBCast->setText(Q_("Loop", Q_NULLPTR));
        addButton->setText(Q_("Add", Q_NULLPTR));
        clearButton->setText(Q_("Clear", Q_NULLPTR));
        saveButton->setText(Q_("Save", Q_NULLPTR));
        mediaBox->setTitle(Q_("Media Manager List", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Vlm: public Ui_Vlm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VLM_H
