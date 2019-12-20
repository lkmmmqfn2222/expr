#ifndef EXPR_H
#define EXPR_H

#include <QMainWindow>
#include <QString>
#include "model.h"

namespace Ui {
class expr;
}

class expr : public QMainWindow
{
    Q_OBJECT

public:
    explicit expr(QWidget *parent = 0);
    ~expr();
private slots:
    void getBtn0();
    void getBtn1();
    void getBtn2();
    void getBtn3();
    void getBtn4();
    void getBtn5();
    void getBtn6();
    void getBtn7();
    void getBtn8();
    void getBtn9();
    void getBtnAdd();
    void getBtnMin();
    void getBtnPlus();
    void getBtnDiv();
    void getBtnEqu();
    void getBtnDele();
    void getBtnExt();

private:
    Ui::expr *ui;
    model model1;
    QString temp;

};

#endif // EXPR_H
