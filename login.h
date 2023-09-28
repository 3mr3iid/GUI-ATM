#ifndef LOGIN_H
#define LOGIN_H
class Transactions;

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_2_clicked();

private:
    Ui::login *ui;
    QString Name;
    QString Acc;
    Transactions *T1;
};
#endif // LOGIN_H
