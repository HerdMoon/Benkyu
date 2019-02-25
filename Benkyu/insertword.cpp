#include "insertword.h"
#include "ui_insertword.h"

insertword::insertword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insertword)
{
    ui->setupUi(this);
}

insertword::~insertword()
{
    delete ui;
}
