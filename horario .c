#include<stdio.h>
int main (){

    float n1, n2, n3, media;


    printf("digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media =((n1 +n2+n3)/3.0);

    if (media >8)
    printf("Aprovado com Ditinção");
    if (media >=6)
    printf("Aprovado direto. ");
    else if (media>=4)
    printf("Vai para final.  ");
    else if (media<4)
    printf("Reprovado direto. ");

    return 0;
    }

