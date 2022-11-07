/*Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5): 
!
!!
!!!
!!!!
!!!!!
*/

#include <iostream>
#include <gtest/gtest.h>
#include "Ex22.h"
#include <string>

using namespace std;


TEST(testImprimePontoExclamacao,testImprimePontoExclamacao){
    EXPECT_EQ(ImprimePontoExclamacao(3), "\n!\n!!\n!!!\n");
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}