#include "inverso.h"

Inverso::Inverso(Texto *t)
{
    invertirTexto(t);
}


void Inverso::invertirTexto(Texto *t){
    string temp="";
    while (t->hayMasTexto()) {
        temp+=t->getCaracter();
    }

    reverse(temp.begin(),temp.end());
    inverso=temp;
}


string Inverso::verTexto(){
    return inverso;
}
