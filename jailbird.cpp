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

void jailbird::on_target_textEdited(const QString &target)
{
    //change the target label while it is being modified
    ui->target_valid->setChecked((bool) engine::validate_target(target));
    ui->target_label->setText("Insert target");
}

void jailbird::on_target_editingFinished()
{
    //change the target label after it is edited
    if(ui->target->text() == "")
    {
        ui->target_label->setText("r u idiot? i can't work\nwith an empty target");
    }
    else
    {
        ui->target_label->setText("Target is now set to :");
    }
}

void jailbird::on_target_valid_clicked()
{
    //if check button is pressed then reset it to the default value returned by the validation function
    //so that user interaction will not alter it
    ui->target_valid->setChecked((bool) engine::validate_target(ui->target->text()));
}
