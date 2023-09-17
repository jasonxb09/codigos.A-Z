#include<stdio.h>
#include<math.h>

float main()
{
    float a, b, c;
    printf("escreva a base a raiz: ");
    scanf("%f", &b);
    printf("escreva a base a raiz: ");
    scanf("%f", &a);
    c=pow(b,(1/a));
    printf("resultado da raiz: %f", c);
}
