/*Faça uma função ‘Troque’, que recebe duas variáveis reais A e B e troca o valor delas ´
(i.e., A recebe o valor de B e B recebe o valor de A).*/

#include <iostream>
#include "Ex39.h"
#include <cmath>

using namespace std;

int Trocar(int &a, int &b){
   int aux = b;
   b = a;
   a = aux;
   return a,b;
}

