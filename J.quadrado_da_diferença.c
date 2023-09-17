#include<stdio.h>
#include<math.h>

int main()

{
    int a, b, c, d;
    printf("escreva o valor a:  ");
    scanf("%i", &a);
    printf("escreva o valor b:  ");
    scanf("%i", &b);
    c=a-b;
    d=pow(c,2);
    printf("\nResultado:  %i", d);
}
