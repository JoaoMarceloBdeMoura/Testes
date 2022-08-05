#include <stdio.h>
#include <stdlib.h>

int main() {
	//DECLARAÇÃO DE VARIAVEIS
	float preco, npreco,categoria, imposto, aumento;
	char situacao;
	
	//PROCESSAMENTO
	printf("Digite o preco..: ");
	scanf("%f", &preco);
	
	printf("Digite categoria..: 1-Limpeza 2-Alimentacao 3-Vestuario: ");
	scanf("%f", &categoria);

	printf("Digite a situacao..: R: necessitam refrigeracao / N: nao necessitam: ");
	scanf(" %c", &situacao);
	
	//calculando aumento
if (preco <= 25){
		if (categoria == 1){
			aumento = preco * 0.05;
			printf("O aumento e de..: %.2f", aumento);
		}else if (categoria ==2){
				  aumento = preco * 0.08;
				  printf("O aumento e de ..: %.2f", aumento);
				}else{
					aumento = preco * 0.1;
					printf("O aumento e de..: %.2f",aumento);
				}
					
   }else{
   		if (categoria == 1){
			aumento = preco * 0.12;
			printf("O aumento e de..: %.2f", aumento);
		}else if (categoria ==2){
				  aumento = preco * 0.15;
				  printf("O aumento e de ..: %.2f", aumento);
				}else{
						aumento = preco * 0.18;
					printf("O aumento e de..: %.2f",aumento);
				}
				
   } 
	
	//calculando imposto
	npreco = preco + aumento;
	
	if (situacao == "R" || categoria == 2){
		imposto = npreco * 0.05;
		npreco = npreco - imposto;
		printf("%f", npreco);
   }else{
   		imposto = npreco * 0.08;
   		npreco = npreco - imposto;
   }
	
	//fazendo a classificação
	if (npreco <= 50){
		printf("\nbarato");
   }else if(npreco < 120){
   			printf("\nnormal");
   }else{
   		printf("\ncaro");
   }	
   
   
   
	return 0;
}
