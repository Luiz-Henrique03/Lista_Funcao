#include <iostream>

using namespace std;

double calcMedia(double nota1,double nota2,double nota3, char a){
   if(a == 'A') return nota1 + nota2 + nota3 / 3;
   else if (a == 'P') return (nota1 * 5) + (nota2 * 3) + (nota3 * 2);
}

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