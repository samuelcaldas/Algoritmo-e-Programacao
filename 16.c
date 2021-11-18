/******************************************************************************
 Disciplina: Algoritmo e Programação
 Professor: Felipe Antunes
 Aluno: Samuel Oliveira Caldas
 Tarefa: Aula 16 - Funções
*******************************************************************************/
#include <stdio.h>
int soma(int a, int b)
{
    if (a == b)
    {
        return 0;
    }

    int A, B;
    int resultado = 0;
    A = a;
    B = b;
    if (a < b)
    {
        A = b;
        B = a;
    }
    B++;
    while (A > B)
    {
        resultado = resultado + B;
        B++;
    }
    return resultado;
}

int main()
{
    int a, b, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    resultado = soma(a, b);
    printf("A soma dos numeros entre %d e %d e: %d\n", a, b, resultado);
}