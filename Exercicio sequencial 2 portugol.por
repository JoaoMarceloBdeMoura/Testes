programa {
	funcao inicio() {
	    //declaração de variaveis
	    real ReceitaLiq, AluguelCasa, DespesaCasa, Investimento, sobra
	    
	    //entrada de dados
	    escreva("Digite a receita liquida..: ")
	    leia(ReceitaLiq)
	    
	    //processamento
	    AluguelCasa = ReceitaLiq * 0.3
	    DespesaCasa = ReceitaLiq * 0.3
	    Investimento = ReceitaLiq * 0.08
	    sobra = ReceitaLiq - (AluguelCasa + DespesaCasa + Investimento)
	    
	    //saida de dados
	    escreva("Valor do Aluguel da casa..: ",AluguelCasa, " Despesa basica da Casa..: ",DespesaCasa," Investimento..: ",Investimento," O restante é..: ",sobra)
	 
	}
}
