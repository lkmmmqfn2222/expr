#include "expr.h"
#include "ui_expr.h"
#include <QString>
#include <QDebug>

expr::expr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::expr)
{
    ui->setupUi(this);
    model1.numb1 = 0;
    model1.numb2 = 0;
    connect(this->ui->btn_exit,SIGNAL(clicked(bool)),this,SLOT(getBtnExt()));
    connect(this->ui->btn_0,SIGNAL(clicked(bool)),this,SLOT(getBtn0()));
    connect(this->ui->btn_1,SIGNAL(clicked(bool)),this,SLOT(getBtn1()));
    connect(this->ui->btn_2,SIGNAL(clicked(bool)),this,SLOT(getBtn2()));
    connect(this->ui->btn_3,SIGNAL(clicked(bool)),this,SLOT(getBtn3()));
    connect(this->ui->btn_4,SIGNAL(clicked(bool)),this,SLOT(getBtn4()));
    connect(this->ui->btn_5,SIGNAL(clicked(bool)),this,SLOT(getBtn5()));
    connect(this->ui->btn_6,SIGNAL(clicked(bool)),this,SLOT(getBtn6()));
    connect(this->ui->btn_7,SIGNAL(clicked(bool)),this,SLOT(getBtn7()));
    connect(this->ui->btn_8,SIGNAL(clicked(bool)),this,SLOT(getBtn8()));
    connect(this->ui->btn_9,SIGNAL(clicked(bool)),this,SLOT(getBtn9()));
    connect(this->ui->btn_add,SIGNAL(clicked(bool)),this,SLOT(getBtnAdd()));
    connect(this->ui->btn_min,SIGNAL(clicked(bool)),this,SLOT(getBtnMin()));
    connect(this->ui->btn_plus,SIGNAL(clicked(bool)),this,SLOT(getBtnPlus()));
    connect(this->ui->btn_div,SIGNAL(clicked(bool)),this,SLOT(getBtnDiv()));
}

expr::~expr()
{
    delete ui;
}

void expr::getBtn0(){
    if(expr::temp != ""){
        expr::temp += QString::number(0,10);
        this->ui->lbl_display->setText(expr::temp);
    }
}

void expr::getBtn1(){
    expr::temp += QString::number(1,10);
    this->ui->lbl_display->setText(expr::temp);
}

void expr::getBtn2(){
    expr::temp += QString::number(2,10);
    this->ui->lbl_display->setText(expr::temp);
}

void expr::getBtn3(){
    expr::temp += QString::number(3,10);
    this->ui->lbl_display->setText(expr::temp);
}

void expr::getBtn4(){
    expr::temp += QString::number(4,10);
    this->ui->lbl_display->setText(expr::temp);

}

void expr:: getBtn5(){
    expr::temp += QString::number(5,10);
    this->ui->lbl_display->setText(expr::temp);
}

void expr::getBtn6(){
    expr::temp += QString::number(6,10);
    this->ui->lbl_display->setText(expr::temp);
}

void expr::getBtn7(){
    expr::temp += QString::number(7,10);
    this->ui->lbl_display->setText(expr::temp);
}

void expr::getBtn8(){
    expr::temp += QString::number(8,10);
    this->ui->lbl_display->setText(expr::temp);
}

void expr::getBtn9(){
    expr::temp += QString::number(9,10);
    this->ui->lbl_display->setText(expr::temp);
}

void expr::getBtnAdd(){
    bool ok;
    expr::model1.numb2 = expr::model1.numb1;
    expr::model1.numb1 =  expr::temp.toInt(&ok,10);
    this->ui->lbl_display->setText( expr::model1.doExpr());
}

void expr::getBtnMin(){

}

void expr::getBtnPlus(){

}

void expr::getBtnDiv(){

}

void expr::getBtnEqu(){

}

void expr::getBtnDele(){

}
void expr::getBtnExt(){
    this->close();
}
