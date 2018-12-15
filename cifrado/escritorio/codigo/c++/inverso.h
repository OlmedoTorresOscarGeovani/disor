#ifndef INVERSO_H
#define INVERSO_H

//#include <stack>
#include <string>
#include<algorithm>
#include "texto.h"

class Inverso
{
private:
    //stack<char> pila;
    void invertirTexto(Texto *);
    string inverso;
public:
    Inverso(Texto*);
    string verTexto();
};

#endif // INVERSO_H
