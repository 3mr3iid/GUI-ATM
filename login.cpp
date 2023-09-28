#include "login.h"
#include "ui_login.h"
#include"transactions.h"
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}



void login::on_login_2_clicked()
{
    Name=ui->Nametext->text();
    Acc=ui->accnum->text();
    T1 = new Transactions;
    T1->setName(Name);
    T1->setAcc(Acc);
    T1->setWords();
    T1->show();
    this->close();
}

