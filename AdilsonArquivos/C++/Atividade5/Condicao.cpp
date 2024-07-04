#include <iostream>

using namespace std;

int main()
{
    int notas;
    
    do{
    cout << "Qual foi a nota do aluno?" << endl;
    cin >> notas;
    if (notas<0 || notas>100){
        cout << "Nota invalida, insira uma nota de 0 a 100" << endl;
    }
    }while(notas<0 || notas >100);
    
    if (notas==100){
        cout << "O aluno passou com uma nota perfeita!";
    }
    else if (notas <= 99 && notas >=60){
        cout << "O aluno foi aprovado!";
    }
    else if (notas <= 59 && notas>=40){
        cout << "O aluno está de recuperação!";
    }
    else if (notas <=39 && notas >=0){
        cout << "O aluno foi reprovado!";
    }
    
    return 0;
}