#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H
class login;

#include <QDialog>

namespace Ui {
class Transactions;
}

class Transactions : public QDialog
{
    Q_OBJECT

public:
    explicit Transactions(QWidget *parent = nullptr);
    ~Transactions();
    void setName(QString n);
    void setAcc(QString n);
    void setWords();

private slots:
    void on_DepositBut_clicked();

    void on_ClearBut_clicked();

    void on_WithdrawBut_clicked();

    void on_BackBut_clicked();

    void on_ShowBut_clicked();

    void on_HideBut_clicked();

private:
    QString name;
    QString Acc;
    Ui::Transactions *ui;
    login*L1;
    float Bal=0;
    float Am=0;
    QString History;
};

#endif // TRANSACTIONS_H
