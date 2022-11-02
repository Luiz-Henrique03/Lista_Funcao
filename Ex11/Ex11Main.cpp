#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex11/inc/Ex11.h"

using namespace std;


int main(){
    double nota1,
           nota2,
           nota3;
    char a = ' ';

    cout << "Informe tres notas: " <<endl;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    cout <<"\n Informe como vai ser feito o calculo da media(A-Aritmetica/B-Ponderada)" <<endl;
    cin >> a;

    cout << calcMedia(nota1,nota2,nota3,toupper(a));

}