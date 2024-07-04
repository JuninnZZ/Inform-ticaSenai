#include <iostream>

using namespace std;

int main()
{
    int dia;
    
    
    do{
    cout << "Digite o numero do dia da semana (1 a 7)" << endl;
    cin >> dia;
    
    switch (dia){
        case 1:
        cout << "O dia eh domingo!";
        break;
         case 2:
        cout << "O dia eh segunda!";
        break;
         case 3:
        cout << "O dia eh terca!";
        break;
         case 4:
        cout << "O dia eh quarta!";
        break;
         case 5:
        cout << "O dia eh quinta!";
        break;
         case 6:
        cout << "O dia eh sexta!";
        break;
         case 7:
        cout << "O dia eh sabado!";
        break;
        default:
        cout << "Dia inválido" << endl;
    }
    }while(dia<1 || dia>7);
    
    
    
    
    return 0;
}