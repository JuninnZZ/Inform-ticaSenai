#include <iostream>

using namespace std;


int main ()
{
  float numero1; 
  float numero2;
  char operacao;
  
  
    cout << "Digite o valor do primeiro numero: "<< endl;
    cin >> numero1;
    cout << "Digite o sinal da operação: " << endl;
    cin >> operacao;
    cout << "Digite o valor do segundo numero: "<< endl;
    cin >> numero2;
    
    if (operacao == '+'){
        int soma = numero1 + numero2;
        cout << "O resultado da soma é: " << soma;
    }
    
    else if (operacao == '-'){
        int subtracao = numero1 - numero2;
        cout << "O resultado da subtração é: "<< subtracao;
    }
    
    else if (operacao == '*'){
        int multiplicacao = numero1 * numero2;
        cout << "O resultado da multiplicacão é: "<< multiplicacao;
    }
    
    else if(operacao == '/'){
        float divisao = numero1 / numero2;
        cout << "O resultado da divisão é: "<< divisao;
    }
    
  return 0;
}
