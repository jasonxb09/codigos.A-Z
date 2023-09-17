#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d, e;
    printf("escreva o valor a:  ");
    scanf("%i", &a);
    printf("escreva o valor b:  ");
    scanf("%i", &b);
    printf("escreva o valor c:  ");
    scanf("%i", &c);
    d=a+b+c;
    e=pow(d,2);
    printf("resultado final:  %i", e);
}
