/*Faça uma função que receba como parâmetro o valor de um  angulo em graus e calcule ˆ
o valor do cosseno hiperbolico desse ângulo usando sua respectiva série de Taylor: ´
3
cosh x = P∞ n=0 x 2n (2n)! = 1 +  2 2! + x 4 4! + . . . para todo x
onde x e o valor do ´ angulo em radianos. Considerar ˆ π = 3.141593 e n variando de 0
ate 5. */

#include <iostream>
#include <cmath>
#include "Ex30.h"
#include <gtest/gtest.h>



TEST(TestcalcSeno,TestcalcSeno){
    EXPECT_EQ(calcCosseno(8),203.667);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}