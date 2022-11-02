/*Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule ˆ
o valor do seno desse ângulo usando sua respectiva série de Taylor: ´
sin x = P∞ n=0 (−1)n (2n+1)!x 2n+1 = x − x 3 3! + x 5 5! − . . . para todo x,*/

#include <iostream>
#include <cmath>
#include "Ex27.h"
#include <gtest/gtest.h>

using namespace std;



TEST(TestcalcSeno,TestcalcSeno){
    EXPECT_EQ(calcSeno(8),358.4);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}