#include<stdio.h>

 int main ()

 {
    int a, b, c, d;
    int e, f, g, h, i, j, k, l, m, n, o, p;
    printf("escreva o valor a:  ");
    scanf("%i", &a);
    printf("escreva o valor b:  ");
    scanf("%i", &b);
    printf("escreva o valor c:  ");
    scanf("%i", &c);
    printf("escreva o valor d:  ");
    scanf("%i", &d);
    e=a*b;
    f=a+b;
    g=a*c;
    h=a+c;
    i=a*d;
    j=a+d;
    k=b*c;
    l=b+c;
    m=b*d;
    n=b+d;
    o=c*d;
    p=c+d;

    printf("\na * b: %i", e);
    printf("\na + b: %i", f);
    printf("\na * c: %i", g);
    printf("\na + c: %i", h);
    printf("\na * d: %i", i);
    printf("\na + d: %i", j);
    printf("\nb * c: %i", k);
    printf("\nb + c: %i", l);
    printf("\nb * d: %i", m);
    printf("\nb + d: %i", n);
    printf("\nc * d: %i", o);
    printf("\nc + d: %i", p);
 }
