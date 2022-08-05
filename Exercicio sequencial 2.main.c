#include <stdio.h>
#include <stdlib.h>

int main() {
	//declaracao de variaveis
	float preco, codigo;
	
	//entrada de dados
	printf("Digite o preco do produto..: ");
	scanf("%f", &preco);
	printf("Digite o codigo do produto..: ");
	scanf("%f", &codigo);
	
	//processamento
	if (codigo == 1)
	{
	   printf("Procedencia: Sul");
	   }else if (codigo == 2)
	   {
   	   		printf("Procedencia: Norte");
   	   		}else if (codigo == 3)
				  {
   	   			 printf("Procedencia: Leste");
   	   			 }else if (codigo == 4)
					   {
   	   			 	  printf("Procedencia: Oeste");
   	   			 	  }else if ((codigo >= 5 && codigo <=6) || (codigo >= 21 && codigo <= 30))
							 {
    						 printf("Procedencia: Nordeste");
    						 }else if (codigo >= 7 && codigo <= 9)
    						 	   {
    						 	   	printf("Procedencia: Sudeste");
    						 	   }else if(codigo >= 10 && codigo <= 20){
   						 	   		 	  printf("Procedencia: Centro-oeste");   						 	   		 
									}
    						 	   		 			 		      					 	   		   	   			 	  
	
	
	//saida de dados
	
	
	return 0;
}
