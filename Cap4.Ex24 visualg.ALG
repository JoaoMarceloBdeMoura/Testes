Algoritmo "cansei"
//
//
// Descri��o   : Cap4.Ex24
// Autor(a)    : Jo�o Marcelo B de Moura
// Data atual  : 05/08/2022
Var
   // Se��o de Declara��es das vari�veis
   preco, npreco, aumento, imposto, categoria:real
   situacao: caractere


Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Digite o pre�o..: ")
   leia(preco)
   escreval("Digite a categoria..: 1-Limpeza 2-Alimenta��o 3-Vestu�rio")
   leia(categoria)
   escreval("Digite a situa��o..: R �necessitam refrigera��o N �n�o necessitam")
   leia(situacao)

   //calculando aumento
   se preco <= 25 ent�o
      se categoria = 1 ent�o
         aumento = preco * 0.05
         escreval("O aumento � de..: ",aumento)

      sen�o
         se categoria = 2 ent�o
            aumento <- preco * 0.08
            escreval("O aumento � de..: ",aumento)

         sen�o
            aumento <- preco * 0.1
            escreval("O aumento � de..: ",aumento)
         fimse
      fimse
   sen�o
      se categoria = 1 ent�o
         aumento <- preco * 0.12
         escreval("O aumento � de..: ",aumento)

      sen�o
         se categoria = 2 ent�o
            aumento <- preco * 0.15
            escreval("O aumento � de..: ",aumento)

         sen�o
            aumento <- preco * 0.18
            escreval("O aumento � de..: ",aumento)
         fimse
      fimse
   fimse

   //calculando imposto
   npreco <- preco + aumento

   se ((situacao = "R") ou (categoria = 2)) ent�o
      imposto <- npreco * 0.05
      npreco <- npreco - imposto

   sen�o
      imposto <- npreco * 0.08
      npreco <- npreco - imposto
   fimse

   //fazendo a classifica��o
   se npreco <= 50 ent�o
      escreval("barato")
   sen�o
      se npreco < 120 ent�o
         escreval("normal")
      sen�o
         escreval("caro")
      fimse
   fimse
Fimalgoritmo