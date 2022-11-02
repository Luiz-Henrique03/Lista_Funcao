/*Faça um programa que faça operac¸oes simples de frações: 
• Crie e leia duas frac¸oes ˜ p e q, compostas por numerador e denominador.
• Encontre o maximo divisor comum entre o numerador e o denominador, e simplifi- ´
que as frações. 
• Apresente a soma, a subtração, o produto e o quociente entre as frações lidas. ˜
Obs.: Cria uma func¸ao para cada item.*/

#include <iostream>
#include "Ex69.h"

int main(){
    int num1 = 4,
        num2 = 2,
        num3 = 6,
        num4 = 2;

    Fracao1 f1;
    Fracao2 f2;

    Criafracao(f1,f2,num1,num2,num3,num4);
}