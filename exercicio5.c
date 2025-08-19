#include <stdio.h>
// conversão de temperatura de Celsius para Fahrenheit
int main(){
    float celsius, fahrenheit; //declaração das variáveis para Celsius e Fahrenheit

    printf("Digite a temperatura em Celsius: ");
    scanf("%f ", &celsius); //lendo o valor em celsius

    fahrenheit= (celsius*9.0/5.0)+32; //conversão de Celsius para Fahrenheit
    printf("A temperatura em Fahrenheit é: %.2f °F\n", fahrenheit); //resultado da conversão
    return 0;
}