#ifndef JAILBIRD_H
#define JAILBIRD_H

#include <QMainWindow>

namespace Ui {
class jailbird;
}

class jailbird : public QMainWindow
{
    Q_OBJECT

public:
    explicit jailbird(QWidget *parent = 0);
    ~jailbird();

private slots:
    void on_target_textEdited(const QString &arg1);

    void on_target_editingFinished();

    void on_target_valid_clicked();

private:
    Ui::jailbird *ui;
};

namespace engine {
    bool validate_target(const QString &target);
}

#endif // JAILBIRD_H
