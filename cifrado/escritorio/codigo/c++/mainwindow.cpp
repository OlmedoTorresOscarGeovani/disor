#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <string>
#include<stack>


#include "cesar.h"
#include "inverso.h"
#include "inversogrupal.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_txtDesplazamiento_textChanged(const QString &arg1)
{

}

void MainWindow::on_btnCifrado_clicked()
{
    string textoPlano=ui->txtPlano->toPlainText().toStdString();
    Texto *texto;
    int semilla=ui->txtDesplazamiento->text().toStdString().empty() ? 0: stoi(ui->txtDesplazamiento->text().toStdString());

    texto=new Texto(textoPlano);
    Cesar *cesar=new Cesar(texto,semilla);
    ui->txtCifradoCesar->setPlainText(QString::fromStdString(cesar->verMensaje()));


    texto=new Texto(textoPlano);
    Inverso *inverso=new Inverso(texto);
    ui->txtCifradoInverso->setPlainText(QString::fromStdString(inverso->verTexto()));


    texto=new Texto(textoPlano);
    InversoGrupal *inversogrupal=new InversoGrupal(texto,semilla);
    ui->txtCifradoInversoGrupal->setPlainText(QString::fromStdString(inversogrupal->verMensaje()));

    //delete [] texto,cesar,inverso,inversogrupal;
}

