#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'open_disk.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPEN_DISK_H
#define OPEN_DISK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenDisk
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *diskGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *dvdRadioButton;
    QSpacerItem *spacerItem;
    QRadioButton *bdRadioButton;
    QRadioButton *audioCDRadioButton;
    QSpacerItem *spacerItem1;
    QRadioButton *vcdRadioButton;
    QSpacerItem *spacerItem2;
    QCheckBox *dvdsimple;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *deviceLabel;
    QComboBox *deviceCombo;
    QToolButton *ejectButton;
    QPushButton *browseDiscButton;
    QSpacerItem *spacerItem3;
    QGroupBox *diskOptionBox;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpinBox *titleSpin;
    QSpacerItem *horizontalSpacer;
    QLabel *chapterLabel;
    QSpinBox *chapterSpin;
    QGroupBox *diskOptionBox_2;
    QGridLayout *gridLayout_2;
    QLabel *audioLabel;
    QSpinBox *audioSpin;
    QSpacerItem *horizontalSpacer_2;
    QLabel *subtitlesLabel;
    QSpinBox *subtitlesSpin;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *OpenDisk)
    {
        if (OpenDisk->objectName().isEmpty())
            OpenDisk->setObjectName(QStringLiteral("OpenDisk"));
        OpenDisk->resize(500, 319);
        OpenDisk->setMinimumSize(QSize(500, 0));
        verticalLayout = new QVBoxLayout(OpenDisk);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        diskGroupBox = new QGroupBox(OpenDisk);
        diskGroupBox->setObjectName(QStringLiteral("diskGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(diskGroupBox->sizePolicy().hasHeightForWidth());
        diskGroupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(diskGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dvdRadioButton = new QRadioButton(diskGroupBox);
        dvdRadioButton->setObjectName(QStringLiteral("dvdRadioButton"));
        dvdRadioButton->setLayoutDirection(Qt::LeftToRight);
        dvdRadioButton->setChecked(true);

        gridLayout->addWidget(dvdRadioButton, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        bdRadioButton = new QRadioButton(diskGroupBox);
        bdRadioButton->setObjectName(QStringLiteral("bdRadioButton"));

        gridLayout->addWidget(bdRadioButton, 0, 3, 1, 1);

        audioCDRadioButton = new QRadioButton(diskGroupBox);
        audioCDRadioButton->setObjectName(QStringLiteral("audioCDRadioButton"));

        gridLayout->addWidget(audioCDRadioButton, 0, 5, 1, 1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 6, 1, 1);

        vcdRadioButton = new QRadioButton(diskGroupBox);
        vcdRadioButton->setObjectName(QStringLiteral("vcdRadioButton"));

        gridLayout->addWidget(vcdRadioButton, 0, 7, 1, 1);

        spacerItem2 = new QSpacerItem(31, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 8, 1, 1);

        dvdsimple = new QCheckBox(diskGroupBox);
        dvdsimple->setObjectName(QStringLiteral("dvdsimple"));

        gridLayout->addWidget(dvdsimple, 1, 1, 1, 4);

        line = new QFrame(diskGroupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 3, 1, 6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        deviceLabel = new QLabel(diskGroupBox);
        deviceLabel->setObjectName(QStringLiteral("deviceLabel"));

        horizontalLayout_5->addWidget(deviceLabel);

        deviceCombo = new QComboBox(diskGroupBox);
        deviceCombo->setObjectName(QStringLiteral("deviceCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deviceCombo->sizePolicy().hasHeightForWidth());
        deviceCombo->setSizePolicy(sizePolicy1);
        deviceCombo->setEditable(true);

        horizontalLayout_5->addWidget(deviceCombo);

        ejectButton = new QToolButton(diskGroupBox);
        ejectButton->setObjectName(QStringLiteral("ejectButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ejectButton->sizePolicy().hasHeightForWidth());
        ejectButton->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(ejectButton);

        browseDiscButton = new QPushButton(diskGroupBox);
        browseDiscButton->setObjectName(QStringLiteral("browseDiscButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(browseDiscButton->sizePolicy().hasHeightForWidth());
        browseDiscButton->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(browseDiscButton);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 9);

        spacerItem3 = new QSpacerItem(16, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 0, 4, 1, 1);


        verticalLayout->addWidget(diskGroupBox);

        diskOptionBox = new QGroupBox(OpenDisk);
        diskOptionBox->setObjectName(QStringLiteral("diskOptionBox"));
        horizontalLayout = new QHBoxLayout(diskOptionBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        titleLabel = new QLabel(diskOptionBox);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));

        horizontalLayout->addWidget(titleLabel);

        titleSpin = new QSpinBox(diskOptionBox);
        titleSpin->setObjectName(QStringLiteral("titleSpin"));
        sizePolicy3.setHeightForWidth(titleSpin->sizePolicy().hasHeightForWidth());
        titleSpin->setSizePolicy(sizePolicy3);
        titleSpin->setAutoFillBackground(false);
        titleSpin->setAlignment(Qt::AlignRight);
        titleSpin->setValue(0);

        horizontalLayout->addWidget(titleSpin);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chapterLabel = new QLabel(diskOptionBox);
        chapterLabel->setObjectName(QStringLiteral("chapterLabel"));

        horizontalLayout->addWidget(chapterLabel);

        chapterSpin = new QSpinBox(diskOptionBox);
        chapterSpin->setObjectName(QStringLiteral("chapterSpin"));
        sizePolicy3.setHeightForWidth(chapterSpin->sizePolicy().hasHeightForWidth());
        chapterSpin->setSizePolicy(sizePolicy3);
        chapterSpin->setAlignment(Qt::AlignRight);

        horizontalLayout->addWidget(chapterSpin);


        verticalLayout->addWidget(diskOptionBox);

        diskOptionBox_2 = new QGroupBox(OpenDisk);
        diskOptionBox_2->setObjectName(QStringLiteral("diskOptionBox_2"));
        gridLayout_2 = new QGridLayout(diskOptionBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        audioLabel = new QLabel(diskOptionBox_2);
        audioLabel->setObjectName(QStringLiteral("audioLabel"));

        gridLayout_2->addWidget(audioLabel, 0, 0, 1, 1);

        audioSpin = new QSpinBox(diskOptionBox_2);
        audioSpin->setObjectName(QStringLiteral("audioSpin"));
        sizePolicy3.setHeightForWidth(audioSpin->sizePolicy().hasHeightForWidth());
        audioSpin->setSizePolicy(sizePolicy3);
        audioSpin->setAlignment(Qt::AlignRight);
        audioSpin->setMinimum(-1);
        audioSpin->setMaximum(10);
        audioSpin->setValue(-1);

        gridLayout_2->addWidget(audioSpin, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        subtitlesLabel = new QLabel(diskOptionBox_2);
        subtitlesLabel->setObjectName(QStringLiteral("subtitlesLabel"));

        gridLayout_2->addWidget(subtitlesLabel, 0, 3, 1, 1);

        subtitlesSpin = new QSpinBox(diskOptionBox_2);
        subtitlesSpin->setObjectName(QStringLiteral("subtitlesSpin"));
        sizePolicy3.setHeightForWidth(subtitlesSpin->sizePolicy().hasHeightForWidth());
        subtitlesSpin->setSizePolicy(sizePolicy3);
        subtitlesSpin->setAutoFillBackground(false);
        subtitlesSpin->setAlignment(Qt::AlignRight);
        subtitlesSpin->setMinimum(-1);
        subtitlesSpin->setMaximum(31);
        subtitlesSpin->setValue(-1);

        gridLayout_2->addWidget(subtitlesSpin, 0, 4, 1, 1);


        verticalLayout->addWidget(diskOptionBox_2);

        spacerItem4 = new QSpacerItem(181, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(spacerItem4);

#ifndef QT_NO_SHORTCUT
        deviceLabel->setBuddy(deviceCombo);
        titleLabel->setBuddy(titleSpin);
        chapterLabel->setBuddy(chapterSpin);
        audioLabel->setBuddy(audioSpin);
        subtitlesLabel->setBuddy(subtitlesSpin);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(dvdRadioButton, bdRadioButton);
        QWidget::setTabOrder(bdRadioButton, audioCDRadioButton);
        QWidget::setTabOrder(audioCDRadioButton, vcdRadioButton);
        QWidget::setTabOrder(vcdRadioButton, dvdsimple);
        QWidget::setTabOrder(dvdsimple, deviceCombo);
        QWidget::setTabOrder(deviceCombo, ejectButton);
        QWidget::setTabOrder(ejectButton, browseDiscButton);
        QWidget::setTabOrder(browseDiscButton, titleSpin);
        QWidget::setTabOrder(titleSpin, chapterSpin);
        QWidget::setTabOrder(chapterSpin, audioSpin);
        QWidget::setTabOrder(audioSpin, subtitlesSpin);

        retranslateUi(OpenDisk);

        QMetaObject::connectSlotsByName(OpenDisk);
    } // setupUi

    void retranslateUi(QWidget *OpenDisk)
    {
        OpenDisk->setWindowTitle(Q_("Form", Q_NULLPTR));
        diskGroupBox->setTitle(Q_("Disc Selection", Q_NULLPTR));
        dvdRadioButton->setText(Q_("DVD", Q_NULLPTR));
        bdRadioButton->setText(Q_("Blu-ray", Q_NULLPTR));
        audioCDRadioButton->setText(Q_("Audio CD", Q_NULLPTR));
        vcdRadioButton->setText(Q_("SVCD/VCD", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dvdsimple->setToolTip(Q_("Disable Disc Menus", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        dvdsimple->setText(Q_("No disc menus", Q_NULLPTR));
        deviceLabel->setText(Q_("Disc device", Q_NULLPTR));
        browseDiscButton->setText(Q_("Browse...", Q_NULLPTR));
        diskOptionBox->setTitle(Q_("Starting Position", Q_NULLPTR));
        titleLabel->setText(Q_("Title", Q_NULLPTR));
        chapterLabel->setText(Q_("Chapter", Q_NULLPTR));
        diskOptionBox_2->setTitle(Q_("Audio and Subtitles", Q_NULLPTR));
        audioLabel->setText(Q_("Audio track", Q_NULLPTR));
        subtitlesLabel->setText(Q_("Subtitle track", Q_NULLPTR));
        subtitlesSpin->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class OpenDisk: public Ui_OpenDisk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_DISK_H
