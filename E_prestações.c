#include<stdio.h>

float main()
{
float v, tx, p, t ;
 printf("Escreva o valor a ser pago:   ");
scanf("%f",&v);
 printf("Escreva o valor da taxa:   ");
 scanf("%f", &tx);
 printf("Escreva o tempo em que sera pago:   ");
 scanf("%f", &t);
 p=v+(v*(tx/100)*t);
 printf("%f", p);
}
