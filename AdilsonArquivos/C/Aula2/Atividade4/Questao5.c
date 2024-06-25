#include <stdio.h>
int aviso_cidade_pegando_fogo(){
    
    int fogo=0;
    while (fogo < 10){
        printf("A cidade esta pegando fogo!\n");
        fogo++;
    }
    printf ("A situação foi controlada!");
}

    int main() {
        
    printf("Exercício 5 \n");
    aviso_cidade_pegando_fogo();
    
  
    return 0;
}

