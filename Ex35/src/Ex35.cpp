/*Faça uma função não-recursiva que receba um número inteiro positivo  n e retorne o fatorial quadruplo desse número. O fatorial quádruplo de um número  n e dado por: ´
(2n)!/ n!
*/

#include <iostream>
#include "Ex35.h"

using namespace std;

int fatorialQuad(int n){
    int fatorialQuad = 1;
    int fatorial = 1;

     for(int i = 1; i <= n; i++){
      fatorial *= i;
    }
    for(int i = 1; i <= 2*n; i++){
      fatorialQuad *= i;
    }

    return fatorialQuad / fatorial;
}

