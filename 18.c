/******************************************************************************
 Disciplina: Algoritmo e Programação
 Professor: Felipe Antunes
 Aluno: Samuel Oliveira Caldas
 Tarefa: Aula 18 - Matrizes e Funções
*******************************************************************************/
#include <stdio.h>
int matrix_sum(int matrix[5][5])
{
    int i, j, sum = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    int i, j, sum = 0;
    int A[5][5] = {0};
    /*
    int A[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};
    */
    printf("Informe os valores da matriz: ")
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Informe o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    sum = matrix_sum(A);
    printf("Resultado: %d\n", sum);

    return 0;
}