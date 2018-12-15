#include "abecedario.h"

Abecedario::Abecedario()
{
    tamanio=letras.length();
}

int Abecedario::posicionDeLetra(char letra){
    int pos = -1;
    for (int i = 0; i < tamanio; i++)
    {
        if (letras[i] == letra)
        {
            pos = i;
            break;
        }
    }
    return pos;
}

char Abecedario::desplazarLetraEn(char letra, int desp){
    int posicionLetraEncontrada = posicionDeLetra(letra);
    if (posicionLetraEncontrada >= 0)
    {
        int nuevaPosicion = ((posicionLetraEncontrada + desp) + tamanio) % tamanio;
        return letras[nuevaPosicion];
    }
    return letra;
}
