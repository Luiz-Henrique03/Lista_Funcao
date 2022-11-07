/*Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação: ˜
hipotenusa =
√
a
2 + b
2. Faça uma função que receba os valores de  a e b e calcule o
valor da hipotenusa atraves da equação. */

#include <iostream>
#include <cmath>
#include "Ex8.h"
#include <gtest/gtest.h>


using namespace std;


EXPECT_EQ(testHipotenusa, testHipotenusa){
    EXPECT_EQ(Hipotenusa(4,6), 7.2111);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}