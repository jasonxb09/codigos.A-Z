#include<stdio.h>

int main()
{
    int  a, b, c, d, e ;
    printf("escreva o valor a:  ");
    scanf("%i", &a);
    printf("escreva o valor b:  ");
    scanf("%i", &b);
    printf("escreva o valor c:  ");
    scanf("%i", &c);
    printf("escreva o valor d:  ");
    scanf("%i", &d);
    e=a;
    a=d;
    d=e;
    e=b;
    b=c;
    c=e;
    printf("apos realizadas as trocas temos a, b, c e d respectivamente:  \n a: %i", a);
    printf("\n b: %i", b);
    printf("\n c: %i", c);
    printf("\n d: %i", d);
}

