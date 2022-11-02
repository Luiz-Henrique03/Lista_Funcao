/*Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule ˆ
o valor do cosseno desse angulo usando sua respectiva série de Taylor: ´
cos x = P∞ n=0 (−1)n (2n)! x 2n = 1 − x 2 2! + x 4 4! − . . . para todo x,
*/


#include <iostream>
#include <cmath>
#include "Ex28.h"
#include <gtest/gtest.h>

using namespace std;


TEST(TestcalcSeno,TestcalcSeno){
    EXPECT_EQ(calcCosseno(8),201.667);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}