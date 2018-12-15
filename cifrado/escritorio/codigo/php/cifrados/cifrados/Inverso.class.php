<?php

class Inverso  
{
    private  $texto;
    private  $textoCifrado;

    public function __construct($entrada)
    {
        $this->texto=$entrada;
        // $textoCifrado=invertir();
    }

    public function invertir()
    {
        return strrev($this->texto);
    }

    public function verMensaje()
    {
        return $textoCifrado;
    }
}
