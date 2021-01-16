#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sprefs_audio.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPREFS_AUDIO_H
#define SPREFS_AUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsAudio
{
public:
    QVBoxLayout *verticalLayout_2;
    QCheckBox *enableAudio;
    QWidget *audioZone;
    QVBoxLayout *audioZoneLayout;
    QGroupBox *audioBox;
    QGridLayout *gridLayout;
    QWidget *defaultVolume_zone;
    QHBoxLayout *horizontalLayout;
    QSlider *defaultVolume;
    QSpinBox *volumeValue;
    QCheckBox *resetVolumeCheckbox;
    QGroupBox *outputAudioBox;
    QGridLayout *outputAudioLayout;
    QLabel *outputLabel;
    QComboBox *outputModule;
    QWidget *fileControl;
    QHBoxLayout *hboxLayout;
    QLabel *fileLabel;
    QLineEdit *fileName;
    QPushButton *fileBrowseButton;
    QCheckBox *spdifBox;
    QLabel *mmdevicePassthroughLabel;
    QComboBox *mmdevicePassthroughBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *visuLabel;
    QComboBox *visualisation;
    QCheckBox *autoscaleBox;
    QLabel *replayLabel;
    QComboBox *replayCombo;
    QCheckBox *volNormBox;
    QDoubleSpinBox *volNormSpin;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *langLabel;
    QLineEdit *preferredAudioLanguage;
    QWidget *lastfm_zone;
    QGridLayout *gridLayout_1;
    QLineEdit *lastfm_user_edit;
    QLineEdit *lastfm_pass_edit;
    QLabel *lastfm_pass_label;
    QLabel *lastfm_user_label;
    QCheckBox *lastfm;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SPrefsAudio)
    {
        if (SPrefsAudio->objectName().isEmpty())
            SPrefsAudio->setObjectName(QStringLiteral("SPrefsAudio"));
        SPrefsAudio->resize(707, 626);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SPrefsAudio->sizePolicy().hasHeightForWidth());
        SPrefsAudio->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(SPrefsAudio);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        enableAudio = new QCheckBox(SPrefsAudio);
        enableAudio->setObjectName(QStringLiteral("enableAudio"));
        enableAudio->setChecked(true);

        verticalLayout_2->addWidget(enableAudio);

        audioZone = new QWidget(SPrefsAudio);
        audioZone->setObjectName(QStringLiteral("audioZone"));
        audioZoneLayout = new QVBoxLayout(audioZone);
        audioZoneLayout->setObjectName(QStringLiteral("audioZoneLayout"));
        audioZoneLayout->setContentsMargins(0, 0, 0, 0);
        audioBox = new QGroupBox(audioZone);
        audioBox->setObjectName(QStringLiteral("audioBox"));
        gridLayout = new QGridLayout(audioBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        defaultVolume_zone = new QWidget(audioBox);
        defaultVolume_zone->setObjectName(QStringLiteral("defaultVolume_zone"));
        horizontalLayout = new QHBoxLayout(defaultVolume_zone);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        defaultVolume = new QSlider(defaultVolume_zone);
        defaultVolume->setObjectName(QStringLiteral("defaultVolume"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(defaultVolume->sizePolicy().hasHeightForWidth());
        defaultVolume->setSizePolicy(sizePolicy1);
        defaultVolume->setMinimumSize(QSize(140, 0));
        defaultVolume->setLayoutDirection(Qt::LeftToRight);
        defaultVolume->setMaximum(200);
        defaultVolume->setValue(100);
        defaultVolume->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(defaultVolume);

        volumeValue = new QSpinBox(defaultVolume_zone);
        volumeValue->setObjectName(QStringLiteral("volumeValue"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volumeValue->sizePolicy().hasHeightForWidth());
        volumeValue->setSizePolicy(sizePolicy2);
        volumeValue->setWrapping(false);
        volumeValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        volumeValue->setReadOnly(true);
        volumeValue->setMaximum(200);
        volumeValue->setValue(100);

        horizontalLayout->addWidget(volumeValue);


        gridLayout->addWidget(defaultVolume_zone, 0, 2, 1, 1);

        resetVolumeCheckbox = new QCheckBox(audioBox);
        resetVolumeCheckbox->setObjectName(QStringLiteral("resetVolumeCheckbox"));
        resetVolumeCheckbox->setMinimumSize(QSize(250, 0));
        resetVolumeCheckbox->setChecked(false);

        gridLayout->addWidget(resetVolumeCheckbox, 0, 0, 1, 2);


        audioZoneLayout->addWidget(audioBox);

        outputAudioBox = new QGroupBox(audioZone);
        outputAudioBox->setObjectName(QStringLiteral("outputAudioBox"));
        outputAudioLayout = new QGridLayout(outputAudioBox);
        outputAudioLayout->setObjectName(QStringLiteral("outputAudioLayout"));
        outputAudioLayout->setContentsMargins(-1, -1, -1, 4);
        outputLabel = new QLabel(outputAudioBox);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setMinimumSize(QSize(250, 0));

        outputAudioLayout->addWidget(outputLabel, 0, 0, 1, 1);

        outputModule = new QComboBox(outputAudioBox);
        outputModule->setObjectName(QStringLiteral("outputModule"));
        outputModule->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(outputModule->sizePolicy().hasHeightForWidth());
        outputModule->setSizePolicy(sizePolicy3);

        outputAudioLayout->addWidget(outputModule, 0, 1, 1, 1);

        fileControl = new QWidget(outputAudioBox);
        fileControl->setObjectName(QStringLiteral("fileControl"));
        hboxLayout = new QHBoxLayout(fileControl);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        fileLabel = new QLabel(fileControl);
        fileLabel->setObjectName(QStringLiteral("fileLabel"));
        fileLabel->setMinimumSize(QSize(256, 0));

        hboxLayout->addWidget(fileLabel);

        fileName = new QLineEdit(fileControl);
        fileName->setObjectName(QStringLiteral("fileName"));

        hboxLayout->addWidget(fileName);

        fileBrowseButton = new QPushButton(fileControl);
        fileBrowseButton->setObjectName(QStringLiteral("fileBrowseButton"));

        hboxLayout->addWidget(fileBrowseButton);


        outputAudioLayout->addWidget(fileControl, 1, 0, 1, 2);

        spdifBox = new QCheckBox(outputAudioBox);
        spdifBox->setObjectName(QStringLiteral("spdifBox"));
        sizePolicy2.setHeightForWidth(spdifBox->sizePolicy().hasHeightForWidth());
        spdifBox->setSizePolicy(sizePolicy2);

        outputAudioLayout->addWidget(spdifBox, 3, 1, 1, 1);

        mmdevicePassthroughLabel = new QLabel(outputAudioBox);
        mmdevicePassthroughLabel->setObjectName(QStringLiteral("mmdevicePassthroughLabel"));
        mmdevicePassthroughLabel->setMinimumSize(QSize(250, 0));

        outputAudioLayout->addWidget(mmdevicePassthroughLabel, 4, 0, 1, 1);

        mmdevicePassthroughBox = new QComboBox(outputAudioBox);
        mmdevicePassthroughBox->setObjectName(QStringLiteral("mmdevicePassthroughBox"));
        sizePolicy3.setHeightForWidth(mmdevicePassthroughBox->sizePolicy().hasHeightForWidth());
        mmdevicePassthroughBox->setSizePolicy(sizePolicy3);

        outputAudioLayout->addWidget(mmdevicePassthroughBox, 4, 1, 1, 1);


        audioZoneLayout->addWidget(outputAudioBox);

        groupBox_2 = new QGroupBox(audioZone);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        visuLabel = new QLabel(groupBox_2);
        visuLabel->setObjectName(QStringLiteral("visuLabel"));
        visuLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(visuLabel, 7, 0, 1, 1);

        visualisation = new QComboBox(groupBox_2);
        visualisation->setObjectName(QStringLiteral("visualisation"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(visualisation->sizePolicy().hasHeightForWidth());
        visualisation->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(visualisation, 7, 2, 1, 2);

        autoscaleBox = new QCheckBox(groupBox_2);
        autoscaleBox->setObjectName(QStringLiteral("autoscaleBox"));

        gridLayout_2->addWidget(autoscaleBox, 0, 0, 1, 1);

        replayLabel = new QLabel(groupBox_2);
        replayLabel->setObjectName(QStringLiteral("replayLabel"));
        replayLabel->setMinimumSize(QSize(250, 0));
        replayLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(replayLabel, 5, 0, 1, 1);

        replayCombo = new QComboBox(groupBox_2);
        replayCombo->setObjectName(QStringLiteral("replayCombo"));
        sizePolicy4.setHeightForWidth(replayCombo->sizePolicy().hasHeightForWidth());
        replayCombo->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(replayCombo, 5, 2, 1, 2);

        volNormBox = new QCheckBox(groupBox_2);
        volNormBox->setObjectName(QStringLiteral("volNormBox"));
        sizePolicy4.setHeightForWidth(volNormBox->sizePolicy().hasHeightForWidth());
        volNormBox->setSizePolicy(sizePolicy4);
        volNormBox->setMinimumSize(QSize(250, 0));
        volNormBox->setMaximumSize(QSize(250, 16777215));

        gridLayout_2->addWidget(volNormBox, 4, 0, 1, 1);

        volNormSpin = new QDoubleSpinBox(groupBox_2);
        volNormSpin->setObjectName(QStringLiteral("volNormSpin"));
        volNormSpin->setEnabled(true);
        volNormSpin->setAlignment(Qt::AlignRight);

        gridLayout_2->addWidget(volNormSpin, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 3, 1, 1);

        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 6, 2, 1, 2);


        audioZoneLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(audioZone);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        langLabel = new QLabel(groupBox_3);
        langLabel->setObjectName(QStringLiteral("langLabel"));
        langLabel->setMinimumSize(QSize(250, 0));

        gridLayout_3->addWidget(langLabel, 0, 0, 1, 1);

        preferredAudioLanguage = new QLineEdit(groupBox_3);
        preferredAudioLanguage->setObjectName(QStringLiteral("preferredAudioLanguage"));

        gridLayout_3->addWidget(preferredAudioLanguage, 0, 1, 1, 1);

        lastfm_zone = new QWidget(groupBox_3);
        lastfm_zone->setObjectName(QStringLiteral("lastfm_zone"));
        lastfm_zone->setEnabled(true);
        gridLayout_1 = new QGridLayout(lastfm_zone);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        gridLayout_1->setContentsMargins(0, 0, 0, 0);
        lastfm_user_edit = new QLineEdit(lastfm_zone);
        lastfm_user_edit->setObjectName(QStringLiteral("lastfm_user_edit"));
        sizePolicy4.setHeightForWidth(lastfm_user_edit->sizePolicy().hasHeightForWidth());
        lastfm_user_edit->setSizePolicy(sizePolicy4);

        gridLayout_1->addWidget(lastfm_user_edit, 0, 1, 1, 1);

        lastfm_pass_edit = new QLineEdit(lastfm_zone);
        lastfm_pass_edit->setObjectName(QStringLiteral("lastfm_pass_edit"));
        sizePolicy4.setHeightForWidth(lastfm_pass_edit->sizePolicy().hasHeightForWidth());
        lastfm_pass_edit->setSizePolicy(sizePolicy4);
        lastfm_pass_edit->setEchoMode(QLineEdit::Password);

        gridLayout_1->addWidget(lastfm_pass_edit, 1, 1, 1, 1);

        lastfm_pass_label = new QLabel(lastfm_zone);
        lastfm_pass_label->setObjectName(QStringLiteral("lastfm_pass_label"));
        lastfm_pass_label->setMaximumSize(QSize(250, 16777215));
        lastfm_pass_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_1->addWidget(lastfm_pass_label, 1, 0, 1, 1);

        lastfm_user_label = new QLabel(lastfm_zone);
        lastfm_user_label->setObjectName(QStringLiteral("lastfm_user_label"));
        lastfm_user_label->setMaximumSize(QSize(250, 16777215));
        lastfm_user_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_1->addWidget(lastfm_user_label, 0, 0, 1, 1);


        gridLayout_3->addWidget(lastfm_zone, 2, 0, 1, 2);

        lastfm = new QCheckBox(groupBox_3);
        lastfm->setObjectName(QStringLiteral("lastfm"));

        gridLayout_3->addWidget(lastfm, 1, 0, 1, 2);


        audioZoneLayout->addWidget(groupBox_3);


        verticalLayout_2->addWidget(audioZone);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        outputLabel->setBuddy(outputModule);
        fileLabel->setBuddy(fileName);
        visuLabel->setBuddy(visualisation);
        replayLabel->setBuddy(replayCombo);
        langLabel->setBuddy(preferredAudioLanguage);
        lastfm_pass_label->setBuddy(lastfm_pass_edit);
        lastfm_user_label->setBuddy(lastfm_user_edit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(enableAudio, resetVolumeCheckbox);
        QWidget::setTabOrder(resetVolumeCheckbox, defaultVolume);
        QWidget::setTabOrder(defaultVolume, volumeValue);
        QWidget::setTabOrder(volumeValue, outputModule);
        QWidget::setTabOrder(outputModule, fileName);
        QWidget::setTabOrder(fileName, fileBrowseButton);
        QWidget::setTabOrder(fileBrowseButton, spdifBox);
        QWidget::setTabOrder(spdifBox, mmdevicePassthroughBox);
        QWidget::setTabOrder(mmdevicePassthroughBox, autoscaleBox);
        QWidget::setTabOrder(autoscaleBox, volNormBox);
        QWidget::setTabOrder(volNormBox, volNormSpin);
        QWidget::setTabOrder(volNormSpin, replayCombo);
        QWidget::setTabOrder(replayCombo, visualisation);
        QWidget::setTabOrder(visualisation, preferredAudioLanguage);
        QWidget::setTabOrder(preferredAudioLanguage, lastfm);
        QWidget::setTabOrder(lastfm, lastfm_user_edit);
        QWidget::setTabOrder(lastfm_user_edit, lastfm_pass_edit);

        retranslateUi(SPrefsAudio);

        QMetaObject::connectSlotsByName(SPrefsAudio);
    } // setupUi

    void retranslateUi(QWidget *SPrefsAudio)
    {
        SPrefsAudio->setWindowTitle(Q_("Form", Q_NULLPTR));
        enableAudio->setText(Q_("Enable audio", Q_NULLPTR));
        audioBox->setTitle(Q_("Volume", Q_NULLPTR));
        volumeValue->setSuffix(Q_(" %", Q_NULLPTR));
        resetVolumeCheckbox->setText(Q_("Always reset audio start level to:", Q_NULLPTR));
        outputAudioBox->setTitle(Q_("Output", Q_NULLPTR));
        outputLabel->setText(Q_("Output module:", Q_NULLPTR));
        fileLabel->setText(Q_("Destination file:", Q_NULLPTR));
        fileBrowseButton->setText(Q_("Browse...", Q_NULLPTR));
        spdifBox->setText(Q_("Use S/PDIF when available", Q_NULLPTR));
        mmdevicePassthroughLabel->setText(Q_("HDMI/SPDIF audio passthrough", Q_NULLPTR));
        groupBox_2->setTitle(Q_("Effects", Q_NULLPTR));
        visuLabel->setText(Q_("Visualization:", Q_NULLPTR));
        autoscaleBox->setText(Q_("Enable Time-Stretching audio", Q_NULLPTR));
        replayLabel->setText(Q_("Replay gain mode:", Q_NULLPTR));
        volNormBox->setText(Q_("Normalize volume to:", Q_NULLPTR));
        groupBox_3->setTitle(Q_("Tracks", Q_NULLPTR));
        langLabel->setText(Q_("Preferred audio language:", Q_NULLPTR));
        lastfm_pass_label->setText(Q_("Password:", Q_NULLPTR));
        lastfm_user_label->setText(Q_("Username:", Q_NULLPTR));
        lastfm->setText(Q_("Submit played tracks stats to Last.fm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SPrefsAudio: public Ui_SPrefsAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_AUDIO_H
