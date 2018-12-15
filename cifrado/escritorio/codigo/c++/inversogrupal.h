#ifndef INVERSOGRUPAL_H
#define INVERSOGRUPAL_H
#include <string>
#include "texto.h"
#include "inverso.h"

class InversoGrupal
{
private:
    string mensajeInverso;
public:
    InversoGrupal(Texto*,int);
    string verMensaje();
};

#endif // INVERSOGRUPAL_H
