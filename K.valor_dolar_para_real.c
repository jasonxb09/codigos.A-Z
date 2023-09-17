#include<stdio.h>

float main()
{
    float r, d, c;
    printf ("escreva a quantidade de dolares a serem convertidos para real: ");
    scanf("%f", &d);
    printf("valor da cotacao atual: ");
    scanf("%f",&c);
    r=d*c;
    printf ("valor em real: %f", r);
}
