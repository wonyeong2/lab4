#include "calculator.h"
#include "ui_calculator.h"
Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}
Calculator::~Calculator()
{
    delete ui;
}
void Calculator::on_btn_1_clicked()
{
    addNumber("1");
}
void Calculator::on_btn_2_clicked()
{
    addNumber("2");
}
void Calculator::on_btn_3_clicked()
{
    addNumber("3");
}
void Calculator::on_btn_4_clicked()
{
    addNumber("4");
}
void Calculator::on_btn_5_clicked()
{
    addNumber("5");
}
void Calculator::on_btn_6_clicked()
{
    addNumber("6");
}
void Calculator::on_btn_7_clicked()
{
    addNumber("7");
}
void Calculator::on_btn_8_clicked()
{
    addNumber("8");
}
void Calculator::on_btn_9_clicked()
{
    addNumber("9");
}
void Calculator::on_btn_0_clicked()
{
    addNumber("0");
}
void Calculator::on_btn_plus_clicked()
{
    setFirstTerm();
    calType.clear();
    calType.append("plus");
}
void Calculator::on_btn_minus_clicked()
{
    setFirstTerm();
    calType.clear();
    calType.append("minus");
}
void Calculator::on_btn_mult_clicked()
{
    setFirstTerm();
    calType.clear();
    calType.append("mult");
}
void Calculator::on_btn_divide_clicked()
{
    setFirstTerm();
    calType.clear();
    calType.append("divide");
}
void Calculator::on_btn_equal_clicked()
{
    setSecondTerm();
    int result;
    int ft = first_term.toInt();
    int st = second_term.toInt();
    if (!calType.compare("plus")) {
        result = ft + st;
    }
    if (!calType.compare("minus")) {
        result = ft - st;
    }
    if (!calType.compare("mult")) {
        result = ft * st;
    }
    if (!calType.compare("divide")) {
        result = ft / st;
    }
    char buf[256];
    sprintf(buf, "%d", result);
    value.clear();
    value.append(QString(buf));
    ui->te_number->setPlainText(value);
    second_term.clear();
    value.clear();
}
void Calculator::addNumber(QString num)
{
    if (value.size() <10) {
        value.append(num);
        ui->te_number->setPlainText(value);
    }
    ui->te_number->setAlignment(Qt::AlignRight);
}
void Calculator::setFirstTerm()
{
    first_term.clear();
    first_term.append(ui->te_number->toPlainText());
    value.clear();
    ui->te_number->clear();
}
void Calculator::setSecondTerm()
{
    second_term.clear();
    second_term.append(ui->te_number->toPlainText());
    value.clear();
    ui->te_number->clear();
}
void Calculator::on_btn_ac_clicked()
{
    first_term.clear();
    second_term.clear();
    calType.clear();
    value.clear();
    ui->te_number->clear();
}
void Calculator::on_btn_ce_clicked()
{
    if (calType.isEmpty()) {
        first_term.clear();
        value.clear();
        ui->te_number->clear();
    } else {
        second_term.clear();
        value.clear();
        ui->te_number->clear();
    }
}
