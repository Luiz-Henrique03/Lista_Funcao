/*Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. ˆ
Se a letra for A, a função deverá calcular a m ´ edia aritmética das notas do aluno; se for P, ´
devera calcular a média ponderada, com pesos 5, 3 e 2.*/

#include <iostream>
#include "Ex11.h" 
#include <gtest/gtest.h>

using namespace std;


TEST(testCalcmedia,testCalcmedia){
    EXPECT_EQ(calcMedia(8,3,10,'A'), 7);
    EXPECT_EQ(calcMedia(8,3,10,'P'), 6.6);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}