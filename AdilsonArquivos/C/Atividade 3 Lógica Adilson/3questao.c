#include <stdio.h>

int main () {
    
    float dinheiro = 89.90;
    char inicial = 'a';
    double pi = 3.14159265359;
    
    printf ("Segredos ocultos: \n");
    printf ("Valor em reais: %.2f \n", dinheiro);
    printf ("O nome começa com: %c \n", inicial);
    printf ("Valor em reais: %.11lf \n", pi);

    return 0;
}
