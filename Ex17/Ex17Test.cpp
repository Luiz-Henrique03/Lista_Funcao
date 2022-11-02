/*Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a ˆ
soma dos N numeros inteiros existentes entre eles.*/

#include <iostream>
#include "Ex17.h" 
#include <gtest/gtest.h>

using namespace std;

TEST(testSomaEntre,testSomaEntre){
    EXPECT_EQ(SomaEntre(4,7),15);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}