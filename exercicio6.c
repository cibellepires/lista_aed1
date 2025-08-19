#include <stdio.h>
// verificar se um numero é par ou impar
int main(){
    int i;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &i);

    if ( i % 2 == 0) { 
        printf("O numero %d eh par", i);}

    else {
        printf("o numero %d eh impar", i);}

    return 0;

}
