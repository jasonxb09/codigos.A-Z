#include<stdio.h>

int main()
{
    int  a, b, c ;
    printf("escreva o valor a:  ");
    scanf("%i", &a);
    printf("escreva o valor b:  ");
    scanf("%i", &b);
    c=a;
    a=b;
    b=c;
    printf("apos realizadas as trocas temos a e b respectivamente:  \n a: %i", a);
    printf("\n b: %i", b);
}
