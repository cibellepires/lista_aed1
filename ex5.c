#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Aluno
typedef struct {
    int id;
    char nome[50];
    float notas[3];
    float media;
} Aluno;

int main() {
    int n, i, j;
    Aluno *turma;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    // Alocação dinâmica de memória para a turma
    turma = (Aluno*) malloc(n * sizeof(Aluno));
    if (turma == NULL) {
        printf("Erro: Memória insuficiente!\n");
        return 1;
    }

    // Leitura dos dados dos alunos
    for (i = 0; i < n; i++) {
        turma[i].id = i + 1;
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        // O espaço antes do %[^\n] consome o caractere de nova linha (\n)
        // que sobrou do scanf anterior, evitando que ele pule a leitura do nome.
        scanf(" %[^\n]", turma[i].nome);
        
        turma[i].media = 0;
        for (j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &turma[i].notas[j]);
            turma[i].media += turma[i].notas[j];
        }
        turma[i].media /= 3;
    }

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d | Nome: %s | Média: %.2f\n",
               turma[i].id, turma[i].nome, turma[i].media);
    }

    // Liberação da memória alocada
    free(turma);

    return 0;
}