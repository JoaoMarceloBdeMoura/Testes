programa {
	funcao inicio() {
	    //declara��o de variaveis
	    real preco, codigo
	    
	    
	    //entrada de dados
	    escreva("Digite o pre�o do produto..: ")
	    leia(preco)
	    escreva("Digite o codigo do produto..: ")
	    leia(codigo)
	    
	    //processamento
	    se (codigo == 1) 
	        escreva("Proced�ncia: Sul")
	        senao se (codigo == 2)
	            escreva("Proced�ncia: Norte")
	            senao se (codigo == 3)
	                escreva("Proced�ncia: Leste")
	                senao se (codigo == 4)
	                    escreva("Proced�ncia: Oeste")
	                    senao se ((codigo >= 5 e codigo <=6) ou (codigo >= 21 e codigo <= 30))
	                        escreva("Proced�ncia: Nordeste")
	                        senao se (codigo >= 7 e codigo <=9)
	                            escreva("Proced�ncia: Sudeste")
	                            senao se (codigo >= 10 e codigo <= 20)
	                                escreva("Proced�ncia: Centro-oeste")
	                                
	    
	    //saida de dados
	    
	 
	}
}
