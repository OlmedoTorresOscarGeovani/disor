<?php

class Texto
{
    private $texto;
    private $tamanio;
    private $posicionActual;


    public function __construct($text)
    {
        $texto=$text;
        $tamanio=strlen($texto);
        $posicionActual=0;
    }

    public function getCaracter()
    {
        $charActual=$texto{$posicionActual};
        $posicionActual++;
        return $charActual;
    }

    public function hayMasTexto()
    {
        return $posicionActual < $tamanio;
    }

    public function getLetraMayuscula()
    {
        if(hayMasTexto()){
            $letra=getCaracter();
            if(!ctype_alpha($letra)){
                return $letra;
            }
            return ctype_upper($letra);
        }
        return strval(0); // puede que marque error esto
    }

    public function getSoloLetras()
    {
        if(hayMasTexto()){
            $letra = getCaracter();
            if(ctype_alpha($letra)){
                return $letra;
            }
        }
        return strval(0);
    }
}


?>