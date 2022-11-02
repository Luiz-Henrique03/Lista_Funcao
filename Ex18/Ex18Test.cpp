/*Faça uma função que receba por parâmetro dois valores  X e Z. Calcule e retorne o
resultado de XZ para o programa principal. Atenção não utilize nenhuma função pronta ˜
de exponenciação.*/

#include <iostream>
#include "Ex18.h"
#include <gtest/gtest.h>


TEST(testExponenciacao, testExponenciacao){
    EXPECT_EQ(Exponenciacao(2,2),4);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}