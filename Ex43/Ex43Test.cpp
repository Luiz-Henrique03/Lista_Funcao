/*Faça uma função que receba um vetor de inteiros e o preencha com números aleatórios ´
sem repetição. */


#include <iostream>
#include <ctime>
#include <iomanip>
#include "Ex43.h"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(testPreencheVetor, testPreencheVetor){
    int vetor1[5] = {};
    int vetor2[5] = {};
    PreencheVetor(vetor1);
    PreencheVetor(vetor2);

    EXPECT_NE(vetor1,vetor2)
    
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}