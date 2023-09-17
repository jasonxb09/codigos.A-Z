#include<stdio.h>

float main()
{
    float r, d, c;
    printf("escreva o preço do dolar atualmente:");
    scanf("%f", &c);
    printf("escreva quantos reais serao convertidos:");
    scanf("%f", &r);
    d=r/c;
    printf("valor em dolares: %f", d);
}
