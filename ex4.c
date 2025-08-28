#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *dados;
    int tamanho; //elementos ocupados
    int capacidade; //elementos disponiveis
}VetorDinamico;

//inicialização

int main(){
    VetorDinamico vetor;
    Inicilizar(&vetor);

    for (int i = 1; i<=100; i++){
        push_back(&vetor, i);

        //mostrar evolução da capacidade a cada 10 inserções
        printf("Após %d inserções: tamanho= %d, capacidade=%d\n", i, size(&vetor), vetor.capacidade);

    }


return 0;
}
