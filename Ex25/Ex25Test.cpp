/*Faça uma função que receba um inteiro N como parâmetro, calcule e retorne o resultado ˆ
da seguinte serie: ´
S = 2/4 + 5/5 + 10/6 + ... + (N2 + 1)/(N + 3)*/

#include <iostream>
#include "Ex25.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testSequencia, testSequencia){
    EXPECT_EQ(Sequencia(5),30);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}