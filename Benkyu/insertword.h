#ifndef INSERTWORD_H
#define INSERTWORD_H

#include <QDialog>

namespace Ui {
class insertword;
}

class insertword : public QDialog
{
    Q_OBJECT

public:
    explicit insertword(QWidget *parent = nullptr);
    ~insertword();

private:
    Ui::insertword *ui;
};

#endif // INSERTWORD_H
