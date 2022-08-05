Algoritmo "cansei"
//
//
// Descrição   : Cap4.Ex24
// Autor(a)    : João Marcelo B de Moura
// Data atual  : 05/08/2022
Var
   // Seção de Declarações das variáveis
   preco, npreco, aumento, imposto, categoria:real
   situacao: caractere


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Digite o preço..: ")
   leia(preco)
   escreval("Digite a categoria..: 1-Limpeza 2-Alimentação 3-Vestuário")
   leia(categoria)
   escreval("Digite a situação..: R —necessitam refrigeração N —não necessitam")
   leia(situacao)

   //calculando aumento
   se preco <= 25 então
      se categoria = 1 então
         aumento = preco * 0.05
         escreval("O aumento é de..: ",aumento)

      senão
         se categoria = 2 então
            aumento <- preco * 0.08
            escreval("O aumento é de..: ",aumento)

         senão
            aumento <- preco * 0.1
            escreval("O aumento é de..: ",aumento)
         fimse
      fimse
   senão
      se categoria = 1 então
         aumento <- preco * 0.12
         escreval("O aumento é de..: ",aumento)

      senão
         se categoria = 2 então
            aumento <- preco * 0.15
            escreval("O aumento é de..: ",aumento)

         senão
            aumento <- preco * 0.18
            escreval("O aumento é de..: ",aumento)
         fimse
      fimse
   fimse

   //calculando imposto
   npreco <- preco + aumento

   se ((situacao = "R") ou (categoria = 2)) então
      imposto <- npreco * 0.05
      npreco <- npreco - imposto

   senão
      imposto <- npreco * 0.08
      npreco <- npreco - imposto
   fimse

   //fazendo a classificação
   se npreco <= 50 então
      escreval("barato")
   senão
      se npreco < 120 então
         escreval("normal")
      senão
         escreval("caro")
      fimse
   fimse
Fimalgoritmo