#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// A função main é o ponto de entrada de qualquer programa em C.
int main (){
    // setlocale(LC_ALL, ""); é usada para configurar o programa para usar a localização padrão do sistema.
    // Isso é útil para que caracteres especiais, como acentos, sejam exibidos corretamente no console.
    setlocale(LC_ALL, "");

    // Declaração das variáveis:
    int *x;      // 'x' é declarado como um ponteiro para um inteiro. Isso significa que 'x' não armazena um valor inteiro diretamente, mas sim o endereço de memória de uma variável inteira.
    int valor;   // 'valor' é uma variável comum do tipo inteiro.
    int y;       // 'y' é outra variável comum do tipo inteiro.

    valor = 35;  // A variável 'valor' recebe o valor 35.

    // Operações com ponteiros:
    x = &valor;  // O ponteiro 'x' recebe o ENDEREÇO de memória da variável 'valor'.
                 // O operador '&' é o "operador de endereço". Ele retorna o endereço de memória de uma variável.
                 // Agora, dizemos que 'x' "aponta para" 'valor'.

    y = *x;      // A variável 'y' recebe o VALOR que está no endereço de memória para o qual 'x' aponta.
                 // O operador '*' (quando usado desta forma) é o "operador de derreferência". Ele acessa o conteúdo do endereço apontado.
                 // Como 'x' aponta para 'valor', '*x' é o mesmo que o valor de 'valor' (que é 35).
                 // Portanto, 'y' recebe o valor 35.

    // Impressão dos resultados na tela:
    // A função printf é usada para exibir informações formatadas no console.
    // O especificador de formato '%p' é usado para imprimir endereços de memória em formato hexadecimal.
    // O especificador de formato '%d' é usado para imprimir valores inteiros decimais.
    // '\n' é um caractere de nova linha, para que cada printf comece em uma nova linha.

    // Imprime o endereço de memória onde a variável 'valor' está armazenada.
    printf("Endereço da variável comum valor: %p\n", &valor);

    // Imprime o conteúdo do ponteiro 'x'. Como 'x' armazena o endereço de 'valor', este valor será o mesmo da linha anterior.
    printf("Lendo o conteúdo do ponteiro x: %p\n", x);

    // Imprime o endereço de memória da PRÓPRIA variável ponteiro 'x'.
    // Assim como 'valor' tem um endereço, 'x' também é uma variável e ocupa um espaço na memória, tendo seu próprio endereço.
    printf("Endereço da variável ponteiro x: %p\n", &x);

    // Imprime o conteúdo (o valor) da variável para a qual 'x' aponta.
    // Usa-se o operador de derreferência '*' para acessar o valor. Como x aponta para 'valor', isso imprimirá 35.
    printf("Conteúdo da variável apontada por x: %d\n", *x);

    // Imprime o conteúdo da variável 'y', que recebeu o valor apontado por 'x'. Portanto, imprimirá 35.
    printf("Conteúdo da variável comum y: %d\n", y);
}