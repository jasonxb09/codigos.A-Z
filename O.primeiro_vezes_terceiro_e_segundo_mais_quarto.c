#include<stdio.h>

int main()
{
    int a, b, c, d, p, s;
    printf("escreva o primeiro valor: ");
    scanf("%i", &a);
    printf("escreva o segundo valor: ");
    scanf("%i", &b);
    printf("escreva o terceiro valor: ");
    scanf("%i", &c);
    printf("escreva o quarto valor: ");
    scanf("%i", &d);
    p=a*c;
    s=b+d;
    printf("produto primeiro e terceiro: %i", p);
    printf("\nsoma segundo e quarto: %i", s);
}
