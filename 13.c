/******************************************************************************
 Disciplina: Algoritmo e Programação
 Professor: Felipe Antunes
 Aluno: Samuel Oliveira Caldas
 Tarefa: Aula 13 - Estrutura de Repetição (while/do-while)
*******************************************************************************/
#include <stdio.h>
int main()
{
    int meses;
    meses = 0;
    float salario1, salario2;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario1);
    salario2=salario1/3;

    while (salario2<=salario1)
    {
        salario1*=1.02;
        salario2*=1.05;
        meses++;
    }
    printf("\nSao necessarios %d meses", meses);
    return 0;
}