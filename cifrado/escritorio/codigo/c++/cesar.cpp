#include "cesar.h"

Cesar::Cesar(Texto *texto,int semilla){
    abecedario = new Abecedario();
    this->texto = texto;
    mensajeCifrado = "";
    posicion = semilla;
    mensajeCifrado = cifrar();
}

string Cesar::cifrar(){
    string tC = "";
    while (texto->hayMasTexto())
    {
        char letra = texto->getLetraMayuscula();
        if ((int)letra != 0)
        {
            tC += abecedario->desplazarLetraEn(letra, posicion);
        }
    }
    return tC;
}


string Cesar::verMensaje(){
    return mensajeCifrado;
}
