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

    do{
    if(concluir == "sim"){

    cout << "Qual missao foi concluida?" << endl;
    cin >> concluida;
  
    do{
    if (concluida == listacopia2.front())
    {
        cout << "A missao: " << listacopia2.front() << " foi concluida" << endl;
        
    }else{
        queue <string> listacopia3=listacopia2;
        if (concluida == listacopia3.front())
    {
        cout << "A missao: " << listacopia3.front() << " foi concluida" << endl;
        listacopia3.pop();
        
    }else{
        queue <string> listacopia4=listacopia3;
        if (concluida == listacopia4.front())
    {
        cout << "A missao: " << listacopia4.front() << " foi concluida" << endl;
        listacopia4.pop();
        
    }
    }
    }
    listacopia2.pop();
    
    } while(!listacopia2.empty());
    cout << "Mais alguma missao foi concluida? (sim/nao)" << endl;
    cin >> concluir;
    }else{
        cout << "Nenhuma missao foi concluida!" << endl;
    }
    

    }while(concluir=="sim");

     return 0;
     

}