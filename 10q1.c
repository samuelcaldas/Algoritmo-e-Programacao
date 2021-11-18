/******************************************************************************
 Algoritmo e Programação
 Aula 10 - Estrutura Condicional (if-else)
 Questão 1
*******************************************************************************/
#include <stdio.h>
int main()
{
    // Declarações:
    float nota1, nota2, nota3, media_ponderada;
    int conceito = -1;
    char conceitos[] = {'A', 'B', 'C', 'D', 'E'};

    // Entrada de dados
    printf("Digite a nota de trabalho: ");
    scanf("%f", &nota1); // Recebe um número real e armazena

    printf("Digite a nota da avaliação: ");
    scanf("%f", &nota2); // Recebe um número real e armazena

    printf("Digite a nota do exame final: ");
    scanf("%f", &nota3); // Recebe um número real e armazena

    // Processamento
    media_ponderada = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    if (media_ponderada < 5)
        conceito = 4;
    else if (media_ponderada < 6)
        conceito = 3;
    else if (media_ponderada < 7)
        conceito = 2;
    else if (media_ponderada < 8)
        conceito = 1;
    else
        conceito = 0;

    // Saída
    printf("Media: %.2f\n", media_ponderada); // Imprime na tela o conteúdo das variáveis
    printf("Conceito: %c\n", conceitos[conceito]);

    return 0;
}