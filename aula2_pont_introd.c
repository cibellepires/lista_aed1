#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int *p= &x; //p recebe o endereço de x

    // & operador de endereço e * operador de indireção

    printf("Valor do ponteiro: %d\n", *p);

    printf("Endereço: %p\n", p); 


}