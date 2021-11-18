/******************************************************************************
 Disciplina: Algoritmo e Programação
 Professor: Felipe Antunes
 Aluno: Samuel Oliveira Caldas
 Tarefa: Aula 21 - Cadeias de Caracteres (Parte III)
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];
    char palavras[1000][1000];
    char aux[1000];
    int qtd = 0, i, j, x, menor;

    printf("Escreva a frase: ");
    scanf("%[^\n]", frase);

    char *palavra;
    palavra = strtok(frase, " ");

    while (palavra)
    {
        strcpy(palavras[qtd], palavra);
        palavra = strtok(NULL, " ");
        qtd++;
    }

    for (i = 0; i < qtd - 1; i++)
    {
        x = 0;
        menor = i;
        for (j = i + 1; j < qtd; j++)
        {
            x = 0;
            while (palavras[menor][x] == palavras[j][x])
            {
                x++;
            }
            if (palavras[menor][x] > palavras[j][x])
            {
                menor = j;
            }
        }
        if (menor != i)
        {
            strcpy(aux, palavras[menor]);
            strcpy(palavras[menor], palavras[i]);
            strcpy(palavras[i], aux);
        }
    }

    printf("\nPalavras:");
    for (i = 0; i < qtd; i++)
    {
        printf("\n%s", palavras[i]);
    }

    return 0;
}