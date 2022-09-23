#include <stdio.h>



int main() {



 // dias depende de sintomas
    int idade, sexo, sintomas, ajuda, i;            
	int qtdMD=0, qtdFD=0, qtdCS=0, qtdSS=0, qtdSS_AJ=0;
    int dias, menor=0, teste, resultado;
    int internado, qtdIdoso=0;
    float media, mediaD=0;
  
  //inicio do for
  
    for(i=0;i<1;i++)
      {
        printf("\n\n------------------------------------------------------------\n\n");
       do{
	    printf("\nDigite a idade..: ");
        scanf("%d", &idade);
       }while(idade < 0);
	    
    //verificação do sexo   
        do
        {
          printf("\nSexo  1-Masculino  2- Feminino..: ");
        scanf("%d", &sexo);   
        }
        while((sexo != 1) && (sexo != 2));  
    //fim da verificação



   //Inicio do questionário de sintomas
       do{
	    printf("\nTeve sintomas do CoronaVirus? 1-Sim 2-Não..: ");
        scanf("%d", &sintomas);
	   }while((sintomas != 1) && (sintomas != 2));

       if(sintomas == 1)
        {
         do{
          printf("\nPor quantos dias teve sintomas?..: ");
          scanf("%d", &dias);
     	 }while(dias < 0);
     	
		do{ 
		  printf("\nPrecisou procurar ajuda médica? 1-Sim 2- Não..: ");
          scanf("%d", &ajuda);
      	}while((ajuda != 1) && (ajuda != 2));
      	
        //Internados ou não
          do{
          	
		  if(ajuda == 1)
          {
            printf("\nPrecisou ficar internado? 1-Sim 2- Não..: ");
            scanf("%d", &internado);
            
          }        
          }while((ajuda != 1) && (ajuda != 2));



         if(idade >= 60)
          {
            mediaD = mediaD + dias;
            qtdIdoso++;
          }



         qtdCS++;
          }
        else
        {
          qtdSS++;
        }


	   do{
       printf("\nRealizou algum teste de covid? 1-Sim 2-Não..: ");
        scanf("%d", &teste);
   	   }while((teste != 1) && (teste != 2));



       if(teste == 1)
        {
         do{
          printf("\nQual foi o resultado? 1- Positivo  2- Negativo..: ");
          scanf("%d", &resultado);            
     	 }while((resultado != 1) && (resultado != 2));
		}   


//idade da pessoa mais jovem que testou positivo e que precisou ficar internado. 
       if((resultado == 1) && (internado == 1))
        {
          if(menor > idade)
          {
             menor = idade;
          }
         
       	}
      
//a quantidade de pessoas que tiveram sintomas e não precisaram procurar ajuda médica.   
	   if((sintomas == 1) && (ajuda == 2))
	   	{
	   		qtdSS_AJ++;
		}       
 
 //teste teste teste teste
 
 		if(sexo == 1)
 		{
 			qtdMD = qtdMD + dias;
		}
		else
		{
			qtdFD = qtdFD + dias;
		}

       
      	}
      	    	


printf("\n\n------------------------ Resultados ------------------------\n\n");
  //respondendo perguntas



   //percentual de pessoas assintomáticas



   media = (qtdSS * 100)/i;
    
    if(qtdSS == 0)
	{
		printf("A porcentagem de pessoas assintomáticas e de: %.2f\n",media);
		printf("\nNão houve pessoas assintomaticas\n");		
	}
	else
	{
		printf("A porcentagem de pessoas assintomáticas e de: %.2f\n",media);
	}  
    
        
    //média de dias com sintomas das pessoas idosas
    
    
    if(qtdIdoso <= 0)
    {
      printf("\nNao houve pessoas idosas com sintomas\n");
    }
     else
    {
      printf("\nA media de dias com sintomas das pessoas idosas e de: %.2f\n", mediaD/qtdIdoso);
    }
    
    
    //idade da pessoa mais jovem que testou positivo e que precisou ficar internado.

	if(menor == 0)
	{
		printf("\nNao houve uma pessoa que testou positivo e que precisou ficar internado\n");
	}
	else
	{
		printf("\nA idade da pessoa mais jovem que testou positivo e que precisou ficar internado e de: %d\n", menor);
	}

   
   
   //quantidade de pessoas que tiveram sintomas e não precisaram procurar ajuda médica.
   
  	if(qtdSS_AJ == 0)
  	{
  		printf("\nNao houve uma pessoa que tive sintoma e não precisou procurar ajuda medica\n");
	}
    else
    {
    	 printf("\nA quantidade de pessoas que tiveram sintomas e não precisaram procurar ajuda medica e..: %d\n", qtdSS_AJ);
	}
   
   // teste teste teste teste teste teste
   		
		 if(qtdMD > qtdFD)
		 {
		 	printf("\nO grupo que teve mais dias foi o Masculino\n");
		 }
		 else if(qtdFD > qtdMD)
		 {
		 	printf("\nO grupo que teve mais dias foi o Feminino\n");
		 }
		 else
		 {
		 	printf("\nAmbos os grupos tiveram a mesma quantidade de dias\n");
		 }
  
	

    return 0;
}
