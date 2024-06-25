#include <stdio.h>

int main () {
    
    int num1, num2, soma, subtracao, multiplicacao, divisao, resto;
    
    printf ("Qual o valor do primeiro numero? \n");
    scanf ("%i", &num1);

    printf ("Qual o valor do segundo numero? \n");
    scanf ("%i", &num2);
    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    resto = num1 % num2;
    
    printf ("Operacoes magicas: \n");
    printf ("%i \n", soma);
    printf ("%i \n", subtracao);
    printf ("%i \n", multiplicacao);
    printf ("%i \n", divisao);
    printf ("%i \n", resto);
    
    return 0;
}
