
class Cesar
    @Texto
    def initialize(entrada,desplazamiento)
        @Texto=cifrar(entrada,desplazamiento)
    end 

    def cifrar(texto,semilla)
        salida=""
        texto.length.times do |index| 
            if /[a-z]/.match(texto[index])
              letter = texto[index].ord + semilla
              if letter > "z".ord
                salida.concat((letter - 26).chr)
              else
                salida.concat(letter.chr)
              end
            elsif /[A-Z]/.match(texto[index])
              letter = texto[index].ord + semilla
              if letter > "Z".ord
                salida.concat((letter - 26).chr)
              else
                salida.concat(letter.chr)
              end
            else
                salida.concat(texto[index])
            end
          end
          return salida
    end


    def getMensaje()
        @Texto
    end
end

