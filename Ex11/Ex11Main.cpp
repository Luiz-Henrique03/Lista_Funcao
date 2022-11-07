/*Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. ˆ
Se a letra for A, a função deverá calcular a m ´ edia aritmética das notas do aluno; se for P, ´
devera calcular a média ponderada, com pesos 5, 3 e 2.*/


#include <iostream>
#include "Ex11.h"

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