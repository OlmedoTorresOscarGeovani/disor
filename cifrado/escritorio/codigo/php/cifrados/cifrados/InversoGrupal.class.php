<?php

include_once "Inverso.class.php";

class InversoGrupal  
{
    var $textoCifrado;
    var $pedazos=array();

    public function __construct($entrada,$desplazamiento)
    {
        if($desplazamiento > 0){
            $conta=0;
            $pedazo="";

            for ($i=0; $i < strlen($entrada); $i++) { 
                if($conta%$desplazamiento == 0){
                    $inverso=new Inverso($pedazo);
                    // $datos.=$inverso->invertir()."\n";
                    $this->pedazos[]=$inverso->invertir();
                    $pedazo="";
                }
                $pedazo.=$entrada{$i};
                $conta++;
            }
            if(!empty($pedazo)){
                $this->pedazos[]=$pedazo;
            }
        }else{
            for ($i=0; $i < strlen($entrada); $i++) { 
                $this->pedazos[]=$entrada{$i};
            }
        }
    }

    
    public function getMensaje()
    {
        $datos="";
        foreach ($this->pedazos as $p){
            $datos.=$p;
            
        }
        return $datos;
    }
}
