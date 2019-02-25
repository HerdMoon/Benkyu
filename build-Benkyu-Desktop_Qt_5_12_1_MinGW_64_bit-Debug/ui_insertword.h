/********************************************************************************
** Form generated from reading UI file 'insertword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTWORD_H
#define UI_INSERTWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_insertword
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *NameEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *PronEdit;
    QLabel *label_3;
    QLineEdit *SyntaxEdit;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_4;
    QLineEdit *SourceEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *TypeEdit;

    void setupUi(QDialog *insertword)
    {
        if (insertword->objectName().isEmpty())
            insertword->setObjectName(QString::fromUtf8("insertword"));
        insertword->resize(777, 546);
        buttonBox = new QDialogButtonBox(insertword);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(80, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        NameEdit = new QLineEdit(insertword);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        NameEdit->setGeometry(QRect(170, 30, 133, 20));
        label = new QLabel(insertword);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 47, 13));
        label_2 = new QLabel(insertword);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 70, 47, 13));
        PronEdit = new QLineEdit(insertword);
        PronEdit->setObjectName(QString::fromUtf8("PronEdit"));
        PronEdit->setGeometry(QRect(170, 70, 133, 20));
        label_3 = new QLabel(insertword);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 110, 47, 13));
        SyntaxEdit = new QLineEdit(insertword);
        SyntaxEdit->setObjectName(QString::fromUtf8("SyntaxEdit"));
        SyntaxEdit->setGeometry(QRect(170, 110, 133, 20));
        plainTextEdit = new QPlainTextEdit(insertword);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(170, 230, 241, 121));
        label_4 = new QLabel(insertword);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 150, 47, 13));
        SourceEdit = new QLineEdit(insertword);
        SourceEdit->setObjectName(QString::fromUtf8("SourceEdit"));
        SourceEdit->setGeometry(QRect(170, 150, 133, 20));
        label_5 = new QLabel(insertword);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 240, 47, 13));
        label_6 = new QLabel(insertword);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 150, 161, 16));
        label_7 = new QLabel(insertword);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 190, 47, 13));
        TypeEdit = new QLineEdit(insertword);
        TypeEdit->setObjectName(QString::fromUtf8("TypeEdit"));
        TypeEdit->setGeometry(QRect(170, 190, 133, 20));

        retranslateUi(insertword);
        QObject::connect(buttonBox, SIGNAL(accepted()), insertword, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), insertword, SLOT(reject()));

        QMetaObject::connectSlotsByName(insertword);
    } // setupUi

    void retranslateUi(QDialog *insertword)
    {
        insertword->setWindowTitle(QApplication::translate("insertword", "Dialog", nullptr));
        label->setText(QApplication::translate("insertword", "\344\271\246\345\206\231\344\275\223", nullptr));
        label_2->setText(QApplication::translate("insertword", "\346\263\250\351\237\263", nullptr));
        label_3->setText(QApplication::translate("insertword", "\351\207\212\344\271\211", nullptr));
        label_4->setText(QApplication::translate("insertword", "\346\235\245\346\272\220", nullptr));
        label_5->setText(QApplication::translate("insertword", "\351\231\204\346\263\250", nullptr));
        label_6->setText(QApplication::translate("insertword", "\346\226\260\346\240\207\346\227\245:XB,\345\244\247\345\256\266\347\232\204\346\227\245\346\234\254\350\257\255:DJ", nullptr));
        label_7->setText(QApplication::translate("insertword", "\350\257\215\346\200\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insertword: public Ui_insertword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTWORD_H
