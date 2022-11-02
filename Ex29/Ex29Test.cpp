/* Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule ˆ
o valor do seno hiperbolico desse ´ angulo usando sua respectiva s ˆ erie de Taylor: ´
sinh x = P∞ n=0 x 2n+1 (2n+1)! = x + x 3 3! + x 5 5! + . . . para todo x,
onde x e o valor do ´ angulo em radianos. Considerar ˆ π = 3.141593 e n variando de 0
ate 5. */

#include <iostream>
#include <cmath>
#include "Ex29.h"
#include <gtest/gtest.h>

using namespace std;


TEST(TestcalcSeno,TestcalcSeno){
    EXPECT_EQ(calcSenoHiper(8),366.4);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}