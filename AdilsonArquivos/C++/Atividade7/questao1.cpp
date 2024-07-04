
#include <iostream>
 using namespace std;

 int main (){

    int macas[50], paes[100], leite[30];
    int totalmacas = -1, totalpaes = -1, totalleite = -1;
    int comprarmaca, comprarpaes, comprarleite;
    int x = 49, z=49, a=49;
    int opcaomaca;

    cout << "Comprar macas? (1 - sim / 2 - nao)" << endl;
    cin >> opcaomaca;

    if (opcaomaca == 1)
    {
    for (int i=0; i<=50; i++){
        macas[i]=1;
        totalmacas += 1;
    }
    cout << "Total de macas em estoque: " << totalmacas << endl;

     cout << "Quantas macas voce gostaria de comprar? " << endl;
     cin >> comprarmaca;

     for (int y = comprarmaca; y > 0; y--){
        macas[x]=0;
        x--;
       totalmacas -= 1;
     }
     cout << endl <<"Estoque de macas em fileira: "<< endl;
      for (int i=0; i<50; i++){
        cout << macas[i] << " maca"<< endl;
        
    }
    cout << "Sobrou " << totalmacas << " macas no estoque" << endl;
    }

    int opcaopaes;

    cout << "Comprar paes? (1 - sim / 2 - nao)" << endl;
    cin >> opcaopaes;


    if (opcaopaes==1){
        system ("cls");
    for (int i=0; i<=100; i++){
        paes[i]=1;
        totalpaes += 1;
    }
    cout << "Total de paes em estoque: " << totalpaes << endl;

     cout << "Quantas paes voce gostaria de comprar? " << endl;
     cin >> comprarpaes;

     for (int o = comprarpaes; o > 0; o--){
        paes[z]=0;
        z--;
       totalpaes -= 1;
     }
     cout << endl <<"Estoque de paes em fileira: "<< endl;
      for (int i=0; i<50; i++){
        cout << paes[i] << " pao"<< endl;
        
    }
    cout << "Sobrou " << totalpaes << " paes no estoque" << endl;
    }


    int opcaoleite;

    cout << "Comprar leite? (1 - sim / 2 - nao)" << endl;
    cin >> opcaoleite;


    if (opcaoleite==1){
        system ("cls");
    for (int i=0; i<=30; i++){
        leite[i]=1;
        totalleite += 1;
    }
    cout << "Total de leites em estoque: " << totalleite << endl;

     cout << "Quantas leites voce gostaria de comprar? " << endl;
     cin >> comprarleite;

     for (int p = comprarleite; p > 0; p--){
        leite[a]=0;
        a--;
       totalleite -= 1;
     }
     cout << endl <<"Estoque de leite em fileira: "<< endl;
      for (int i=0; i<50; i++){
        cout << leite[i] << " leite"<< endl;
        
    }
    cout << "Sobrou " << totalleite << " leites no estoque" << endl;
    }
    return 0;

 }