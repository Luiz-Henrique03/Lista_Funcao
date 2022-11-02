/*Faça uma função que receba um vetor de inteiros e retorne o maior valor*/

#include <iostream>
#include "Ex41.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testRetornaMaiorValor, testRetornaMaiorValor){
    int vetor[10] {8,9,5,7,6,21,7,3,2,78};
    EXPECT_EQ(78,RetornaMaiorValor(vetor));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}