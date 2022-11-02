/*Escreva uma função para determinar a quantidade de números primos abaixo N.*/


#include <iostream>
#include <gtest/gtest.h>

using namespace std;
 
int qtdPrimo(int n){
    int contador = 0,
        qtdPrimo = 0;
    while(contador <= n){
       if(contador%2!=0){
          qtdPrimo++;
       }
       contador++;
    }

    return qtdPrimo;
}

TEST(testQtdprimo,testQtdprimo){
    EXPECT_EQ(qtdPrimo(10),5);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}