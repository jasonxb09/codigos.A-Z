#include<stdio.h>

int main()
{
    int a, s, n;
    printf("insira o valor para descobrir seu antecessor e sucessor:  ");
    scanf("%i", &n);
    a=n-1;
    printf("Antecessor: %i", a);
    s=n+1;
    printf("\nSucessor: %i", s);
}
