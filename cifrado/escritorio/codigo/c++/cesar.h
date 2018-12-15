#ifndef CESAR_H
#define CESAR_H

#include <string>
#include "texto.h"
#include "abecedario.h"


class Cesar
{
private:
    Texto *texto;
    Abecedario *abecedario;
    string mensajeCifrado;
    int posicion;

    string cifrar();
public:
    Cesar(Texto *,int);
    string verMensaje();

};

#endif // CESAR_H
