#ifndef ANALISI_H
#define ANALISI_H

#include <QMainWindow>

namespace Ui {
class Analisi;
}

class Analisi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Analisi(QWidget *parent = 0);
    ~Analisi();
    static std::vector<QDate> get_threshold(std::string user, double threshold);
public slots:
    void on_exit_button_clicked();

private slots:
    void on_button_dati_clicked();

private:
    Ui::Analisi *ui;
};

#endif // ANALISI_H