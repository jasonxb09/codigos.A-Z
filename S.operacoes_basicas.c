#include<stdio.h>

float main()
{
    float a, b, c, d, e, f;
    printf("escreva o valor a: ");
    scanf("%f", &a);
    printf("escreva o valor : ");
    scanf("%f", &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("resultado soma: %.f", c);
    printf("\nresultado subtra�ao: %.f", d);
    printf("\nresultado multiplica�ao: %.f", e);
    printf("\nresultado divisao: %.f", f);
}
