#include <iostream>

using namespace std;


int main ()
{
  int numero;
       
    cout << "Digite um numero inteiro: ";
    cin >> numero; 

if (numero <=1){
    cout << "Número não é primo";
    return 0;
} else {
    for (int i = 2; i < numero; i++ ){
        if (numero % i == 0){
                cout << "Número não é primo";
return 0;

        }
    }
}
                cout << "Número é primo";

  return 0;
}
