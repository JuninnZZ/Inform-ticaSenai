#include <iostream>

using namespace std;

int main()
{
    int niveis;
    
    do{
    cout << "Escolha um nivel: " << endl << "Nivel 1" << endl << "Nivel 2" << endl << "Nivel 3 " << endl << "Nivel 4" << endl << "Nivel 5" << endl;
    cin >> niveis;

        if(niveis == 1) {
            system ("clear");
            int nivel1;
        cout << "Você escolheu o Nivel 1" << endl << "sua jornada será muito tranquila."<< endl;
        
        
        do{
            cout << "Agora escolha: " << endl << "1 - Seguir em frente" << endl << "2 - Fique parado" << endl;
        cin >> nivel1;
        if (nivel1 == 1){
            cout << "Você achou a saida!";
            
        } else if (nivel1 == 2){
            cout << "Você nao achou a saida!";
        } else {
            system ("clear");
            cout << "Escolha uma opção válida!" << endl;
        }
        }while (nivel1 <1 || nivel1>2);
        
        
        }else if (niveis == 2) {
            cout << "Você escolheu o Nivel 2" << endl << "sua jornada será normal." << endl;
        }else if (niveis == 3) {
            cout << "Você escolheu o Nivel 3" << endl << "em sua jornada você encontrará problemas razoaveis." << endl;
        }else if (niveis == 4) {
            cout << "Você escolheu o Nivel 4" << endl << "em sua jornada você encontrará problemas preocupantes." << endl;
        }else if (niveis == 5) {
            cout << "Você escolheu o Nivel 5" << endl << "CORRA O MAIS RAPIDO POSSÍVEL E VAI ATRÁS DA SAIDAAA!!!!!" << endl;
        }
        else {
            system ("clear");
            cout <<"Numero invalido, digite numeros de 1 a 5: " << endl;
            
        } 
        
    } while (niveis <1 || niveis >5); 
 
    
        
        
   
    return 0;
}