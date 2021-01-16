#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'podcast_configuration.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PODCAST_CONFIGURATION_H
#define PODCAST_CONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PodcastConfiguration
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *podcastList;
    QLabel *label2;
    QLineEdit *podcastURL;
    QPushButton *podcastAdd;
    QPushButton *podcastDelete;
    QDialogButtonBox *okCancel;

    void setupUi(QWidget *PodcastConfiguration)
    {
        if (PodcastConfiguration->objectName().isEmpty())
            PodcastConfiguration->setObjectName(QStringLiteral("PodcastConfiguration"));
        PodcastConfiguration->resize(547, 330);
        gridLayout = new QGridLayout(PodcastConfiguration);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PodcastConfiguration);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        podcastList = new QListWidget(PodcastConfiguration);
        podcastList->setObjectName(QStringLiteral("podcastList"));
        podcastList->setDragEnabled(true);
        podcastList->setDragDropMode(QAbstractItemView::InternalMove);
        podcastList->setAlternatingRowColors(true);

        gridLayout->addWidget(podcastList, 1, 0, 1, 4);

        label2 = new QLabel(PodcastConfiguration);
        label2->setObjectName(QStringLiteral("label2"));

        gridLayout->addWidget(label2, 2, 0, 1, 1);

        podcastURL = new QLineEdit(PodcastConfiguration);
        podcastURL->setObjectName(QStringLiteral("podcastURL"));

        gridLayout->addWidget(podcastURL, 2, 1, 1, 1);

        podcastAdd = new QPushButton(PodcastConfiguration);
        podcastAdd->setObjectName(QStringLiteral("podcastAdd"));
        const QIcon icon = QIcon(QString::fromUtf8(":/toolbar/play_b.svg"));
        podcastAdd->setIcon(icon);

        gridLayout->addWidget(podcastAdd, 2, 2, 1, 1);

        podcastDelete = new QPushButton(PodcastConfiguration);
        podcastDelete->setObjectName(QStringLiteral("podcastDelete"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/toolbar/clear.svg"));
        podcastDelete->setIcon(icon1);

        gridLayout->addWidget(podcastDelete, 2, 3, 1, 1);

        okCancel = new QDialogButtonBox(PodcastConfiguration);
        okCancel->setObjectName(QStringLiteral("okCancel"));
        okCancel->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout->addWidget(okCancel, 3, 2, 1, 2);


        retranslateUi(PodcastConfiguration);
        QObject::connect(okCancel, SIGNAL(accepted()), PodcastConfiguration, SLOT(accept()));
        QObject::connect(okCancel, SIGNAL(rejected()), PodcastConfiguration, SLOT(reject()));

        QMetaObject::connectSlotsByName(PodcastConfiguration);
    } // setupUi

    void retranslateUi(QWidget *PodcastConfiguration)
    {
        PodcastConfiguration->setWindowTitle(Q_("Dialog", Q_NULLPTR));
        label->setText(Q_("Podcast URLs list", Q_NULLPTR));
        label2->setText(Q_("URL", Q_NULLPTR));
        podcastAdd->setText(Q_("Add", Q_NULLPTR));
        podcastDelete->setText(Q_("Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PodcastConfiguration: public Ui_PodcastConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PODCAST_CONFIGURATION_H
