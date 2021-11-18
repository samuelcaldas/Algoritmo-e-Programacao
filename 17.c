/******************************************************************************
 Disciplina: Algoritmo e Programação
 Professor: Felipe Antunes
 Aluno: Samuel Oliveira Caldas
 Tarefa: Aula 17 - Ponteiros
*******************************************************************************/
#include <stdio.h>
void fill(float *nota_a, float *nota_b, float *nota_c, char *media)
{
    printf("Informe a nota A: ");
    scanf("%f", nota_a);
    printf("Informe a nota B: ");
    scanf("%f", nota_b);
    printf("Informe a nota C: ");
    scanf("%f", nota_c);
    printf("Informe o tipo de media (A - Aritimetica, P - Ponderada): ");
    scanf(" %c", media);
}

float media_aritimetica(float nota_a, float nota_b, float nota_c)
{
    return (nota_a + nota_b + nota_c) / 3;
}

float media_ponderada(float nota_a, float nota_b, float nota_c)
{
    return (nota_a * 5 + nota_b * 3 + nota_c * 2) / 10;
}

int main()
{
    float nota_a = 0;
    float nota_b = 0;
    float nota_c = 0;
    char media="";

    fill(&nota_a, &nota_b, &nota_c, &media);

    switch (media)
    {
        case 'A':
            printf("Media: %.2f\n", media_aritimetica(nota_a, nota_b, nota_c));
            break;

        case 'P':
            printf("Media ponderada: %.2f\n", media_ponderada(nota_a, nota_b, nota_c));
            break;

        default:
            printf("Tipo de media invalida: %c", media);
            break;
    }
    
    return 0;
}