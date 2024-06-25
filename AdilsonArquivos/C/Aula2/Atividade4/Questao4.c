#include <stdio.h>
int recuperar_energia(){
    int energia= 100;
    return energia;
}

    int main() {
        
    printf("Exercício 4 \n");
    
    
    int estamina = recuperar_energia();
    for( int i= 1; i <= estamina; i++) {
        printf("Sua energia está carregando aos poucos\n");
        printf("Está em %i\n ",i);
    }
    printf("Sua energia foi recuperada!");
 
    return 0;
}
