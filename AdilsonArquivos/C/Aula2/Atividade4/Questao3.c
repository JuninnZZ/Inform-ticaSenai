#include <stdio.h>

char usar_habilidade () {
    
    char resposta;
    
    printf ("Você quer usar o avião do 11.09.2001?\n s ou n?");
    scanf ("%s", &resposta);
    
    if ( resposta == 's'){
        while (resposta == 's'){
            printf("Voce fez um ataque terrorista!\n");
            printf("Gostaria de fazer outro ataque?\n");
            scanf ("%s", &resposta);
            
        }
    }
        else{
            printf("Parabens voce deixou a culpa apenas para o celso portioli!");
        }

 
    
   
}
    
    int main() {
    
    printf("Exercício 3:\n");
  usar_habilidade();

    return 0;
}