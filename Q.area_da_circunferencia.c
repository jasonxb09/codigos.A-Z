#include<stdio.h>
#include<math.h>

float main()
{
    float A, R;
    printf("digite o raio da circunferencia a ser calculada:  ");
    scanf("%f", &R);
    A=3.14159265*pow(R,2);
    printf("Area:  %f", A);
}
