#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex3/inc/Ex3.h"

using namespace std;

int main(){
    int num;
    cout << "Digite um numero para ser verificado se e positivo(1) ou negativo(-1) ou igual a zero(0)" << endl;
    cin >> num;
    cout << verificaPositivoNegativo(num);
}