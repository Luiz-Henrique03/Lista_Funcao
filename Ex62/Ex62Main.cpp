/*Crie uma função que calcula o comprimento de uma string e que possui a seguinte
assinatura: void tamanho(char *str, int *strsize).*/

#include <iostream>
#include <string>
#include "Ex62.h"
using namespace std;

int main(){
    int *strsize = new int();
    char str[11] = {"Computador"};

    Tamanho(str, strsize);
    cout << *strsize;
}