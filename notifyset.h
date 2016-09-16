#ifndef NOTIFYSET_H
#define NOTIFYSET_H

#include <QDialog>
#include<QFileDialog>
#include<QStandardPaths>
#include<QMessageBox>
namespace Ui {
class notifyset;
}

class notifyset : public QDialog
{
    Q_OBJECT

public:
    explicit notifyset(QWidget *parent = 0);
    ~notifyset();
    void setinit(int ,QString ,QString );

private slots:
    void on_yes_clicked();

    void on_getmusic_clicked();

    void on_geticon_clicked();

    void on_no_clicked();

    void on_pushButton_clicked();

signals:
    void ok(int ,QString ,QString );

private:
    Ui::notifyset *ui;
};

#endif // NOTIFYSET_H
