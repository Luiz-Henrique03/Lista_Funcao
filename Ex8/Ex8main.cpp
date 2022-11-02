#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex8/inc/Ex8.h"
#include <cmath>

using namespace std;


int main(){
    int a,
        b;

    cout << "Digite o valores para os catetos a e b" << endl;
    cin >> a;
    cin >> b;

    cout << Hipotenusa(a,b);
}