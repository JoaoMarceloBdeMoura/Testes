programa {
	funcao inicio() {
	    //declaração de variaveis
	    real preco, codigo
	    
	    
	    //entrada de dados
	    escreva("Digite o preço do produto..: ")
	    leia(preco)
	    escreva("Digite o codigo do produto..: ")
	    leia(codigo)
	    
	    //processamento
	    se (codigo == 1) 
	        escreva("Procedência: Sul")
	        senao se (codigo == 2)
	            escreva("Procedência: Norte")
	            senao se (codigo == 3)
	                escreva("Procedência: Leste")
	                senao se (codigo == 4)
	                    escreva("Procedência: Oeste")
	                    senao se ((codigo >= 5 e codigo <=6) ou (codigo >= 21 e codigo <= 30))
	                        escreva("Procedência: Nordeste")
	                        senao se (codigo >= 7 e codigo <=9)
	                            escreva("Procedência: Sudeste")
	                            senao se (codigo >= 10 e codigo <= 20)
	                                escreva("Procedência: Centro-oeste")
	                                
	    
	    //saida de dados
	    
	 
	}
}
