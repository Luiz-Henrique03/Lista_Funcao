/*Escreva uma função que receba um número inteiro maior do que zero e retorne a soma ´
de todos os seus algarismos. Por exemplo, ao numero 251 corresponder a o valor 8 (2 ´
+ 5 + 1). Se o numero lido não for maior do que zero, o programa terminará com a ´
mensagem “Numero inválido”.*/

#include <iostream>
#include "Ex12.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testSomaAlgarismo,testSomaAlgarismo){
    EXPECT_EQ(SomaAlgarismo(251),8);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}