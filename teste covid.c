#include <stdio.h>



int main() {



 // dias depende de sintomas
    int idade, sexo, sintomas, ajuda, i;            int qtdM=0, qtdF=0, qtdCS=0, qtdSS=0;
    int dias, menor=9999, teste, resultado;
    int internado, qtdIdoso=0;
    float media, mediaD=0;
  
  //inicio do for
  
    for(i=0;i<3;i++)
      {
        printf("\n\n------------------------------------------------------------\n\n");
        printf("\nDigite a idade..: ");
        scanf("%d", &idade);
        
    //verificação do sexo   
        do
        {
          printf("\nSexo  1-Masculino  2- Feminino..: ");
        scanf("%d", &sexo);
        if(sexo ==1)
        {
          qtdM++;
        }
        else
        {
          qtdF++;
        }
        }
        while((sexo != 1) && (sexo != 2));  
    //fim da verificação



   //Inicio do questionário de sintomas
        printf("\nTeve sintomas do CoronaVirus? 1-Sim 2-Não..: ");
        scanf("%d", &sintomas);



       if(sintomas == 1)
        {
          printf("\nPor quantos dias teve sintomas?..: ");
          scanf("%d", &dias);
          printf("\nPrecisou procurar ajuda médica? 1-Sim 2- Não..: ");
          scanf("%d", &ajuda);
          
        //Internados ou não
          if(ajuda == 1)
          {
            printf("\nPrecisou ficar internado? 1-Sim 2- Não..: ");
            scanf("%d", &internado);
            
          }        
          else
          {
            
          }



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



       printf("\nRealizou algum teste de covid? 1-Sim 2-Não..: ");
        scanf("%d", &teste);
        



       if(teste == 1)
        {
          printf("\nQual foi o resultado? 1- Positivo  2- Negativo..: ");
          scanf("%d", &resultado);            
        }   



       if((resultado == 1) && (internado == 1))
        {
          if(menor > idade)
          {
             menor = idade;
          }
         
        }
      
      }
printf("\n\n------------------------ Resultados ------------------------\n\n");
  //respondendo perguntas



   //percentual de pessoas assintomáticas



   media = (qtdSS * 100)/i;
    
    
    
    
    printf("A porcentagem de pessoas assintomáticas é de: %.2f",media);
        
    //média de dias com sintomas das pessoas idosas
    
    if(qtdIdoso <= 0)
    {
      printf("\nNão houve pessoas idosas com sintomas");
    }
     else
    {
      printf("\nA média de dias com sintomas das pessoas idosas é de: %.2f", mediaD/qtdIdoso);
    }
    
    //idade da pessoa mais jovem que testou positivo e que precisou ficar internado.



   printf("\nA idade da pessoa mais jovem que testou positivo e que precisou ficar internado é de: %d", menor);
    
  
    return 0;
}
