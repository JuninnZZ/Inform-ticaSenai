#include <stdio.h>

//Função que recebe dois inteiros e retorna a soma deles
int somar (int a, int b) {
    int resultado = a + b;
 
    return resultado;
}

int main (){
    int x= 5;
    int y= 3;
    
    int soma = somar(x, y);
    printf("Aqui o tchai %d aqui tchome %d aqui é tchai e aqui e tchome %d\n", x, y, soma);

    return 0;
}