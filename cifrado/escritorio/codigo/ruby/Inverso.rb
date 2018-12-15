class Inverso
    @Texto
    def initialize(entrada)
        @Texto=invertir(entrada)
    end

    def invertir(entrada)
        string_reves=""
        i=0
        while i<entrada.length
            string_reves=entrada[i]+string_reves
            i+=1
        end
        return string_reves
    end

    def getMensaje
        return @Texto
    end
    
end