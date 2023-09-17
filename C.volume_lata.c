#include<stdio.h>
float main ()
{
float V, A, R;
printf("escreva o raio:");
scanf("%f", &R);
printf("escreva a altura:");
scanf("%f", &A);
V = 3.14 *(R*R) *A;
printf("volume: %2f", V);
}
