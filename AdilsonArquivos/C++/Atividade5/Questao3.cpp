#include <iostream>

using namespace std;


int main ()
{
 float lado1;
 float lado2;
 float lado3;
 
 cout << "Digite o valor do primeiro lado: " << endl;
 cin >> lado1;
  cout << "Digite o valor do segundo lado: " << endl;
 cin >> lado2;
  cout << "Digite o valor do terceiro lado: " << endl;
 cin >> lado3;
 
 if( lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){
     cout << "Esses valores podem formar um triangulo!" << endl;
 
 }else{
     cout << "Esses valores nao podem formar um triangulo!" << endl;
 }
 

  return 0;
}
