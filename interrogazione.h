#ifndef INTERROGAZIONE_H
#define INTERROGAZIONE_H

#include <QMainWindow>

namespace Ui {
class Interrogazione;
}

class Interrogazione : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interrogazione(QWidget *parent = 0);
    ~Interrogazione();
private slots:
    void on_Return_clicked();
    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::Interrogazione *ui;
};

#endif // INTERROGAZIONE_H
