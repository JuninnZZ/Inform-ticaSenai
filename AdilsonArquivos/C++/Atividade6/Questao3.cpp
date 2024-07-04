#include <iostream>

using namespace std;

int main()
{
    int escolha;
    
    do{
        
        cout << "Voce chegou em um ponto determinante na sua jornada, escolha um caminho para seguir: " << endl;
        cout << "1 - Uma porta misteriosa! " << endl << "2 - Túnel escuro!" << endl;
        cin >> escolha;
        
        if (escolha == 1){
            
            cout << "Dentro da porta tinha... " << endl << "A produção do filme de The last of Us e eles ficaram bravo com você por quebrar a quarta parede" << endl;;
            
        }else if (escolha == 2){
            cout << "Você apenas seguiu o roteiro!" << endl;
        
            
        }else{
            system ("clear");
            cout << "Escolha uma opcao correta!" << endl;
        }
        
    }while(escolha != 1 && escolha != 2);
    
   
    return 0;
}