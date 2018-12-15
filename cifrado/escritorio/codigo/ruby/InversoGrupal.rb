
class InversoGrupal
    @Texto

    def initialize(entrada,semilla)
        @Texto=invertir(entrada,semilla)
    end

    def invertir(entrada,semilla)
        nuevo=entrada.delete(" ")
        sobran = nuevo.length % semilla
        salida=nuevo.scan(/.{#{semilla}}/).map {|c| Inverso.new(c).getMensaje.concat(" ")}.join
        salida.concat(nuevo.chars.last(sobran).join)
    end

    def getMensaje
        return @Texto
    end
end