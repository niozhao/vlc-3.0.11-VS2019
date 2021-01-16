#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UPDATE_H
#define UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateWidget
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *updateDialogPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *updateDialogLabel;
    QDialogButtonBox *updateDialogButtonBox;
    QWidget *updateRequestPage;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QWidget *updateNotifyPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *updateNotifyLabel;
    QTextEdit *updateNotifyTextEdit;
    QLabel *label_2;
    QDialogButtonBox *updateNotifyButtonBox;

    void setupUi(QWidget *updateWidget)
    {
        if (updateWidget->objectName().isEmpty())
            updateWidget->setObjectName(QStringLiteral("updateWidget"));
        updateWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(updateWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(updateWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        updateDialogPage = new QWidget();
        updateDialogPage->setObjectName(QStringLiteral("updateDialogPage"));
        verticalLayout_4 = new QVBoxLayout(updateDialogPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        updateDialogLabel = new QLabel(updateDialogPage);
        updateDialogLabel->setObjectName(QStringLiteral("updateDialogLabel"));
        updateDialogLabel->setWordWrap(true);

        verticalLayout_4->addWidget(updateDialogLabel);

        updateDialogButtonBox = new QDialogButtonBox(updateDialogPage);
        updateDialogButtonBox->setObjectName(QStringLiteral("updateDialogButtonBox"));
        updateDialogButtonBox->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout_4->addWidget(updateDialogButtonBox);

        stackedWidget->addWidget(updateDialogPage);
        updateRequestPage = new QWidget();
        updateRequestPage->setObjectName(QStringLiteral("updateRequestPage"));
        verticalLayout_3 = new QVBoxLayout(updateRequestPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label = new QLabel(updateRequestPage);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout_3->addWidget(label);

        progressBar = new QProgressBar(updateRequestPage);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(-1);

        verticalLayout_3->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        stackedWidget->addWidget(updateRequestPage);
        updateNotifyPage = new QWidget();
        updateNotifyPage->setObjectName(QStringLiteral("updateNotifyPage"));
        verticalLayout_2 = new QVBoxLayout(updateNotifyPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        updateNotifyLabel = new QLabel(updateNotifyPage);
        updateNotifyLabel->setObjectName(QStringLiteral("updateNotifyLabel"));
        updateNotifyLabel->setText(QStringLiteral("updateNotifyLabel"));
        updateNotifyLabel->setWordWrap(true);

        verticalLayout_2->addWidget(updateNotifyLabel);

        updateNotifyTextEdit = new QTextEdit(updateNotifyPage);
        updateNotifyTextEdit->setObjectName(QStringLiteral("updateNotifyTextEdit"));
        updateNotifyTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(updateNotifyTextEdit);

        label_2 = new QLabel(updateNotifyPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        updateNotifyButtonBox = new QDialogButtonBox(updateNotifyPage);
        updateNotifyButtonBox->setObjectName(QStringLiteral("updateNotifyButtonBox"));
        updateNotifyButtonBox->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout_2->addWidget(updateNotifyButtonBox);

        stackedWidget->addWidget(updateNotifyPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(updateWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(updateWidget);
    } // setupUi

    void retranslateUi(QWidget *updateWidget)
    {
        updateWidget->setWindowTitle(Q_("VLC media player updates", Q_NULLPTR));
        updateDialogLabel->setText(Q_("Check for VLC updates", Q_NULLPTR));
        label->setText(Q_("Launching an update request...", Q_NULLPTR));
        label_2->setText(Q_("Do you want to download it?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updateWidget: public Ui_updateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UPDATE_H
