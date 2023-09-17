#include<stdio.h>
float main()
{
    float p, m, cm;
    printf("escreva o valor em pes: ");
    scanf("%f",&p);
    m=p*0.3048;
    cm=p*30.48;
    printf("valor em metros: %f", m);
    printf("\nvalor em centimetros: %f", cm);
}
