/******************************************************************************
 Algoritmo e Programação
 Aula 10 - Estrutura Condicional (if-else)
 Questão 2
*******************************************************************************/
#include <stdio.h>
int main()
{
   // Declarações:
   float numero1, numero2, numero3, primeiro, segundo, terceiro;

   // Entrada de dados
   printf("Digite o primeiro número: ");
   scanf("%f", &numero1); // Recebe um número real e armazena

   printf("Digite o segundo número: ");
   scanf("%f", &numero2); // Recebe um número real e armazena

   printf("Digite o terceiro número: ");
   scanf("%f", &numero3); // Recebe um número real e armazena

   // Processamento
   primeiro = numero1;                           // Define o primeiro número como o menor numero
   if (numero2 <= numero1 && numero2 <= numero3) //Checa se o numero2 é menor
      primeiro = numero2;
   if (numero3 <= numero1 && numero3 <= numero2) //Checa se o numero3 é menor
      primeiro = numero3;
   if (((numero1 >= numero2 && numero1 <= numero3) || (numero1 >= numero3 && numero1 <= numero2))) //Checa se o numero1 é o segundo número
      segundo = numero1;
   if (((numero2 >= numero1 && numero2 <= numero3) || (numero2 >= numero3 && numero2 <= numero1))) //Checa se o numero2 é o segundo número
      segundo = numero2;
   if (((numero3 >= numero1 && numero3 <= numero2) || (numero3 >= numero2 && numero2 <= numero1))) //Checa se o numero3 é o segundo número
      segundo = numero3;
   if (numero1 >= numero2 && numero1 >= numero3) //Checa se o numero1 é o terceiro número
      terceiro = numero1;
   if (numero2 >= numero3 && numero2 >= numero1) //Checa se o numero2 é o terceiro número
      terceiro = numero2;
   if (numero3 >= numero1 && numero3 >= numero2) //Checa se o numero3 é o terceiro número
      terceiro = numero3;

   // Saída
   printf("Números em ordem crescente: %.2f, %.2f, %.2f\n", primeiro, segundo, terceiro); // Imprime na tela o conteúdo das variáveis

   return 0;
}