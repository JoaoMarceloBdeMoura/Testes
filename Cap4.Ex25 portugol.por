programa {
	funcao inicio() {
	    //declaração de variaveis
	    real numHE, numHF, premio, H, inferno
	    
	    
	    //entrada de dados
	    escreva("Digite o numero de horas extras.: ")
	    leia(numHE)
	    escreva("Digite o numero de horas falta..: ")
	    leia(numHF)
	    
	    //processamento
	    
	   inferno = (2 * numHF)/3
	   
	    H = numHE - ((2 * numHF)/3)
	    
	
	    
	    se (H < 600) 
	        escreva("100")
	        senao se (H < 1200)
	            escreva("200")
	            senao se (H < 1800)
	                escreva("300")
	                senao se (H > 1800 e H < 2400)
	                    escreva("400")
	                    senao se (H >= 2400)
	                        escreva("500")
	                                
	    
	    //saida de dados
	    
	 
	}
}
