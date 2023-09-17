#include<stdio.h>
#include<math.h>

float main()
{
    float b, e, p;
    printf("escreva a base da potencia: ");
    scanf("%f", &b);
    printf("escreva o expoente da potencia: ");
    scanf("%f", &e);
    p=pow(b,e);
    printf("resultado: %f", p);

}
