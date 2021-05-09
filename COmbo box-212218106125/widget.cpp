#include "widget.h"
#include "ui_widget.h"
#include "QDebug"
#include "QIcon"
#include "QStringList"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
        QStringList list;
        list <<"Fruits"<<"Mango"<<"Apple"<<"Orange"<<"Pineapple"<<"Papaya"<<"JackFruit";
        ui->comboBox->setStyleSheet("background-color: rgb(192,192,192) ; color: rgb(0, 0, 0);");
        ui->comboBox->setEditable(true);
        for(int i=0;i<list.size();i++)
        {
        ui->comboBox->addItem(QIcon("C:/Users/laksh/OneDrive/Documents/6thsem/C++/QComboBoxproject/icons.jpg"),list.at(i));
        }
}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_capture_clicked()
{
    qDebug()<<"You Choose: "<<ui->comboBox->currentText();
        qDebug()<<"\nThe index is "<<QString::number(ui->comboBox->currentIndex());

}

void Widget::on_set_clicked()
{
  ui->comboBox->setCurrentIndex(1);
}

void Widget::on_get_clicked()
{
    qDebug()<<"The box currently has the following "<<QString::number(ui->comboBox->count())<<"Items.They are";
        for(int i=0;i<ui->comboBox->count();i++)
        {
         qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);
        }
}
