#include <stdio.h>
// soma e media de numeros inteiros
 int main(){
    int a, b, c, soma, media;
    printf("Digite 1 numero inteiro: ");
    scanf("%d", &a);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &b);

    printf("Digite mais um numero inteiro: ");
    scanf("%d", &c);

    soma=a+b+c;
    
    printf("A soma eh: %d\n", soma);

    media=soma/3.0;

    printf("A media eh: %d", media);

    return 0;



 }
