#include <iostream>

using namespace std;

int main()
{
    int escolha;
    
    do{
        
        cout << "Voce chegou em um ponto determinante na sua jornada, escolha um caminho para seguir: " << endl;
        cout << "1 - Floresta Encantada! " << endl << "2 - Montanhas do Destino!" << endl;
        cin >> escolha;
        
        if (escolha == 1){
            
            cout << "Voce escolheu a floresta encantada, voce enfrentara elfos furiosos!" << endl;
            
        }else if (escolha == 2){
            cout << "Voce escolheu as Montanhas do Destino, voce enfrentara as moiras!" << endl;
        
            
        }else{
            system ("clear");
            cout << "Escolha uma opcao correta!" << endl;
        }
        
    }while(escolha != 1 && escolha != 2);
    
   
    return 0;
}