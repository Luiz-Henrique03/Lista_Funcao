/*Faça uma função e um programa de teste para o cálculo do volume de uma esfera. ´
Sendo que o raio e passado por par ´ ametro. ˆ
V = 4/3 ∗ π ∗ R3*/

#include <iostream>
#include <cmath>
#include "Ex5.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testVolume,testVolume){
    EXPECT_EQ(CalculaVolume(3), 84.78);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}