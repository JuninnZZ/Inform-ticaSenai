#include <iostream>
#include <queue>
using namespace std;


int main () {

     queue <string> missoes;
     string concluida, concluir;

     missoes.push("salvar_um_gato");
     missoes.push("salvar_uma_senhora");
     missoes.push("salvar_um_predio_em_chamas");

     cout << "Lista de missoes: "<< endl;

     queue <string> listacopia = missoes; 

    while (!listacopia.empty()) {
     cout << listacopia.front() << endl;
     listacopia.pop() ;
    }

    queue <string> listacopia2 = missoes;

    cout << "Alguma missao foi concluida? (sim/nao)" << endl;
    cin >> concluir;

    if(concluir=="sim"){

    cout << "Qual missao foi concluida?" << endl;
    cin >> concluida;
  
    do{
    if (concluida == listacopia2.front())
    {
        cout << "A missao: " << listacopia2.front() << " foi concluida" << endl;
    }else{
        cout << "A missao: " <<listacopia2.front() << " ainda nao foi concluida" << endl;
    }
    listacopia2.pop();
    
    } while(!listacopia2.empty());

    }else{
        system("cls");
        cout << "Nenhuma missao foi concluida" << endl;
        cout << "Lista atual de missoes:" << endl;

     queue <string> listacopia3 = missoes;    
        while (!listacopia3.empty()) {
     cout << listacopia3.front() << endl;
     listacopia3.pop() ;
    }
    }
   

     return 0;
     

}