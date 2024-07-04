#include <iostream>
#include <cstdlib> 

using namespace std;

int main()
{
    int numero_aleatorio = rand()% 100;
    int palpite; 
    int tentativa = 1;
    
    do {  
    cout << "tentativa "<< tentativa << endl << "Digite um numero aleatorio de 0 a 100: ";
    cin >> palpite;
    
        
        if (palpite < numero_aleatorio) {
        cout << "O numero é maior!"<< endl;
        tentativa++;
        }
        else if (palpite > numero_aleatorio) {
            cout << "O numero é menor"<< endl;
            tentativa++;
        }
        
    } while (palpite != numero_aleatorio);
        if (palpite == numero_aleatorio) {
        cout << "Paraboins, você acertaste em: " << tentativa << " tentativas";
    }    
    else {
        cout << "você errou, o seu numero era: "<< numero_aleatorio; 
    }
    return 0;
}
