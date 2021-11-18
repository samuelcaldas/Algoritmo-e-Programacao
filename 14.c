/******************************************************************************
 Disciplina: Algoritmo e Programação
 Professor: Felipe Antunes
 Aluno: Samuel Oliveira Caldas
 Tarefa: Aula 14 - Vetores
*******************************************************************************/
#include <stdio.h>
int main()
{
    int i, j, x[10], temp;

    printf("Escreva 10 numeros inteiros para serem ordenados de forma decrescente:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (x[i] < x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("\nNumeros em ordem: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", x[i]);
    }
    return 0;
}
