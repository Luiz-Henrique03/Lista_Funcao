/*Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor ´
de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0*/

#include <iostream>
#include "Ex3.h"

using namespace std;

int main(){
    int num;
    cout << "Digite um numero para ser verificado se e positivo(1) ou negativo(-1) ou igual a zero(0)" << endl;
    cin >> num;
    cout << verificaPositivoNegativo(num);
}