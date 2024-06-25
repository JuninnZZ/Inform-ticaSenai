#include <stdio.h>


    
    int nivel (int monstro){
        int dificuldade;
        printf ("Selecione a dificuldade: \n 1 - Fácil \n 2 - Difícil\n\n");
        scanf ("%i",&dificuldade);
        
        if (dificuldade == 1){
            monstro = 60;
            
        }
        if (dificuldade == 2){
            monstro = 120;
            
        }
        return monstro;
    }
    
    int main() {
    
   
    int ataque, espada = 40, arco = 60, turno = 1;
    
    printf("Exercício 1:\n");
    int vida = nivel (vida);
    
    printf("\n======================== \n");
    printf("1 - Ataque de espada\n");
    printf("2 - Ataque de arco\n");
    printf("========================\n");
    
    
    for(int vidamonstro = vida; vidamonstro >0 ; ){
        
        printf ("\n\nturno #%i\n",turno);
        turno++;
        printf("Digite o numero do ataque desejado:\n" );
        scanf("%i",&ataque);
        
        if (ataque == 1){
            vidamonstro -= espada;
            printf ("O guerreiro utilizou a espada, monstro tomou 40 de dano!\n");
        }
        if (ataque == 2){
            vidamonstro -= arco;
            printf ("O guerreiro utilizou o arco, monstro tomou 60 de dano!\n");
        }
        
    }
    printf ("\nSucesso o monstro foi derrotado!");

    return 0;
}