#include <stdio.h>
// calculo da área de uma circunferência
int main(){
    const float PI = 3.14159; //define a constante PI
    float raio, area; //declarando as variáveis para raio e área

    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &raio); //lê o valor do raio

    area=PI*raio*raio; //calculo da area da circunferência
    printf("A área da circunferência é: %.2f\n", area); //imprime o resultado 
    return 0;
}
