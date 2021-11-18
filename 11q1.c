#include <stdio.h>
int main()
{
    int i;
    float a, b, c, n1, n2, n3;
    printf("Digite 1, 2 ou 3");
    scanf("%f", &i);
    printf("Digite um número");
    scanf("%f", &a);
    printf("Digite outro número");
    scanf("%f", &b);
    printf("Digite mais um número");
    scanf("%f", &c);
    n1 = a;
    if (b <= a && b <= c) n1 = b;
    if (c <= a && c <= b) n1 = c;
    if (((a >= b && a <= c) || (a >= c && a <= b))) n2 = a;
    if (((b >= a && b <= c) || (b >= c && b <= a))) n2 = b;
    if (((c >= a && c <= b) || (c >= b && b <= a))) n2 = c;
    if (a >= b && a >= c) n3 = a;
    if (b >= c && b >= a) n3 = b;
    if (c >= a && c >= b) n3 = c;
    // Saída
    switch (i)
    {
    case 1:
        printf("Crescente%.2f, %.2f, %.2f\n", n1, n2, n3);
        break;
    case 2:
        printf("Decrescente%.2f, %.2f, %.2f\n", n3, n2, n1);
        break;
    case 3:
        printf("Maior no meio%.2f, %.2f, %.2f\n", n1, n3, n2);
        break;
    }
    return 0;
}