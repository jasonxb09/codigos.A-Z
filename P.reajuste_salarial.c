#include<stdio.h>
float main()
{
    float sm, pr, ns;
    printf("escreva o salario atual:");
    scanf("%f",&sm);
    printf("escreva a porcentagem de reajuste:");
    scanf("%f",&pr);
    ns=sm*(1+pr/100);
    printf("salario apos reajuste: %f", ns);
}
