/*Faça um algoritmo que receba um numero inteiro positivo  n e calcule o seu fatorial, n!.*/

#include <iostream>
#include "Ex20.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testFatorial, testFatorial){
   EXPECT_EQ(fatorial(5),120);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}