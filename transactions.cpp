#include "transactions.h"
#include "ui_transactions.h"
#include"login.h"

Transactions::Transactions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Transactions)
{
    ui->setupUi(this);

}

Transactions::~Transactions()
{
    delete ui;
}

void Transactions::setName(QString n)
{
    name = n;
}

void Transactions:: setAcc(QString n)
{
    Acc = n;
}

void Transactions:: setWords()
{
     ui->WelcomeLabel->setText(ui->WelcomeLabel->text()+name);
      ui->AccLabel->setText(ui->AccLabel->text()+Acc);
       ui->BalLabel->setText(ui->BalLabel->text()+QString::number(Bal));
       History = "Transaction History:\n";
}

void Transactions::on_DepositBut_clicked()
{
    Am=ui->AmountField->text().toFloat();
    Bal+=Am;
    ui->BalLabel->setText("Current Balance: "+QString::number(Bal));
    ui->statusL->setText("Deposit Completed");
    History=History+"+"+ui->AmountField->text()+'\n';
}


void Transactions::on_ClearBut_clicked()
{
    ui->AmountField->setText("");
}


void Transactions::on_WithdrawBut_clicked()
{
    Am=ui->AmountField->text().toFloat();

    if(Am<=Bal)
    {
        Bal -= Am;
        ui->BalLabel->setText("Current Balance: "+QString::number(Bal));
        ui->statusL->setText("Withdrawal Completed");
        History=History+"-"+ui->AmountField->text()+'\n';
    }
    else
        ui->statusL->setText("Not Enough Funds");
}


void Transactions::on_BackBut_clicked()
{
    L1= new login;
    L1->show();
    this->close();
}


void Transactions::on_ShowBut_clicked()
{
    ui->label_5->setText(History);
}


void Transactions::on_HideBut_clicked()
{
    ui->label_5->setText("");
}

