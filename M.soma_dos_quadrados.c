#include<stdio.h>
#include<math.h>

float main ()

{
    float a, b, c, d, e, f, g;
    printf("escreva o valor a:  ");
    scanf("%f", &a);
    printf("escreva o valor b:  ");
    scanf("%f", &b);
    printf("escreva o valor c:  ");
    scanf("%f", &c);
    d=pow(a,2);
    e=pow(b,2);
    f=pow(c,2);
    g=d+e+f;
    printf("resultado:  %f", g);
}
