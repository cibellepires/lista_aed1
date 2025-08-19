#include <stdio.h>
// tradução de um código python para linguagem C
int main(){
    int numero, triplo; //declarando as variaveis para o número e seu triplo

    printf("Digite um número inteiro: ");
    scanf("%d", &numero); //lê o número inteiro

    triplo=numero*3; //calcula o triplo do número
    printf("O triplo do número é: %d\n", triplo); //imprime o resultado
    return 0;
}