#include "jailbird.h"
#include "ui_jailbird.h"

jailbird::jailbird(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jailbird)
{
    ui->setupUi(this);
}

jailbird::~jailbird()
{
    delete ui;
}

void jailbird::on_target_textEdited(const QString &arg1)
{

}
