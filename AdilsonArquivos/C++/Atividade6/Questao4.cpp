#include <iostream>

using namespace std;

int main()
{
    int escolha;
    
    do{
       cout << "Tabela dos feiticos:" << endl << "1 - Fogo" << endl << "2 - Gelo" << endl;
       cin >> escolha;
       
       switch (escolha){
           case 1: 
           system ("clear");
           cout << "O mago de fogo venceu! Utilizou o feitico de fogo e derrotou o mago de gelo!";
           break;
           case 2:
           system ("clear");
           cout << "O mago de gelo venceu! Utilizou o feitico de gelo e derrotou o mago de fogo!";
           break;
           default:
           system ("clear");
           cout << "Utilize um feitico da tabela!" << endl;
       }
       
        
    }while(escolha != 1 && escolha != 2);
    
   
    return 0;
}