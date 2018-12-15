#include "texto.h"

Texto::Texto(string texto)
{
    this->texto=texto;
    tamanio=texto.length();
    posicionActual=0;
}

char Texto::getCaracter(){
    char actual = texto.at(posicionActual); /*[posicionActual];*/
    posicionActual++;
    return actual;
}

bool Texto::hayMasTexto()
{
   return posicionActual < tamanio;
}


char Texto::getLetraMayuscula()
{
   if (hayMasTexto())
   {
       char letra = getCaracter();
       if (!isalpha(letra))
       {
           return letra;
       }
       return toupper(letra);
   }
   return (char)0;
}


char Texto::getSoloLetras(){
    if (hayMasTexto())
    {
        char letra = getCaracter();
        if (isalpha(letra))
        {
            return letra;
        }
    }
    return char(0);
}

