/******************************************************************************
 Disciplina: Algoritmo e Programação
 Professor: Felipe Antunes
 Aluno: Samuel Oliveira Caldas
 Tarefa: Aula 19 e 20 - Cadeias de Caracteres
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];
    int count = 0;
    char consoantes[] = "bcdfghjklmnpqrstvxywzBCDFGHJKLMNPQRSTVXYWZ";
    int i, j;

    printf("Escreva a frase: ");
    scanf("%[^\n]", frase);

    for (i = 0; i < strlen(frase); i++)
    {
        for (j = 0; j < strlen(consoantes); j++)
        {
            if (frase[i] == consoantes[j])
            {
                count++;
            }
        }
    }

    printf("\nA frase possui %d consoantes.", count);

    return 0;
}