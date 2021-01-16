#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'video_effects.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VIDEO_EFFECTS_H
#define VIDEO_EFFECTS_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "util/customwidgets.hpp"

QT_BEGIN_NAMESPACE

class Ui_ExtVideoWidget
{
public:
    QWidget *tab;
    QGridLayout *gridLayout_8;
    QGroupBox *adjustEnable;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QSlider *hueSlider;
    QLabel *label_3;
    QSlider *brightnessSlider;
    QCheckBox *brightnessThresholdCheck;
    QLabel *label_2;
    QSlider *contrastSlider;
    QLabel *label_4;
    QSlider *saturationSlider;
    QLabel *label_5;
    QSlider *gammaSlider;
    QGroupBox *sharpenEnable;
    QGridLayout *gridLayout;
    QLabel *label_29;
    QSlider *sharpenSigmaSlider;
    QGroupBox *gradfunEnable;
    QGridLayout *gridLayout_2;
    QLabel *label_32;
    QSlider *gradfunRadiusSlider;
    QGroupBox *grainEnable;
    QGridLayout *gridLayout_4;
    QLabel *label_50;
    QSlider *grainVarianceSlider;
    QWidget *tab_3;
    QGridLayout *gridLayout_11;
    QLabel *label_10;
    QSpinBox *cropTopPx;
    QLabel *label_11;
    QSpacerItem *spacerItem;
    QLabel *label_12;
    QLabel *label_7;
    QSpinBox *cropBotPx;
    QCheckBox *topBotCropSync;
    QCheckBox *leftRightCropSync;
    QSpinBox *cropLeftPx;
    QSpinBox *cropRightPx;
    QWidget *tab_2;
    QGridLayout *gridLayout_10;
    QGroupBox *extractEnable;
    QGridLayout *gridLayout1;
    QLabel *label_6;
    QLineEdit *extractComponentText;
    QCheckBox *invertEnable;
    QCheckBox *posterizeEnable;
    QGroupBox *gradientEnable;
    QGridLayout *gridLayout_9;
    QLabel *label_25;
    QComboBox *gradientModeCombo;
    QCheckBox *gradientTypeCheck;
    QCheckBox *gradientCartoonCheck;
    QGroupBox *colorthresEnable;
    QGridLayout *gridLayout_19;
    QLabel *label_8;
    QLineEdit *colorthresColorText;
    QLabel *label_13;
    QSlider *colorthresSaturationthresSlider;
    QLabel *label_14;
    QSlider *colorthresSimilaritythresSlider;
    QGroupBox *sepiaEnable;
    QHBoxLayout *horizontalLayout;
    QLabel *label_18;
    QSpinBox *sepiaIntensitySpin;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_13;
    QCheckBox *magnifyEnable;
    QGroupBox *wallEnable;
    QGridLayout *_5;
    QLabel *label_31;
    QLabel *label_30;
    QSpinBox *wallColsSpin;
    QSpinBox *wallRowsSpin;
    QGroupBox *transformEnable;
    QGridLayout *_4;
    QComboBox *transformTypeCombo;
    QGroupBox *rotateEnable;
    QGridLayout *gridLayout2;
    QLabel *label_28;
    VLCQDial *rotateAngleDial;
    QGroupBox *puzzleEnable;
    QGridLayout *gridLayout_3;
    QLabel *label_27;
    QSpinBox *puzzleRowsSpin;
    QLabel *label_26;
    QSpinBox *puzzleColsSpin;
    QWidget *tab_8;
    QGridLayout *gridLayout_5;
    QGroupBox *logoEnable;
    QGridLayout *gridLayout_1;
    QLabel *label_19;
    QLineEdit *logoFileText;
    QToolButton *logoBrowseBtn;
    QLabel *label_20;
    QSpinBox *logoYSpin;
    QLabel *label_21;
    QSpinBox *logoXSpin;
    QSlider *logoOpacitySlider;
    QLabel *label_49;
    QLabel *label_22;
    QLabel *label_48;
    QFrame *line;
    QGroupBox *marqEnable;
    QGridLayout *_2;
    QLabel *label_24;
    QLabel *label_23;
    QLineEdit *marqMarqueeText;
    QComboBox *marqPositionCombo;
    QGroupBox *eraseEnable;
    QGridLayout *gridLayout3;
    QLabel *label_16;
    QLabel *label_17;
    QSpinBox *eraseXSpin;
    QSpinBox *eraseYSpin;
    QLineEdit *eraseMaskText;
    QLabel *label_15;
    QToolButton *eraseBrowseBtn;
    QSpacerItem *verticalSpacer;
    QWidget *tab_9;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QCheckBox *anaglyphEnable;
    QCheckBox *mirrorEnable;
    QCheckBox *psychedelicEnable;
    QCheckBox *waveEnable;
    QCheckBox *rippleEnable;
    QCheckBox *motiondetectEnable;
    QGroupBox *gaussianblurEnable;
    QGridLayout *gridLayout_17;
    QLabel *label_35;
    QSlider *gaussianblurSigmaSlider;
    QGroupBox *motionblurEnable;
    QGridLayout *gridLayout_16;
    QLabel *label_34;
    QSlider *blurFactorSlider;
    QGroupBox *antiflickerEnable;
    QGridLayout *gridLayout_18;
    QLabel *label_36;
    QSlider *antiflickerSofteningSizeSlider;
    QGroupBox *hqdn3dEnable;
    QGridLayout *gridLayout_12;
    QLabel *label_44;
    QSlider *hqdn3dLumaSpatSlider;
    QLabel *label_45;
    QSlider *hqdn3dLumaTempSlider;
    QLabel *label_46;
    QSlider *hqdn3dChromaSpatSlider;
    QLabel *label_47;
    QSlider *hqdn3dChromaTempSlider;
    QGroupBox *cloneEnable;
    QGridLayout *gridLayout_0;
    QLabel *label_9;
    QSpinBox *cloneCountSpin;

