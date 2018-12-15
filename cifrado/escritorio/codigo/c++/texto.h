#ifndef TEXTO_H
#define TEXTO_H

#include <string>
using namespace std;

class Texto
{
private:
    string texto;
    int tamanio;
    int posicionActual;
public:
    Texto(string texto);
    char getCaracter();
    bool hayMasTexto();
    char getLetraMayuscula();
    char getSoloLetras();

};

#endif // TEXTO_H
