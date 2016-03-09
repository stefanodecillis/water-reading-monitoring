#ifndef VISUALIZZAIONE_H
#define VISUALIZZAIONE_H
#include <QWidget>
#include<water_reading.h>

namespace Ui {
class visualizzaione;
}

class visualizzaione : public QWidget
{
    Q_OBJECT

public:
    explicit visualizzaione(QWidget *parent = 0);
    static double Consumo_tot_per_month(int month, std::string stringa, std::vector<double> &app);
private slots:
    void on_textbox1_editingFinished();
    void aggiungi_grafico();
    void on_button1_clicked();

private:
    Ui::visualizzaione *ui;
    bool input_codice_cliente=false;

};

#endif // VISUALIZZAIONE_H