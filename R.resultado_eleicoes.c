#include<stdio.h>

float main()
{
    float a, b, c, n, br, t;
    float pvv, pa, pb, pc, pn, pbr;
    printf("escreva o numero de votos para o canditato a:");
    scanf("%f", &a);
    printf("escreva o numero de votos para o canditato b:");
    scanf("%f", &b);
    printf("escreva o numero de votos para o canditato c:");
    scanf("%f", &c);
    printf("escreva o numero de votos nulos:");
    scanf("%f", &n);
    printf("escreva o numero de votos brancos:");
    scanf("%f", &br);
    t=a+b+c+n+br;
    pvv=((a+b+c)/t)*100;
    pa=(a/t)*100;
    pb=(b/t)*100;
    pc=(c/t)*100;
    pn=(n/t)*100;
    pbr=(br/t)*100;
    printf("total de votos: %f", t);
    printf("\npercentual de votos validos: %.2f%%",pvv);
    printf("\npercentual de votos para a: %.2f%%",pa);
    printf("\npercentual de votos para b: %.2f%%",pb);
    printf("\npercentual de votos para c: %.2f%%",pc);
    printf("\npercentual de votos nulos: %.2f%%",pn);
    printf("\npercentual de votos brancos: %.2f%%",pbr);
}


