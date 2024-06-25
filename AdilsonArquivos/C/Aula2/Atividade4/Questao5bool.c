#include <stdio.h>
#include <stdbool.h>

int aviso_cidade_pegando_fogo(){
    
   bool fogo = true;
   while (fogo){
       for (int i = 1; i < 10; i++){
           printf ("Tá pegano fogo bixo!\n");
       }
       
       fogo = false;
       printf("O fogo foi controlado!");
   }
   
}

    int main() {
        
    printf("Exercício 5 \n");
    aviso_cidade_pegando_fogo();
    
  
    return 0;
}

