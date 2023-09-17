#include<stdio.h>

float main ()
{
    float t, v, dp, lu;
    printf("Tempo gasto: ");
    scanf("%f",&t);
    printf("Velocidade media: ");
    scanf("%f",&v);
    dp = t*v;
    lu = dp/12;
    printf("%f",lu);
}
