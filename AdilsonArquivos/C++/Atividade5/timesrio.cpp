#include <iostream>

using namespace std;

int main()
{
    int times;
    
    do {
        
    cout<<"=========================================="<< endl <<"Qual time é o maior do Rio de Janeiro: "<< endl << "1. Flamengo" << endl << "2. Fluminense" << endl << "3. Botafogo" << endl << "4. Vasco"<< endl << "==========================================" <<endl;
    cin >> times;
    switch(times){
        case 1: cout << "Você é modinha ou se não realmente sabe de futebol"<< endl;
        break;
        case 2: cout << "Você e iludido e não aceita ter o mesmo tamanho q o Vasco"<< endl;
        break;
        case 3: cout << "Seu time só sabe pipocar e o ultimo titulo eu nem era nascido" << endl;
        break;
        case 4: cout << "mesma coisa q Fluminense a unica diferença q seu time é ruim." << endl;
        break;
        
    default:
    system ("clear");
        cout <<"Numero invalido, tente novamente!"<< endl ;
        
        
    }
        
    } while (times < 1 || times > 4);
    
    return 0;
}