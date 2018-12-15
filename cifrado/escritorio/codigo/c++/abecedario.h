#ifndef ABECEDARIO_H
#define ABECEDARIO_H

#include <string>
using namespace std;

class Abecedario
{
private:
    string letras="ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
    int tamanio;
    int posicionDeLetra(char letra);
public:
    Abecedario();
    char desplazarLetraEn(char letra, int desp);

};

#endif // ABECEDARIO_H
