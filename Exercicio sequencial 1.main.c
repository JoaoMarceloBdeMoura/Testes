#include <stdio.h>
#include <stdlib.h>

int main() {
	//declaracao de variaveis
	float ReceitaLiq, AluguelCasa, DespesaCasa, Investimento, sobra;
	
	//entrada de dados
	printf("Digite a receita liquida..: ");
	scanf("%f", &ReceitaLiq);
	
	//processamento
	AluguelCasa = ReceitaLiq * 0.3;
	DespesaCasa = ReceitaLiq * 0.3;
	Investimento = ReceitaLiq * 0.08;
	sobra = ReceitaLiq - (AluguelCasa + DespesaCasa + Investimento);
	
	//saida de dados
	printf("Valor do Aluguel da casa..: %.2f", AluguelCasa);
	printf("\nDespesa basica da Casa..: %.2f", DespesaCasa);
	printf("\nInvestimento..: %.2f", Investimento);
	printf("\nRestante..: %.2f", sobra);
	
	return 0;
}
