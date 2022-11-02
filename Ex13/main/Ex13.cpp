#include <iostream>
#include "/home/luiz/Lista_Funcao/Lista_Funções/Ex13/inc/Ex13.h"

using namespace std;

double Operacoes(double num1,double num2, char a){
   if(a == '+') return num1 + num2;
   else if (a == '-') return num1 - num2;
   else if (a == '*') return num1 * num2;
   else return num1 / num2;
   
}

