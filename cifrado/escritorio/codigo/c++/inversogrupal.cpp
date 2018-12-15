#include "inversogrupal.h"

InversoGrupal::InversoGrupal(Texto *t,int desplazamiento)
{
   int conta = 0;
   string pedazo = "";
   //string nuevo = "";
   while(t->hayMasTexto()){
       if(conta%desplazamiento == 0){
           Texto *text=new Texto(pedazo);
           Inverso *i=new Inverso(text);
           //Inverso *i = new Inverso(new Texto(pedazo));
           mensajeInverso += i->verTexto();
           pedazo = "";
       }
       char c = t->getCaracter();
       if(c!=0){
           pedazo += c;
       }
       conta++;
   }
   if(pedazo.length()== desplazamiento){
       Texto *text=new Texto(pedazo);
       Inverso *i = new Inverso(text);
       mensajeInverso += i->verTexto();
   }else{
       mensajeInverso += pedazo;
   }
}


string InversoGrupal::verMensaje(){
    return mensajeInverso;
}
