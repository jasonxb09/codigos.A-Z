#include<stdio.h>
#include<math.h>

float main()
{
    float r, v;
    printf("digite o raio da esfera: ");
    scanf("%f", &r);
    v=(4/3)*3.14159*pow(r,3);
    printf("volume da esfera: %f", v);
}