    void setupUi(QTabWidget *ExtVideoWidget)
    {
        if (ExtVideoWidget->objectName().isEmpty())
            ExtVideoWidget->setObjectName(QStringLiteral("ExtVideoWidget"));
        ExtVideoWidget->resize(654, 345);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_8 = new QGridLayout(tab);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        adjustEnable = new QGroupBox(tab);
        adjustEnable->setObjectName(QStringLiteral("adjustEnable"));
        adjustEnable->setEnabled(true);
        adjustEnable->setCheckable(true);
        adjustEnable->setChecked(false);
        gridLayout_6 = new QGridLayout(adjustEnable);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label = new QLabel(adjustEnable);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        hueSlider = new QSlider(adjustEnable);
        hueSlider->setObjectName(QStringLiteral("hueSlider"));
        hueSlider->setMinimum(-180);
        hueSlider->setMaximum(180);
        hueSlider->setOrientation(Qt::Horizontal);
        hueSlider->setTickPosition(QSlider::TicksBelow);
        hueSlider->setTickInterval(1);

        gridLayout_6->addWidget(hueSlider, 0, 1, 1, 1);

        label_3 = new QLabel(adjustEnable);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_6->addWidget(label_3, 1, 0, 1, 1);

        brightnessSlider = new QSlider(adjustEnable);
        brightnessSlider->setObjectName(QStringLiteral("brightnessSlider"));
        brightnessSlider->setMaximum(200);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setTickPosition(QSlider::TicksBelow);
        brightnessSlider->setTickInterval(100);

        gridLayout_6->addWidget(brightnessSlider, 1, 1, 1, 1);

        brightnessThresholdCheck = new QCheckBox(adjustEnable);
        brightnessThresholdCheck->setObjectName(QStringLiteral("brightnessThresholdCheck"));
        QFont font;
        font.setPointSize(8);
        brightnessThresholdCheck->setFont(font);

        gridLayout_6->addWidget(brightnessThresholdCheck, 2, 1, 1, 1);

        label_2 = new QLabel(adjustEnable);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_6->addWidget(label_2, 3, 0, 1, 1);

        contrastSlider = new QSlider(adjustEnable);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        contrastSlider->setMaximum(200);
        contrastSlider->setOrientation(Qt::Horizontal);
        contrastSlider->setTickPosition(QSlider::TicksBelow);
        contrastSlider->setTickInterval(100);

        gridLayout_6->addWidget(contrastSlider, 3, 1, 1, 1);

        label_4 = new QLabel(adjustEnable);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 4, 0, 1, 1);

        saturationSlider = new QSlider(adjustEnable);
        saturationSlider->setObjectName(QStringLiteral("saturationSlider"));
        saturationSlider->setMaximum(300);
        saturationSlider->setOrientation(Qt::Horizontal);
        saturationSlider->setTickPosition(QSlider::TicksBelow);
        saturationSlider->setTickInterval(100);

        gridLayout_6->addWidget(saturationSlider, 4, 1, 1, 1);

