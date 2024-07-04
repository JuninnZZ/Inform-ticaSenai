#include <iostream>
#include <queue>

using namespace std;

int main (){
    queue<int> fila;

    fila.push(5);
    fila.push(8);
    fila.push(3);

    int valor1 = fila.front();
    fila.pop();
    int valor2 = fila.front();
    fila.pop();
    int valor3 = fila.front();

    cout << "Valores retirados da fila: " << valor1 << ", " << valor2 << endl;
    cout << "Sobrou o valor: " << valor3 << " na fila." << endl;

    return 0; 
}