/*Faça uma função que receba por parâmetro dois valores  X e Z. Calcule e retorne o
resultado de XZ para o programa principal. Atenção não utilize nenhuma função pronta ˜
de exponenciação.*/

#include <iostream>
#include "Ex18.h"

using namespace std;



int main(){
    int x,
        z;
    
    cout << "Informe o valor de X e o valor de Z, respectivamente: " <<endl;
    cin >> x;
    cin >> z;

    cout << Exponenciacao(x,z);
}