        label_5 = new QLabel(adjustEnable);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 5, 0, 1, 1);

        gammaSlider = new QSlider(adjustEnable);
        gammaSlider->setObjectName(QStringLiteral("gammaSlider"));
        gammaSlider->setMaximum(1000);
        gammaSlider->setOrientation(Qt::Horizontal);
        gammaSlider->setTickPosition(QSlider::TicksBelow);
        gammaSlider->setTickInterval(100);

        gridLayout_6->addWidget(gammaSlider, 5, 1, 1, 1);


        gridLayout_8->addWidget(adjustEnable, 0, 0, 3, 1);

        sharpenEnable = new QGroupBox(tab);
        sharpenEnable->setObjectName(QStringLiteral("sharpenEnable"));
        sharpenEnable->setCheckable(true);
        sharpenEnable->setChecked(false);
        gridLayout = new QGridLayout(sharpenEnable);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_29 = new QLabel(sharpenEnable);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout->addWidget(label_29, 0, 0, 1, 1);

        sharpenSigmaSlider = new QSlider(sharpenEnable);
        sharpenSigmaSlider->setObjectName(QStringLiteral("sharpenSigmaSlider"));
        sharpenSigmaSlider->setMaximum(200);
        sharpenSigmaSlider->setPageStep(10);
        sharpenSigmaSlider->setOrientation(Qt::Horizontal);
        sharpenSigmaSlider->setTickPosition(QSlider::TicksBelow);
        sharpenSigmaSlider->setTickInterval(50);

        gridLayout->addWidget(sharpenSigmaSlider, 0, 1, 1, 1);


        gridLayout_8->addWidget(sharpenEnable, 0, 1, 1, 1);

        gradfunEnable = new QGroupBox(tab);
        gradfunEnable->setObjectName(QStringLiteral("gradfunEnable"));
        gradfunEnable->setCheckable(true);
        gradfunEnable->setChecked(false);
        gridLayout_2 = new QGridLayout(gradfunEnable);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_32 = new QLabel(gradfunEnable);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_2->addWidget(label_32, 0, 0, 1, 1);

        gradfunRadiusSlider = new QSlider(gradfunEnable);
        gradfunRadiusSlider->setObjectName(QStringLiteral("gradfunRadiusSlider"));
        gradfunRadiusSlider->setMinimum(4);
        gradfunRadiusSlider->setMaximum(32);
        gradfunRadiusSlider->setPageStep(4);
        gradfunRadiusSlider->setOrientation(Qt::Horizontal);
        gradfunRadiusSlider->setTickPosition(QSlider::TicksBelow);
        gradfunRadiusSlider->setTickInterval(4);

        gridLayout_2->addWidget(gradfunRadiusSlider, 0, 1, 1, 1);


        gridLayout_8->addWidget(gradfunEnable, 1, 1, 1, 1);

        grainEnable = new QGroupBox(tab);
        grainEnable->setObjectName(QStringLiteral("grainEnable"));
        grainEnable->setCheckable(true);
        grainEnable->setChecked(false);
        gridLayout_4 = new QGridLayout(grainEnable);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_50 = new QLabel(grainEnable);
        label_50->setObjectName(QStringLiteral("label_50"));

        gridLayout_4->addWidget(label_50, 0, 0, 1, 1);

        grainVarianceSlider = new QSlider(grainEnable);
        grainVarianceSlider->setObjectName(QStringLiteral("grainVarianceSlider"));
        grainVarianceSlider->setMinimum(0);
        grainVarianceSlider->setMaximum(40);
        grainVarianceSlider->setPageStep(4);
        grainVarianceSlider->setOrientation(Qt::Horizontal);
        grainVarianceSlider->setTickPosition(QSlider::TicksBelow);
        grainVarianceSlider->setTickInterval(4);

        gridLayout_4->addWidget(grainVarianceSlider, 0, 1, 1, 1);


        gridLayout_8->addWidget(grainEnable, 2, 1, 1, 1);

        ExtVideoWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_11 = new QGridLayout(tab_3);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_11->addWidget(label_10, 0, 2, 1, 1);

        cropTopPx = new QSpinBox(tab_3);
        cropTopPx->setObjectName(QStringLiteral("cropTopPx"));
        cropTopPx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cropTopPx->setMaximum(4095);

        gridLayout_11->addWidget(cropTopPx, 0, 3, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_11->addWidget(label_11, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_11->addItem(spacerItem, 1, 3, 1, 1);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_11->addWidget(label_12, 1, 4, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_11->addWidget(label_7, 3, 2, 1, 1);

        cropBotPx = new QSpinBox(tab_3);
        cropBotPx->setObjectName(QStringLiteral("cropBotPx"));
        cropBotPx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cropBotPx->setMaximum(4095);

        gridLayout_11->addWidget(cropBotPx, 3, 3, 1, 1);

        topBotCropSync = new QCheckBox(tab_3);
        topBotCropSync->setObjectName(QStringLiteral("topBotCropSync"));

        gridLayout_11->addWidget(topBotCropSync, 4, 0, 1, 4);

        leftRightCropSync = new QCheckBox(tab_3);
        leftRightCropSync->setObjectName(QStringLiteral("leftRightCropSync"));

        gridLayout_11->addWidget(leftRightCropSync, 5, 0, 1, 4);

        cropLeftPx = new QSpinBox(tab_3);
        cropLeftPx->setObjectName(QStringLiteral("cropLeftPx"));
        cropLeftPx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cropLeftPx->setMaximum(4095);

        gridLayout_11->addWidget(cropLeftPx, 1, 1, 1, 1);

        cropRightPx = new QSpinBox(tab_3);
        cropRightPx->setObjectName(QStringLiteral("cropRightPx"));
        cropRightPx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cropRightPx->setMaximum(4095);

        gridLayout_11->addWidget(cropRightPx, 1, 5, 1, 1);

        ExtVideoWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_10 = new QGridLayout(tab_2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        extractEnable = new QGroupBox(tab_2);
        extractEnable->setObjectName(QStringLiteral("extractEnable"));
        extractEnable->setCheckable(true);
        extractEnable->setChecked(false);
        gridLayout1 = new QGridLayout(extractEnable);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_6 = new QLabel(extractEnable);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label_6, 0, 0, 1, 1);

        extractComponentText = new QLineEdit(extractEnable);
        extractComponentText->setObjectName(QStringLiteral("extractComponentText"));
        extractComponentText->setMaximumSize(QSize(140, 16777215));
        extractComponentText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(extractComponentText, 0, 1, 1, 1);


        gridLayout_10->addWidget(extractEnable, 0, 0, 3, 1);

        invertEnable = new QCheckBox(tab_2);
        invertEnable->setObjectName(QStringLiteral("invertEnable"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(invertEnable->sizePolicy().hasHeightForWidth());
        invertEnable->setSizePolicy(sizePolicy1);

        gridLayout_10->addWidget(invertEnable, 0, 2, 1, 1);

        posterizeEnable = new QCheckBox(tab_2);
        posterizeEnable->setObjectName(QStringLiteral("posterizeEnable"));

        gridLayout_10->addWidget(posterizeEnable, 1, 2, 1, 1);

        gradientEnable = new QGroupBox(tab_2);
        gradientEnable->setObjectName(QStringLiteral("gradientEnable"));
        sizePolicy.setHeightForWidth(gradientEnable->sizePolicy().hasHeightForWidth());
        gradientEnable->setSizePolicy(sizePolicy);
        gradientEnable->setCheckable(true);
        gradientEnable->setChecked(false);
        gridLayout_9 = new QGridLayout(gradientEnable);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_25 = new QLabel(gradientEnable);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_9->addWidget(label_25, 0, 0, 1, 1);

        gradientModeCombo = new QComboBox(gradientEnable);
        gradientModeCombo->setObjectName(QStringLiteral("gradientModeCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gradientModeCombo->sizePolicy().hasHeightForWidth());
        gradientModeCombo->setSizePolicy(sizePolicy2);

        gridLayout_9->addWidget(gradientModeCombo, 0, 1, 1, 2);

        gradientTypeCheck = new QCheckBox(gradientEnable);
        gradientTypeCheck->setObjectName(QStringLiteral("gradientTypeCheck"));

        gridLayout_9->addWidget(gradientTypeCheck, 1, 0, 1, 2);

        gradientCartoonCheck = new QCheckBox(gradientEnable);
        gradientCartoonCheck->setObjectName(QStringLiteral("gradientCartoonCheck"));

        gridLayout_9->addWidget(gradientCartoonCheck, 1, 2, 1, 1);


        gridLayout_10->addWidget(gradientEnable, 2, 2, 2, 1);

        colorthresEnable = new QGroupBox(tab_2);
        colorthresEnable->setObjectName(QStringLiteral("colorthresEnable"));
        colorthresEnable->setCheckable(true);
        colorthresEnable->setChecked(false);
        gridLayout_19 = new QGridLayout(colorthresEnable);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        label_8 = new QLabel(colorthresEnable);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_19->addWidget(label_8, 0, 0, 1, 1);

        colorthresColorText = new QLineEdit(colorthresEnable);
        colorthresColorText->setObjectName(QStringLiteral("colorthresColorText"));
        colorthresColorText->setMaximumSize(QSize(140, 16777215));
        colorthresColorText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_19->addWidget(colorthresColorText, 0, 1, 1, 1);

        label_13 = new QLabel(colorthresEnable);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_19->addWidget(label_13, 1, 0, 1, 1);

        colorthresSaturationthresSlider = new QSlider(colorthresEnable);
        colorthresSaturationthresSlider->setObjectName(QStringLiteral("colorthresSaturationthresSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(colorthresSaturationthresSlider->sizePolicy().hasHeightForWidth());
        colorthresSaturationthresSlider->setSizePolicy(sizePolicy3);
        colorthresSaturationthresSlider->setOrientation(Qt::Horizontal);

        gridLayout_19->addWidget(colorthresSaturationthresSlider, 1, 1, 1, 1);

        label_14 = new QLabel(colorthresEnable);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_19->addWidget(label_14, 2, 0, 1, 1);

        colorthresSimilaritythresSlider = new QSlider(colorthresEnable);
        colorthresSimilaritythresSlider->setObjectName(QStringLiteral("colorthresSimilaritythresSlider"));
        sizePolicy2.setHeightForWidth(colorthresSimilaritythresSlider->sizePolicy().hasHeightForWidth());
        colorthresSimilaritythresSlider->setSizePolicy(sizePolicy2);
        colorthresSimilaritythresSlider->setOrientation(Qt::Horizontal);

        gridLayout_19->addWidget(colorthresSimilaritythresSlider, 2, 1, 1, 1);


        gridLayout_10->addWidget(colorthresEnable, 3, 0, 2, 1);

        sepiaEnable = new QGroupBox(tab_2);
        sepiaEnable->setObjectName(QStringLiteral("sepiaEnable"));
        sepiaEnable->setCheckable(true);
        sepiaEnable->setChecked(false);
        horizontalLayout = new QHBoxLayout(sepiaEnable);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_18 = new QLabel(sepiaEnable);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout->addWidget(label_18);

        sepiaIntensitySpin = new QSpinBox(sepiaEnable);
        sepiaIntensitySpin->setObjectName(QStringLiteral("sepiaIntensitySpin"));
        sepiaIntensitySpin->setMaximum(255);
        sepiaIntensitySpin->setValue(30);

        horizontalLayout->addWidget(sepiaIntensitySpin);


        gridLayout_10->addWidget(sepiaEnable, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_3, 5, 2, 1, 1);

        ExtVideoWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_13 = new QGridLayout(tab_5);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        magnifyEnable = new QCheckBox(tab_5);
        magnifyEnable->setObjectName(QStringLiteral("magnifyEnable"));

        gridLayout_13->addWidget(magnifyEnable, 0, 0, 1, 1);

        wallEnable = new QGroupBox(tab_5);
        wallEnable->setObjectName(QStringLiteral("wallEnable"));
        wallEnable->setCheckable(true);
        wallEnable->setChecked(false);
        _5 = new QGridLayout(wallEnable);
        _5->setObjectName(QStringLiteral("_5"));
        label_31 = new QLabel(wallEnable);
        label_31->setObjectName(QStringLiteral("label_31"));

        _5->addWidget(label_31, 0, 0, 1, 1);

        label_30 = new QLabel(wallEnable);
        label_30->setObjectName(QStringLiteral("label_30"));

        _5->addWidget(label_30, 1, 0, 1, 1);

        wallColsSpin = new QSpinBox(wallEnable);
        wallColsSpin->setObjectName(QStringLiteral("wallColsSpin"));
        wallColsSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        wallColsSpin->setMinimum(1);
        wallColsSpin->setValue(3);

        _5->addWidget(wallColsSpin, 1, 1, 1, 1);

        wallRowsSpin = new QSpinBox(wallEnable);
        wallRowsSpin->setObjectName(QStringLiteral("wallRowsSpin"));
        wallRowsSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        wallRowsSpin->setMinimum(1);
        wallRowsSpin->setValue(3);

        _5->addWidget(wallRowsSpin, 0, 1, 1, 1);


        gridLayout_13->addWidget(wallEnable, 0, 1, 3, 1);

        transformEnable = new QGroupBox(tab_5);
        transformEnable->setObjectName(QStringLiteral("transformEnable"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(transformEnable->sizePolicy().hasHeightForWidth());
        transformEnable->setSizePolicy(sizePolicy4);
        transformEnable->setCheckable(true);
        transformEnable->setChecked(false);
        _4 = new QGridLayout(transformEnable);
        _4->setObjectName(QStringLiteral("_4"));
        transformTypeCombo = new QComboBox(transformEnable);
        transformTypeCombo->setObjectName(QStringLiteral("transformTypeCombo"));

        _4->addWidget(transformTypeCombo, 0, 0, 1, 1);


        gridLayout_13->addWidget(transformEnable, 1, 0, 1, 1);

        rotateEnable = new QGroupBox(tab_5);
        rotateEnable->setObjectName(QStringLiteral("rotateEnable"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(rotateEnable->sizePolicy().hasHeightForWidth());
        rotateEnable->setSizePolicy(sizePolicy5);
        rotateEnable->setCheckable(true);
        rotateEnable->setChecked(false);
        gridLayout2 = new QGridLayout(rotateEnable);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        label_28 = new QLabel(rotateEnable);
        label_28->setObjectName(QStringLiteral("label_28"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy6);

        gridLayout2->addWidget(label_28, 1, 0, 1, 1);

        rotateAngleDial = new VLCQDial(rotateEnable);
        rotateAngleDial->setObjectName(QStringLiteral("rotateAngleDial"));
        sizePolicy5.setHeightForWidth(rotateAngleDial->sizePolicy().hasHeightForWidth());
        rotateAngleDial->setSizePolicy(sizePolicy5);
        rotateAngleDial->setMaximum(359);
        rotateAngleDial->setValue(180);
        rotateAngleDial->setSliderPosition(180);

        gridLayout2->addWidget(rotateAngleDial, 1, 1, 1, 1);


        gridLayout_13->addWidget(rotateEnable, 2, 0, 2, 1);

        puzzleEnable = new QGroupBox(tab_5);
        puzzleEnable->setObjectName(QStringLiteral("puzzleEnable"));
        puzzleEnable->setCheckable(true);
        puzzleEnable->setChecked(false);
        gridLayout_3 = new QGridLayout(puzzleEnable);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_27 = new QLabel(puzzleEnable);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_3->addWidget(label_27, 0, 0, 1, 1);

        puzzleRowsSpin = new QSpinBox(puzzleEnable);
        puzzleRowsSpin->setObjectName(QStringLiteral("puzzleRowsSpin"));
        puzzleRowsSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        puzzleRowsSpin->setMinimum(2);
        puzzleRowsSpin->setMaximum(16);
        puzzleRowsSpin->setValue(4);

        gridLayout_3->addWidget(puzzleRowsSpin, 0, 1, 1, 1);

        label_26 = new QLabel(puzzleEnable);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_3->addWidget(label_26, 1, 0, 1, 1);

        puzzleColsSpin = new QSpinBox(puzzleEnable);
        puzzleColsSpin->setObjectName(QStringLiteral("puzzleColsSpin"));
        puzzleColsSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        puzzleColsSpin->setMinimum(2);
        puzzleColsSpin->setMaximum(16);
        puzzleColsSpin->setValue(4);

        gridLayout_3->addWidget(puzzleColsSpin, 1, 1, 1, 1);


        gridLayout_13->addWidget(puzzleEnable, 3, 1, 1, 1);

        ExtVideoWidget->addTab(tab_5, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        gridLayout_5 = new QGridLayout(tab_8);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        logoEnable = new QGroupBox(tab_8);
        logoEnable->setObjectName(QStringLiteral("logoEnable"));
        logoEnable->setCheckable(true);
        logoEnable->setChecked(false);
        gridLayout_1 = new QGridLayout(logoEnable);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        label_19 = new QLabel(logoEnable);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(50, 0));

        gridLayout_1->addWidget(label_19, 0, 0, 1, 1);

        logoFileText = new QLineEdit(logoEnable);
        logoFileText->setObjectName(QStringLiteral("logoFileText"));

        gridLayout_1->addWidget(logoFileText, 0, 1, 1, 3);

        logoBrowseBtn = new QToolButton(logoEnable);
        logoBrowseBtn->setObjectName(QStringLiteral("logoBrowseBtn"));

        gridLayout_1->addWidget(logoBrowseBtn, 0, 4, 1, 1);

        label_20 = new QLabel(logoEnable);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(50, 0));

        gridLayout_1->addWidget(label_20, 1, 0, 1, 1);

        logoYSpin = new QSpinBox(logoEnable);
        logoYSpin->setObjectName(QStringLiteral("logoYSpin"));
        logoYSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        logoYSpin->setMaximum(4096);

        gridLayout_1->addWidget(logoYSpin, 1, 1, 1, 2);

        label_21 = new QLabel(logoEnable);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(50, 0));

        gridLayout_1->addWidget(label_21, 2, 0, 1, 1);

        logoXSpin = new QSpinBox(logoEnable);
        logoXSpin->setObjectName(QStringLiteral("logoXSpin"));
        logoXSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        logoXSpin->setMaximum(4096);

        gridLayout_1->addWidget(logoXSpin, 2, 1, 1, 2);

        logoOpacitySlider = new QSlider(logoEnable);
        logoOpacitySlider->setObjectName(QStringLiteral("logoOpacitySlider"));
        logoOpacitySlider->setMaximum(255);
        logoOpacitySlider->setOrientation(Qt::Horizontal);
        logoOpacitySlider->setTickPosition(QSlider::TicksBelow);
        logoOpacitySlider->setTickInterval(32);

        gridLayout_1->addWidget(logoOpacitySlider, 5, 0, 1, 5);

        label_49 = new QLabel(logoEnable);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setFont(font);
        label_49->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_1->addWidget(label_49, 6, 4, 1, 1);

        label_22 = new QLabel(logoEnable);
        label_22->setObjectName(QStringLiteral("label_22"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy7);
        label_22->setMinimumSize(QSize(50, 0));

        gridLayout_1->addWidget(label_22, 4, 0, 1, 3);

        label_48 = new QLabel(logoEnable);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setFont(font);
        label_48->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_1->addWidget(label_48, 6, 0, 1, 1);

        line = new QFrame(logoEnable);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_1->addWidget(line, 3, 0, 1, 5);


        gridLayout_5->addWidget(logoEnable, 0, 0, 4, 1);

        marqEnable = new QGroupBox(tab_8);
        marqEnable->setObjectName(QStringLiteral("marqEnable"));
        sizePolicy7.setHeightForWidth(marqEnable->sizePolicy().hasHeightForWidth());
        marqEnable->setSizePolicy(sizePolicy7);
        marqEnable->setCheckable(true);
        marqEnable->setChecked(false);
        _2 = new QGridLayout(marqEnable);
        _2->setObjectName(QStringLiteral("_2"));
        label_24 = new QLabel(marqEnable);
        label_24->setObjectName(QStringLiteral("label_24"));

        _2->addWidget(label_24, 1, 0, 1, 1);

        label_23 = new QLabel(marqEnable);
        label_23->setObjectName(QStringLiteral("label_23"));

        _2->addWidget(label_23, 0, 0, 1, 1);

        marqMarqueeText = new QLineEdit(marqEnable);
        marqMarqueeText->setObjectName(QStringLiteral("marqMarqueeText"));

        _2->addWidget(marqMarqueeText, 0, 1, 1, 1);

        marqPositionCombo = new QComboBox(marqEnable);
        marqPositionCombo->setObjectName(QStringLiteral("marqPositionCombo"));

        _2->addWidget(marqPositionCombo, 1, 1, 1, 1);


        gridLayout_5->addWidget(marqEnable, 1, 1, 3, 1);

        eraseEnable = new QGroupBox(tab_8);
        eraseEnable->setObjectName(QStringLiteral("eraseEnable"));
        eraseEnable->setCheckable(true);
        eraseEnable->setChecked(false);
        gridLayout3 = new QGridLayout(eraseEnable);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        label_16 = new QLabel(eraseEnable);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(50, 0));

        gridLayout3->addWidget(label_16, 2, 0, 1, 1);

        label_17 = new QLabel(eraseEnable);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(50, 0));

        gridLayout3->addWidget(label_17, 3, 0, 1, 1);

        eraseXSpin = new QSpinBox(eraseEnable);
        eraseXSpin->setObjectName(QStringLiteral("eraseXSpin"));
        eraseXSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        eraseXSpin->setMaximum(4096);

        gridLayout3->addWidget(eraseXSpin, 3, 1, 1, 1);

        eraseYSpin = new QSpinBox(eraseEnable);
        eraseYSpin->setObjectName(QStringLiteral("eraseYSpin"));
        eraseYSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        eraseYSpin->setMaximum(4096);

        gridLayout3->addWidget(eraseYSpin, 2, 1, 1, 1);

        eraseMaskText = new QLineEdit(eraseEnable);
        eraseMaskText->setObjectName(QStringLiteral("eraseMaskText"));

        gridLayout3->addWidget(eraseMaskText, 0, 1, 1, 2);

        label_15 = new QLabel(eraseEnable);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(50, 0));

        gridLayout3->addWidget(label_15, 0, 0, 1, 1);

        eraseBrowseBtn = new QToolButton(eraseEnable);
        eraseBrowseBtn->setObjectName(QStringLiteral("eraseBrowseBtn"));

        gridLayout3->addWidget(eraseBrowseBtn, 0, 3, 1, 1);


        gridLayout_5->addWidget(eraseEnable, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 4, 1, 1, 1);

        ExtVideoWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        gridLayout_7 = new QGridLayout(tab_9);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        anaglyphEnable = new QCheckBox(tab_9);
        anaglyphEnable->setObjectName(QStringLiteral("anaglyphEnable"));

        verticalLayout->addWidget(anaglyphEnable);

        mirrorEnable = new QCheckBox(tab_9);
        mirrorEnable->setObjectName(QStringLiteral("mirrorEnable"));

        verticalLayout->addWidget(mirrorEnable);

        psychedelicEnable = new QCheckBox(tab_9);
        psychedelicEnable->setObjectName(QStringLiteral("psychedelicEnable"));

        verticalLayout->addWidget(psychedelicEnable);

        waveEnable = new QCheckBox(tab_9);
        waveEnable->setObjectName(QStringLiteral("waveEnable"));

        verticalLayout->addWidget(waveEnable);

        rippleEnable = new QCheckBox(tab_9);
        rippleEnable->setObjectName(QStringLiteral("rippleEnable"));

        verticalLayout->addWidget(rippleEnable);

        motiondetectEnable = new QCheckBox(tab_9);
        motiondetectEnable->setObjectName(QStringLiteral("motiondetectEnable"));

        verticalLayout->addWidget(motiondetectEnable);


        gridLayout_7->addLayout(verticalLayout, 2, 1, 2, 1);

        gaussianblurEnable = new QGroupBox(tab_9);
        gaussianblurEnable->setObjectName(QStringLiteral("gaussianblurEnable"));
        gaussianblurEnable->setCheckable(true);
        gaussianblurEnable->setChecked(false);
        gridLayout_17 = new QGridLayout(gaussianblurEnable);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        label_35 = new QLabel(gaussianblurEnable);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_17->addWidget(label_35, 0, 0, 1, 1);

        gaussianblurSigmaSlider = new QSlider(gaussianblurEnable);
        gaussianblurSigmaSlider->setObjectName(QStringLiteral("gaussianblurSigmaSlider"));
        gaussianblurSigmaSlider->setMinimum(1);
        gaussianblurSigmaSlider->setMaximum(127);
        gaussianblurSigmaSlider->setValue(80);
        gaussianblurSigmaSlider->setOrientation(Qt::Horizontal);
        gaussianblurSigmaSlider->setTickPosition(QSlider::TicksBelow);
        gaussianblurSigmaSlider->setTickInterval(16);

        gridLayout_17->addWidget(gaussianblurSigmaSlider, 0, 1, 1, 1);


        gridLayout_7->addWidget(gaussianblurEnable, 2, 0, 1, 1);

        motionblurEnable = new QGroupBox(tab_9);
        motionblurEnable->setObjectName(QStringLiteral("motionblurEnable"));
        motionblurEnable->setCheckable(true);
        motionblurEnable->setChecked(false);
        gridLayout_16 = new QGridLayout(motionblurEnable);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_34 = new QLabel(motionblurEnable);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_16->addWidget(label_34, 0, 0, 1, 1);

        blurFactorSlider = new QSlider(motionblurEnable);
        blurFactorSlider->setObjectName(QStringLiteral("blurFactorSlider"));
        blurFactorSlider->setMinimum(1);
        blurFactorSlider->setMaximum(127);
        blurFactorSlider->setValue(80);
        blurFactorSlider->setOrientation(Qt::Horizontal);
        blurFactorSlider->setTickPosition(QSlider::TicksBelow);
        blurFactorSlider->setTickInterval(16);

        gridLayout_16->addWidget(blurFactorSlider, 0, 1, 1, 1);


        gridLayout_7->addWidget(motionblurEnable, 1, 0, 1, 1);

        antiflickerEnable = new QGroupBox(tab_9);
        antiflickerEnable->setObjectName(QStringLiteral("antiflickerEnable"));
        antiflickerEnable->setCheckable(true);
        antiflickerEnable->setChecked(false);
        gridLayout_18 = new QGridLayout(antiflickerEnable);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        label_36 = new QLabel(antiflickerEnable);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_18->addWidget(label_36, 0, 0, 1, 1);

        antiflickerSofteningSizeSlider = new QSlider(antiflickerEnable);
        antiflickerSofteningSizeSlider->setObjectName(QStringLiteral("antiflickerSofteningSizeSlider"));
        antiflickerSofteningSizeSlider->setMinimum(0);
        antiflickerSofteningSizeSlider->setMaximum(100);
        antiflickerSofteningSizeSlider->setValue(80);
        antiflickerSofteningSizeSlider->setOrientation(Qt::Horizontal);
        antiflickerSofteningSizeSlider->setTickPosition(QSlider::TicksBelow);
        antiflickerSofteningSizeSlider->setTickInterval(16);

        gridLayout_18->addWidget(antiflickerSofteningSizeSlider, 0, 1, 1, 1);


        gridLayout_7->addWidget(antiflickerEnable, 0, 0, 1, 1);

        hqdn3dEnable = new QGroupBox(tab_9);
        hqdn3dEnable->setObjectName(QStringLiteral("hqdn3dEnable"));
        hqdn3dEnable->setCheckable(true);
        hqdn3dEnable->setChecked(false);
        gridLayout_12 = new QGridLayout(hqdn3dEnable);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_44 = new QLabel(hqdn3dEnable);
        label_44->setObjectName(QStringLiteral("label_44"));

        gridLayout_12->addWidget(label_44, 0, 0, 1, 1);

        hqdn3dLumaSpatSlider = new QSlider(hqdn3dEnable);
        hqdn3dLumaSpatSlider->setObjectName(QStringLiteral("hqdn3dLumaSpatSlider"));
        hqdn3dLumaSpatSlider->setMinimum(1);
        hqdn3dLumaSpatSlider->setMaximum(127);
        hqdn3dLumaSpatSlider->setValue(80);
        hqdn3dLumaSpatSlider->setOrientation(Qt::Horizontal);
        hqdn3dLumaSpatSlider->setTickPosition(QSlider::TicksBelow);
        hqdn3dLumaSpatSlider->setTickInterval(16);

        gridLayout_12->addWidget(hqdn3dLumaSpatSlider, 0, 1, 1, 2);

        label_45 = new QLabel(hqdn3dEnable);
        label_45->setObjectName(QStringLiteral("label_45"));

        gridLayout_12->addWidget(label_45, 1, 0, 1, 2);

        hqdn3dLumaTempSlider = new QSlider(hqdn3dEnable);
        hqdn3dLumaTempSlider->setObjectName(QStringLiteral("hqdn3dLumaTempSlider"));
        hqdn3dLumaTempSlider->setMinimum(1);
        hqdn3dLumaTempSlider->setMaximum(127);
        hqdn3dLumaTempSlider->setValue(80);
        hqdn3dLumaTempSlider->setOrientation(Qt::Horizontal);
        hqdn3dLumaTempSlider->setTickPosition(QSlider::TicksBelow);
        hqdn3dLumaTempSlider->setTickInterval(16);

        gridLayout_12->addWidget(hqdn3dLumaTempSlider, 1, 2, 1, 1);

        label_46 = new QLabel(hqdn3dEnable);
        label_46->setObjectName(QStringLiteral("label_46"));

        gridLayout_12->addWidget(label_46, 2, 0, 1, 2);

        hqdn3dChromaSpatSlider = new QSlider(hqdn3dEnable);
        hqdn3dChromaSpatSlider->setObjectName(QStringLiteral("hqdn3dChromaSpatSlider"));
        hqdn3dChromaSpatSlider->setMinimum(1);
        hqdn3dChromaSpatSlider->setMaximum(127);
        hqdn3dChromaSpatSlider->setValue(80);
        hqdn3dChromaSpatSlider->setOrientation(Qt::Horizontal);
        hqdn3dChromaSpatSlider->setTickPosition(QSlider::TicksBelow);
        hqdn3dChromaSpatSlider->setTickInterval(16);

        gridLayout_12->addWidget(hqdn3dChromaSpatSlider, 2, 2, 1, 1);

        label_47 = new QLabel(hqdn3dEnable);
        label_47->setObjectName(QStringLiteral("label_47"));

        gridLayout_12->addWidget(label_47, 3, 0, 1, 1);

        hqdn3dChromaTempSlider = new QSlider(hqdn3dEnable);
        hqdn3dChromaTempSlider->setObjectName(QStringLiteral("hqdn3dChromaTempSlider"));
        hqdn3dChromaTempSlider->setMinimum(1);
        hqdn3dChromaTempSlider->setMaximum(127);
        hqdn3dChromaTempSlider->setValue(80);
        hqdn3dChromaTempSlider->setOrientation(Qt::Horizontal);
        hqdn3dChromaTempSlider->setTickPosition(QSlider::TicksBelow);
        hqdn3dChromaTempSlider->setTickInterval(16);

        gridLayout_12->addWidget(hqdn3dChromaTempSlider, 3, 2, 1, 1);


        gridLayout_7->addWidget(hqdn3dEnable, 0, 1, 2, 1);

        cloneEnable = new QGroupBox(tab_9);
        cloneEnable->setObjectName(QStringLiteral("cloneEnable"));
        sizePolicy.setHeightForWidth(cloneEnable->sizePolicy().hasHeightForWidth());
        cloneEnable->setSizePolicy(sizePolicy);
        cloneEnable->setCheckable(true);
        cloneEnable->setChecked(false);
        gridLayout_0 = new QGridLayout(cloneEnable);
        gridLayout_0->setObjectName(QStringLiteral("gridLayout_0"));
        label_9 = new QLabel(cloneEnable);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_0->addWidget(label_9, 0, 0, 1, 1);

        cloneCountSpin = new QSpinBox(cloneEnable);
        cloneCountSpin->setObjectName(QStringLiteral("cloneCountSpin"));
        cloneCountSpin->setMinimum(1);
        cloneCountSpin->setValue(2);

        gridLayout_0->addWidget(cloneCountSpin, 0, 1, 1, 1);


        gridLayout_7->addWidget(cloneEnable, 3, 0, 1, 1);

        ExtVideoWidget->addTab(tab_9, QString());
#ifndef QT_NO_SHORTCUT
        label->setBuddy(hueSlider);
        label_3->setBuddy(brightnessSlider);
        label_2->setBuddy(contrastSlider);
        label_4->setBuddy(saturationSlider);
        label_5->setBuddy(gammaSlider);
        label_29->setBuddy(sharpenSigmaSlider);
        label_32->setBuddy(gradfunRadiusSlider);
        label_50->setBuddy(grainVarianceSlider);
        label_10->setBuddy(cropTopPx);
        label_11->setBuddy(cropLeftPx);
        label_12->setBuddy(cropRightPx);
        label_7->setBuddy(cropBotPx);
        label_6->setBuddy(extractComponentText);
        label_8->setBuddy(colorthresColorText);
        label_13->setBuddy(colorthresSaturationthresSlider);
        label_14->setBuddy(colorthresSimilaritythresSlider);
        label_31->setBuddy(wallRowsSpin);
        label_30->setBuddy(wallColsSpin);
        label_28->setBuddy(rotateAngleDial);
        label_27->setBuddy(puzzleRowsSpin);
        label_26->setBuddy(puzzleColsSpin);
        label_19->setBuddy(logoFileText);
        label_20->setBuddy(logoYSpin);
        label_21->setBuddy(logoXSpin);
        label_49->setBuddy(logoOpacitySlider);
        label_22->setBuddy(logoOpacitySlider);
        label_48->setBuddy(logoOpacitySlider);
        label_24->setBuddy(marqPositionCombo);
        label_23->setBuddy(marqMarqueeText);
        label_16->setBuddy(eraseYSpin);
        label_17->setBuddy(eraseXSpin);
        label_15->setBuddy(eraseMaskText);
        label_35->setBuddy(blurFactorSlider);
        label_34->setBuddy(blurFactorSlider);
        label_36->setBuddy(blurFactorSlider);
        label_44->setBuddy(blurFactorSlider);
        label_45->setBuddy(blurFactorSlider);
        label_46->setBuddy(blurFactorSlider);
        label_47->setBuddy(blurFactorSlider);
        label_9->setBuddy(cloneCountSpin);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(adjustEnable, hueSlider);
        QWidget::setTabOrder(hueSlider, brightnessSlider);
        QWidget::setTabOrder(brightnessSlider, brightnessThresholdCheck);
        QWidget::setTabOrder(brightnessThresholdCheck, contrastSlider);
        QWidget::setTabOrder(contrastSlider, saturationSlider);
        QWidget::setTabOrder(saturationSlider, gammaSlider);
        QWidget::setTabOrder(gammaSlider, sharpenEnable);
        QWidget::setTabOrder(sharpenEnable, sharpenSigmaSlider);
        QWidget::setTabOrder(sharpenSigmaSlider, gradfunEnable);
        QWidget::setTabOrder(gradfunEnable, gradfunRadiusSlider);
        QWidget::setTabOrder(gradfunRadiusSlider, grainEnable);
        QWidget::setTabOrder(grainEnable, grainVarianceSlider);
        QWidget::setTabOrder(grainVarianceSlider, cropTopPx);
        QWidget::setTabOrder(cropTopPx, cropBotPx);
        QWidget::setTabOrder(cropBotPx, topBotCropSync);
        QWidget::setTabOrder(topBotCropSync, leftRightCropSync);
        QWidget::setTabOrder(leftRightCropSync, rotateEnable);
        QWidget::setTabOrder(rotateEnable, rotateAngleDial);
        QWidget::setTabOrder(rotateAngleDial, transformTypeCombo);
        QWidget::setTabOrder(transformTypeCombo, puzzleRowsSpin);
        QWidget::setTabOrder(puzzleRowsSpin, puzzleColsSpin);
        QWidget::setTabOrder(puzzleColsSpin, colorthresEnable);
        QWidget::setTabOrder(colorthresEnable, colorthresColorText);
        QWidget::setTabOrder(colorthresColorText, colorthresSaturationthresSlider);
        QWidget::setTabOrder(colorthresSaturationthresSlider, colorthresSimilaritythresSlider);
        QWidget::setTabOrder(colorthresSimilaritythresSlider, extractComponentText);
        QWidget::setTabOrder(extractComponentText, gradientModeCombo);
        QWidget::setTabOrder(gradientModeCombo, sepiaIntensitySpin);
        QWidget::setTabOrder(sepiaIntensitySpin, cloneCountSpin);
        QWidget::setTabOrder(cloneCountSpin, logoEnable);
        QWidget::setTabOrder(logoEnable, logoFileText);
        QWidget::setTabOrder(logoFileText, logoYSpin);
        QWidget::setTabOrder(logoYSpin, logoXSpin);
        QWidget::setTabOrder(logoXSpin, logoOpacitySlider);
        QWidget::setTabOrder(logoOpacitySlider, eraseMaskText);
        QWidget::setTabOrder(eraseMaskText, eraseYSpin);
        QWidget::setTabOrder(eraseYSpin, eraseXSpin);

        retranslateUi(ExtVideoWidget);

        ExtVideoWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExtVideoWidget);
    } // setupUi

    void retranslateUi(QTabWidget *ExtVideoWidget)
    {
        adjustEnable->setTitle(Q_("Image adjust", Q_NULLPTR));
        label->setText(Q_("Hue", Q_NULLPTR));
        label_3->setText(Q_("Brightness", Q_NULLPTR));
        brightnessThresholdCheck->setText(Q_("Brightness Threshold", Q_NULLPTR));
        label_2->setText(Q_("Contrast", Q_NULLPTR));
        label_4->setText(Q_("Saturation", Q_NULLPTR));
        label_5->setText(Q_("Gamma", Q_NULLPTR));
        sharpenEnable->setTitle(Q_("Sharpen", Q_NULLPTR));
        label_29->setText(Q_("Sigma", Q_NULLPTR));
        gradfunEnable->setTitle(Q_("Banding removal", Q_NULLPTR));
        label_32->setText(Q_("Radius", Q_NULLPTR));
        grainEnable->setTitle(Q_("Film Grain", Q_NULLPTR));
        label_50->setText(Q_("Variance", Q_NULLPTR));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab), Q_("Essential", Q_NULLPTR));
        label_10->setText(Q_("Top", Q_NULLPTR));
        cropTopPx->setSuffix(Q_(" px", Q_NULLPTR));
        label_11->setText(Q_("Left", Q_NULLPTR));
        label_12->setText(Q_("Right", Q_NULLPTR));
        label_7->setText(Q_("Bottom", Q_NULLPTR));
        cropBotPx->setSuffix(Q_(" px", Q_NULLPTR));
        topBotCropSync->setText(Q_("Synchronize top and bottom", Q_NULLPTR));
        leftRightCropSync->setText(Q_("Synchronize left and right", Q_NULLPTR));
        cropLeftPx->setSuffix(Q_(" px", Q_NULLPTR));
        cropRightPx->setSuffix(Q_(" px", Q_NULLPTR));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_3), Q_("Crop", Q_NULLPTR));
        extractEnable->setTitle(Q_("Color extraction", Q_NULLPTR));
        label_6->setText(Q_("Color", Q_NULLPTR));
        extractComponentText->setInputMask(Q_(">HHHHHH;#", Q_NULLPTR));
        invertEnable->setText(Q_("Negate colors", Q_NULLPTR));
        posterizeEnable->setText(Q_("Posterize", Q_NULLPTR));
        gradientEnable->setTitle(Q_("Gradient", Q_NULLPTR));
        label_25->setText(Q_("Mode", Q_NULLPTR));
        gradientTypeCheck->setText(Q_("Color", Q_NULLPTR));
        gradientCartoonCheck->setText(Q_("Cartoon", Q_NULLPTR));
        colorthresEnable->setTitle(Q_("Color threshold", Q_NULLPTR));
        label_8->setText(Q_("Color", Q_NULLPTR));
        colorthresColorText->setInputMask(Q_(">HHHHHH;#", Q_NULLPTR));
        label_13->setText(Q_("Saturation", Q_NULLPTR));
        label_14->setText(Q_("Similarity", Q_NULLPTR));
        sepiaEnable->setTitle(Q_("Sepia", Q_NULLPTR));
        label_18->setText(Q_("Intensity", Q_NULLPTR));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_2), Q_("Colors", Q_NULLPTR));
        magnifyEnable->setText(Q_("Interactive Zoom", Q_NULLPTR));
        wallEnable->setTitle(Q_("Wall", Q_NULLPTR));
        label_31->setText(Q_("Rows", Q_NULLPTR));
        label_30->setText(Q_("Columns", Q_NULLPTR));
        transformEnable->setTitle(Q_("Transform", Q_NULLPTR));
        rotateEnable->setTitle(Q_("Rotate", Q_NULLPTR));
        label_28->setText(Q_("Angle", Q_NULLPTR));
        puzzleEnable->setTitle(Q_("Puzzle game", Q_NULLPTR));
        label_27->setText(Q_("Rows", Q_NULLPTR));
        label_26->setText(Q_("Columns", Q_NULLPTR));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_5), Q_("Geometry", Q_NULLPTR));
        logoEnable->setTitle(Q_("Add logo", Q_NULLPTR));
        label_19->setText(Q_("Logo", Q_NULLPTR));
        logoBrowseBtn->setText(Q_("...", Q_NULLPTR));
        label_20->setText(Q_("Top", Q_NULLPTR));
        logoYSpin->setSuffix(Q_(" px", Q_NULLPTR));
        label_21->setText(Q_("Left", Q_NULLPTR));
        logoXSpin->setSuffix(Q_(" px", Q_NULLPTR));
        label_49->setText(Q_("full", Q_NULLPTR));
        label_22->setText(Q_("Opacity", Q_NULLPTR));
        label_48->setText(Q_("none", Q_NULLPTR));
        marqEnable->setTitle(Q_("Add text", Q_NULLPTR));
        label_24->setText(Q_("Position", Q_NULLPTR));
        label_23->setText(Q_("Text", Q_NULLPTR));
        eraseEnable->setTitle(Q_("Logo erase", Q_NULLPTR));
        label_16->setText(Q_("Top", Q_NULLPTR));
        label_17->setText(Q_("Left", Q_NULLPTR));
        eraseXSpin->setSuffix(Q_(" px", Q_NULLPTR));
        eraseYSpin->setSuffix(Q_(" px", Q_NULLPTR));
        label_15->setText(Q_("Mask", Q_NULLPTR));
        eraseBrowseBtn->setText(Q_("...", Q_NULLPTR));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_8), Q_("Overlay", Q_NULLPTR));
        anaglyphEnable->setText(Q_("Anaglyph 3D", Q_NULLPTR));
        mirrorEnable->setText(Q_("Mirror", Q_NULLPTR));
        psychedelicEnable->setText(Q_("Psychedelic", Q_NULLPTR));
        waveEnable->setText(Q_("Waves", Q_NULLPTR));
        rippleEnable->setText(Q_("Water effect", Q_NULLPTR));
        motiondetectEnable->setText(Q_("Motion detect", Q_NULLPTR));
        gaussianblurEnable->setTitle(Q_("Spatial blur", Q_NULLPTR));
        label_35->setText(Q_("Sigma", Q_NULLPTR));
        motionblurEnable->setTitle(Q_("Motion blur", Q_NULLPTR));
        label_34->setText(Q_("Factor", Q_NULLPTR));
        antiflickerEnable->setTitle(Q_("Anti-Flickering", Q_NULLPTR));
        label_36->setText(Q_("Soften", Q_NULLPTR));
        hqdn3dEnable->setTitle(Q_("Denoiser", Q_NULLPTR));
        label_44->setText(Q_("Spatial luma strength", Q_NULLPTR));
        label_45->setText(Q_("Temporal luma strength", Q_NULLPTR));
        label_46->setText(Q_("Spatial chroma strength", Q_NULLPTR));
        label_47->setText(Q_("Temporal chroma strength", Q_NULLPTR));
        cloneEnable->setTitle(Q_("Clone", Q_NULLPTR));
        label_9->setText(Q_("Number of clones", Q_NULLPTR));
        ExtVideoWidget->setTabText(ExtVideoWidget->indexOf(tab_9), Q_("Advanced", Q_NULLPTR));
        Q_UNUSED(ExtVideoWidget);
    } // retranslateUi

};

namespace Ui {
    class ExtVideoWidget: public Ui_ExtVideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VIDEO_EFFECTS_H
