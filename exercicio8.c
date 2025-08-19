#include <stdio.h>;
// desafio bônus 

int main(){
    int n, i; // declaração da variável N (para n número de termos) e i para o contador;
    float soma=0, media, maior, menor; 

    printf("Quantos N termos deseja inserir? ");
    scanf("%d", &n); // lê o número de termos
 
    if(n<=0){
        printf("Número de termos inválido!\n");
        return 1; // encerra o programa
    }

    float numeros[n]; // array para armazenar os números

    //loop for para ler os números
    for(i=0; i<n; i++){
        printf("Digite o %d ° número: ", i+1);
        scanf("%f", &numeros[i]); // lê o número e armazena no array
        soma += numeros[i]; // acumula a soma dos números
    }
    
    // iniciar o maior e menor com o primeiro elemento do array
    maior = menor = numeros[0];

    //loop para o maior e menor numero
    for (i=1; i<n; i++){
        if (numeros[i]>maior){
            maior= numeros[i]; // atualizando o maior número
        }

        if(numeros[i]<menor){
            menor= numeros[i]; // atualizando o menor número
        }
    }

    media=soma/n; // calculando a média

    printf("Foram lidos %d números.\n", n);
    printf("A soma dos números é %.2f\n", soma);
    printf("A média dos números é %.2f\n", media);
    printf("O maior número é %.2f\n", maior);
    printf("O menor número é %.2f\n", menor);

    return 0; 

}

