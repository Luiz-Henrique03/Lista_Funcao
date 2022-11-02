/*Faça uma função não-recursiva que receba um número inteiro positivo N e retorne o ´
superfatorial desse numero. O superfatorial de um número N é definida pelo produto dos ´
N primeiros fatoriais de N. Assim, o superfatorial de 4 e´ sf(4) = 1! * 2! * 3! * 4! = 288.
*/

#include <iostream>
#include "Ex36.h"

using namespace std;

int SuperFat(int n){
    int Super = 1;
    int fatorial = 1;

    for(int i = 1; i <= n; i++){

        fatorial*= i;
    }

    return fatorial * fatorial / 2;
}

