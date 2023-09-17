#include<stdio.h>

float main()
{
    float v, d, t;
    printf("escreva a distancia em km: ");
    scanf("%f", &d);
    printf("escreva o tempo em minutos: ");
    scanf("%f", &t);
    v=(d*1000)/(t*60);
    printf("velocidade do projetil: %.1fms^2", v);
}
