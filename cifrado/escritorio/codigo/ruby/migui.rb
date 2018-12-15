require 'Cesar'
require 'Inverso'
require 'InversoGrupal'

Shoes.app(width: 900, height: 550) do
    stack(margin: 10) do
      flow(margin: 10) do
        caption "CIFRADOS", width: 400
        # caption "YARV Instructions", width: 400
      end
      flow(margin: 10) do
        caption "Texto plano:"
        @textoPlano=edit_line width:250
        caption "Desplazamiento:"
        @txtDespazamiento =edit_line width:200
        @btnCifrar=button "Cifrar" do
            textoEntrada=@textoPlano.text
            textoDesplazamiento=@txtDespazamiento.text.to_i

            cesar=Cesar.new(textoEntrada,textoDesplazamiento)
            @txtCifradoCesar.text=cesar.getMensaje()

            inverso=Inverso.new(textoEntrada)
            @txtCifradoInverso.text=inverso.getMensaje()

            inversoGrupal=InversoGrupal.new(textoEntrada,textoDesplazamiento)
            @txtCifradoInversoGrupal.text=inversoGrupal.getMensaje()
        end

        # @code = edit_box(width: 400, height: 400)
        # @yarv = edit_box(width: 400, height: 400) 
      end
      flow(margin: 10) do
        stack(margin:10) do
            caption "Cesar"
            caption "Texto Cifrado:"
            @txtCifradoCesar=edit_box(width:200,height:150)
        end

        stack(margin:10) do
            caption "Inverso"
            caption "Texto Cifrado:"
            @txtCifradoInverso=edit_box(width:200,height:150)
        end

        stack(margin:10) do
            caption "Inverso Grupal"
            caption "Texto Cifrado:"
            @txtCifradoInversoGrupal=edit_box(width:200,height:150)
        end
      end
    end



  end