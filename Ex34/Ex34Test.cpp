/*Faça uma função não-recursiva que receba um número inteiro positivo impar N e retorne ´
o fatorial duplo desse numero. O fatorial duplo é definido como o produto de todos os ´
numeros naturais  ´ımpares de 1 ate algum número natural ´ımpar N. Assim, o fatorial duplo
de 5 e:´ 5!! = 1 * 3 * 5 = 15*/

#include <iostream>
#include "Ex34.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testFatorialDuplo, testFatorialDuplo){
    EXPECT_EQ(FatorialDuplo(5),15);
}

int main(int argc, char **argv){
 cout << FatorialDuplo(5);
}