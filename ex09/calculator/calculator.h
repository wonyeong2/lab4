#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT
public:
    explicit Calculator(QWidget *parent =0);
    ~Calculator();

private slots:
    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();
    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();
    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();
    void on_btn_0_clicked();
    void on_btn_plus_clicked();
    void on_btn_minus_clicked();
    void on_btn_mult_clicked();
    void on_btn_divide_clicked();
    void on_btn_equal_clicked();
    void on_btn_ac_clicked();
    void on_btn_ce_clicked();

private:
    Ui::Calculator *ui;
    QString value;
    QString first_term;
    QString second_term;
    QString calType;
    void addNumber(QString num);
    void setFirstTerm();
    void setSecondTerm();
};

#endif // CALCULATOR_H
