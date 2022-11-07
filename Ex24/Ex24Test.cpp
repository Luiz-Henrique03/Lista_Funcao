/*Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exem- ˆ
plo, a saída para n = 6 seria:
*
***
*****
*******
*********
***********
*/


#include <iostream>
#include <gtest/gtest.h>
#include "Ex24.h"

using namespace std;



TEST(testImprimetriangulo,testImprimetriangulo){
    EXPECT_EQ(Imprimetriangulo(3),"\n*\n***\n*****\n");
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}