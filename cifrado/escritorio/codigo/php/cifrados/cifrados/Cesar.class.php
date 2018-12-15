<?php


class Cesar {
    private $charset;
    private $txt;
    private $rot;
    private $textoCifrado;
    
    /*****************************************************************************
    * Constructor
    * Cifra la cadena pasada como parametro realizando la sustitucion
    * de la cadena original la cantidad de veces definida en el parametro
    * $s = Cadena original
    * $n = Cantidad de rotaciones a cada letra
    ******************************************************************************/
    public function __construct($s, $n) {
        $this->charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  //Definicion del charset
        $this->txt    = $s;
        $this->rot    = $n;
        // $textoCifrado=encode();
    }
     
    /*****************************************************************************
    * Funcion : encode
    * Cifra la cadena pasada como parametro realizando la sustitucion
    * de la cadena original la cantidad de veces definida en el parametro
    * $result = Mensaje cifrado
    *****************************************************************************/
     function encode(){
        $result = "";                                                           //Variable donde queda el resultado
        for($i=0; $i<strlen($this->txt); $i++)          //Realizo la sustitución de cada caracter
            $result .= $this->rotate($this->txt{$i}, $this->rot);       //Invoco funcion que hace la rotacion
        return $result;                                                         //Devuelvo la cadena Cifrada =)
    }
     
    /*****************************************************************************
    * Funcion : decode
    * Cifra la cadena pasada como parametro realizando la sustitucion
    * de la cadena original la cantidad de veces definida en el parametro
    * $result = Mensaje Descifrado
    *****************************************************************************/
    function decode(){
        $result = "";                                                           //Variable donde queda el resultado
        for($i=0; $i<strlen($this->txt); $i++)          //Realizo la sustitución de cada caracter
            $result .= $this->rotate($this->txt{$i}, -$this->rot);      //Invoco funcion que hace la rotacion
        return $result;                                                         //Devuelvo la cadena DesCifrada =)
    }
     
    /*****************************************************************************
    * Funcion : rotate
    * Realiza la rotacion de un caracter sobre el charset dependiendo el valor de la semilla
    * de la cadena original la cantidad de veces definida en el parametro
    * $s = Cadena original
    * $n = Cantidad de rotaciones
    * $result = Valor del nuevo caracter de acuerdo al indice
    *****************************************************************************/
     function rotate($c, $n){
        $result = "";                                   //Texto de salida
        $tamC = strlen($this->charset); //Longitud de la cadena del charset
        $k = 0;                                                 //Indice para sustitucion de la cadena con el charset
        $n %= $tamC;                                    //Semilla ó rotacion
        $c = strtoupper($c);                    //Convierto a mayuscula el caracter
        //Evaluo si el caracter en la posicion $i existe, de lo contrario dejo el caracter que esta por defecto
        if(strstr($this->charset, $c)){
            $k = (strpos($this->charset, $c) + $n);
            if($k < 0){                                     //Evaluo que el indice sea mayor a 0
                $k += $tamC;
            }else
                $k %= $tamC;
                $result .= $this->charset{$k};  //Obtengo del charset el indice de $k, que es el nuevo valor
        }else{
            $result .= $c;                          //Dejo el caracter sin modificaciones
        }
        return $result;                                 //Devuelvo el caracter con el nuevo valor
    }


    public function verMensaje()
    {
        return $textoCifrado;
    }
}