#include <iostream>
#include "Ex11.h"

using namespace std;

double calcMedia(double nota1,double nota2,double nota3, char a){
   if(a == 'A') return nota1 + nota2 + nota3 / 3;
   else if (a == 'P') return (nota1 * 5) + (nota2 * 3) + (nota3 * 2);
}

