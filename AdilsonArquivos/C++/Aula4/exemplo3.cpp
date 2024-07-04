#include <iostream>
using namespace std; 

int main () {
    int numeros[5];
    int x=1;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o #" << x << " numero" << endl;
        cin >> numeros[i];
        x++;
    }
    

    cout <<"Elementos do array: "<< endl;
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}