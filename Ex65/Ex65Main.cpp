/*Implemente a função a qual recebe duas strings, str1 e str2, e um valor inteiro positivo
N. A funçãoo concatena não mais que  N caracteres da string apontada por str2 a string `
apontada por str1 e termina str1 com NULL.*/

#include <iostream>
#include "Ex65.h"
#include <string>

using namespace std;


int main(){
    string str1 = "Olá ",
           str2 = "Mundo";
    int n = 4;

    cout << ConcatString(str1,str2, n);
}