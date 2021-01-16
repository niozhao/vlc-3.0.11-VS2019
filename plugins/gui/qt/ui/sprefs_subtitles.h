#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sprefs_subtitles.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPREFS_SUBTITLES_H
#define SPREFS_SUBTITLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsSubtitles
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QCheckBox *OSDBox;
    QCheckBox *OSDTitleBox;
    QComboBox *OSDTitlePos;
    QLabel *OSDTitlePosLabel;
    QCheckBox *spuActiveBox;
    QWidget *spuZone;
    QVBoxLayout *spuZoneLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *subLangLabel;
    QComboBox *encoding;
    QLineEdit *preferredLanguage;
    QLabel *encodLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *fontLabel;
    QLabel *fontSizeLabel;
    QComboBox *fontSize;
    QSpacerItem *horizontalSpacer;
    QLabel *fontColorLabel;
    QPushButton *fontColor;
    QLabel *fontEffectLabel;
    QComboBox *effect;
    QLabel *outlineColorLabel;
    QPushButton *outlineColor;
    QCheckBox *shadowCheck;
    QLabel *subsPosLabel;
    QSpinBox *subsPosition;
    QFontComboBox *font;
    QCheckBox *backgroundCheck;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SPrefsSubtitles)
    {
        if (SPrefsSubtitles->objectName().isEmpty())
            SPrefsSubtitles->setObjectName(QStringLiteral("SPrefsSubtitles"));
        SPrefsSubtitles->resize(741, 416);
        verticalLayout = new QVBoxLayout(SPrefsSubtitles);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(SPrefsSubtitles);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        OSDBox = new QCheckBox(groupBox_3);
        OSDBox->setObjectName(QStringLiteral("OSDBox"));

        gridLayout->addWidget(OSDBox, 0, 0, 1, 1);

        OSDTitleBox = new QCheckBox(groupBox_3);
        OSDTitleBox->setObjectName(QStringLiteral("OSDTitleBox"));

        gridLayout->addWidget(OSDTitleBox, 1, 0, 1, 1);

        OSDTitlePos = new QComboBox(groupBox_3);
        OSDTitlePos->setObjectName(QStringLiteral("OSDTitlePos"));

        gridLayout->addWidget(OSDTitlePos, 1, 2, 1, 1);

        OSDTitlePosLabel = new QLabel(groupBox_3);
        OSDTitlePosLabel->setObjectName(QStringLiteral("OSDTitlePosLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OSDTitlePosLabel->sizePolicy().hasHeightForWidth());
        OSDTitlePosLabel->setSizePolicy(sizePolicy);
        OSDTitlePosLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(OSDTitlePosLabel, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        spuActiveBox = new QCheckBox(SPrefsSubtitles);
        spuActiveBox->setObjectName(QStringLiteral("spuActiveBox"));

        verticalLayout->addWidget(spuActiveBox);

        spuZone = new QWidget(SPrefsSubtitles);
        spuZone->setObjectName(QStringLiteral("spuZone"));
        spuZoneLayout = new QVBoxLayout(spuZone);
        spuZoneLayout->setObjectName(QStringLiteral("spuZoneLayout"));
        spuZoneLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(spuZone);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        subLangLabel = new QLabel(groupBox_2);
        subLangLabel->setObjectName(QStringLiteral("subLangLabel"));
        subLangLabel->setMinimumSize(QSize(250, 0));

        gridLayout1->addWidget(subLangLabel, 0, 0, 1, 1);

        encoding = new QComboBox(groupBox_2);
        encoding->setObjectName(QStringLiteral("encoding"));
        encoding->setMaxVisibleItems(12);

        gridLayout1->addWidget(encoding, 1, 1, 1, 1);

        preferredLanguage = new QLineEdit(groupBox_2);
        preferredLanguage->setObjectName(QStringLiteral("preferredLanguage"));

        gridLayout1->addWidget(preferredLanguage, 0, 1, 1, 1);

        encodLabel = new QLabel(groupBox_2);
        encodLabel->setObjectName(QStringLiteral("encodLabel"));
        encodLabel->setMinimumSize(QSize(250, 0));

        gridLayout1->addWidget(encodLabel, 1, 0, 1, 1);


        spuZoneLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(spuZone);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        fontLabel = new QLabel(groupBox);
        fontLabel->setObjectName(QStringLiteral("fontLabel"));
        fontLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(fontLabel, 0, 0, 1, 1);

        fontSizeLabel = new QLabel(groupBox);
        fontSizeLabel->setObjectName(QStringLiteral("fontSizeLabel"));
        fontSizeLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(fontSizeLabel, 1, 0, 1, 1);

        fontSize = new QComboBox(groupBox);
        fontSize->setObjectName(QStringLiteral("fontSize"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fontSize->sizePolicy().hasHeightForWidth());
        fontSize->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(fontSize, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        fontColorLabel = new QLabel(groupBox);
        fontColorLabel->setObjectName(QStringLiteral("fontColorLabel"));

        gridLayout_2->addWidget(fontColorLabel, 1, 3, 1, 1);

        fontColor = new QPushButton(groupBox);
        fontColor->setObjectName(QStringLiteral("fontColor"));

        gridLayout_2->addWidget(fontColor, 1, 4, 1, 1);

        fontEffectLabel = new QLabel(groupBox);
        fontEffectLabel->setObjectName(QStringLiteral("fontEffectLabel"));
        fontEffectLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(fontEffectLabel, 2, 0, 1, 1);

        effect = new QComboBox(groupBox);
        effect->setObjectName(QStringLiteral("effect"));
        sizePolicy2.setHeightForWidth(effect->sizePolicy().hasHeightForWidth());
        effect->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(effect, 2, 1, 1, 1);

        outlineColorLabel = new QLabel(groupBox);
        outlineColorLabel->setObjectName(QStringLiteral("outlineColorLabel"));

        gridLayout_2->addWidget(outlineColorLabel, 2, 3, 1, 1);

        outlineColor = new QPushButton(groupBox);
        outlineColor->setObjectName(QStringLiteral("outlineColor"));

        gridLayout_2->addWidget(outlineColor, 2, 4, 1, 1);

        shadowCheck = new QCheckBox(groupBox);
        shadowCheck->setObjectName(QStringLiteral("shadowCheck"));

        gridLayout_2->addWidget(shadowCheck, 3, 0, 1, 1);

        subsPosLabel = new QLabel(groupBox);
        subsPosLabel->setObjectName(QStringLiteral("subsPosLabel"));
        subsPosLabel->setMinimumSize(QSize(250, 0));

        gridLayout_2->addWidget(subsPosLabel, 4, 0, 1, 1);

        subsPosition = new QSpinBox(groupBox);
        subsPosition->setObjectName(QStringLiteral("subsPosition"));
        subsPosition->setMaximumSize(QSize(16777215, 16777215));
        subsPosition->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        subsPosition->setMinimum(-1024);
        subsPosition->setMaximum(1024);

        gridLayout_2->addWidget(subsPosition, 4, 1, 1, 1);

        font = new QFontComboBox(groupBox);
        font->setObjectName(QStringLiteral("font"));

        gridLayout_2->addWidget(font, 0, 1, 1, 4);

        backgroundCheck = new QCheckBox(groupBox);
        backgroundCheck->setObjectName(QStringLiteral("backgroundCheck"));

        gridLayout_2->addWidget(backgroundCheck, 3, 1, 1, 1);


        spuZoneLayout->addWidget(groupBox);


        verticalLayout->addWidget(spuZone);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        OSDTitlePosLabel->setBuddy(OSDTitlePos);
        subLangLabel->setBuddy(preferredLanguage);
        encodLabel->setBuddy(encoding);
        fontLabel->setBuddy(font);
        fontSizeLabel->setBuddy(fontSize);
        fontColorLabel->setBuddy(fontColor);
        fontEffectLabel->setBuddy(effect);
        outlineColorLabel->setBuddy(outlineColor);
        subsPosLabel->setBuddy(subsPosition);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(OSDBox, OSDTitleBox);
        QWidget::setTabOrder(OSDTitleBox, OSDTitlePos);
        QWidget::setTabOrder(OSDTitlePos, preferredLanguage);
        QWidget::setTabOrder(preferredLanguage, encoding);
        QWidget::setTabOrder(encoding, font);
        QWidget::setTabOrder(font, fontSize);
        QWidget::setTabOrder(fontSize, fontColor);
        QWidget::setTabOrder(fontColor, effect);
        QWidget::setTabOrder(effect, outlineColor);
        QWidget::setTabOrder(outlineColor, shadowCheck);
        QWidget::setTabOrder(shadowCheck, subsPosition);

        retranslateUi(SPrefsSubtitles);

        QMetaObject::connectSlotsByName(SPrefsSubtitles);
    } // setupUi

    void retranslateUi(QWidget *SPrefsSubtitles)
    {
        SPrefsSubtitles->setWindowTitle(Q_("Form", Q_NULLPTR));
        groupBox_3->setTitle(Q_("On Screen Display", Q_NULLPTR));
        OSDBox->setText(Q_("Enable On Screen Display (OSD)", Q_NULLPTR));
        OSDTitleBox->setText(Q_("Show media title on video start", Q_NULLPTR));
        OSDTitlePosLabel->setText(Q_("Position", Q_NULLPTR));
        spuActiveBox->setText(Q_("Enable subtitles", Q_NULLPTR));
        groupBox_2->setTitle(Q_("Subtitle Language", Q_NULLPTR));
        subLangLabel->setText(Q_("Preferred subtitle language", Q_NULLPTR));
        encodLabel->setText(Q_("Default encoding", Q_NULLPTR));
        groupBox->setTitle(Q_("Subtitle effects", Q_NULLPTR));
        fontLabel->setText(Q_("Font", Q_NULLPTR));
        fontSizeLabel->setText(Q_("Font size", Q_NULLPTR));
        fontColorLabel->setText(Q_("Font color", Q_NULLPTR));
        fontEffectLabel->setText(Q_("Outline thickness", Q_NULLPTR));
        outlineColorLabel->setText(Q_("Outline color", Q_NULLPTR));
        shadowCheck->setText(Q_("Add a shadow", Q_NULLPTR));
        subsPosLabel->setText(Q_("Force subtitle position", Q_NULLPTR));
        subsPosition->setSuffix(Q_(" px", Q_NULLPTR));
        backgroundCheck->setText(Q_("Add a background", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SPrefsSubtitles: public Ui_SPrefsSubtitles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_SUBTITLES_H
