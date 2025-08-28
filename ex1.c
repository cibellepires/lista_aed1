#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 23;
    int *pont = &num;

    printf("Valor do ponteiro: %d\n", *pont);

    printf("Endereço: %p\n", pont); 
}