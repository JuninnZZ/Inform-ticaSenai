#include <iostream>

using namespace std;

int main()
{
    int heroi;
    
    
    do{
    cout << "===========================" << endl << "HEROIS:" << endl << "1 - Batman" << endl << "2 - Superman" << endl << "3 - Mulher Maravilha" << endl << "===========================" << endl;
    cout << "Escolha o numero de um super-heroi: " << endl;
    cin >> heroi;
    
    switch (heroi){
        case 1:
        cout << "Voce escolheu o batman!" << endl;
        cout << "Habilidades especiais: Milionário com habilidades de luta!";
        break;
         case 2:
        cout << "Voce escolheu o Superman" << endl;
        cout << "Habilidades especiais: Extraterreste com superpoderes!";
        break;
         case 3:
        cout << "Voce escolheu a Mulher-Maravilha" << endl;
        cout << "Habilidades especiais: Grande guerreira amazona com superpoderes!";
        break;
      
        default:
        system("clear");
        cout << "Numero invalido, digite um número disponível na tabela!" << endl;
       
    }
    }while(heroi<1 || heroi>3);
    
    
    
    
    return 0;
}