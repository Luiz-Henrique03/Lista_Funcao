/* Faça uma função que recebe, por parâmetro, uma matriz A[3][3] e retorna a soma dos ˆ
elementos da sua diagonal principal e da sua diagonal secundaria*/

#include <iostream>
#include "Ex55.h"
#include <gtest/gtest.h>



TEST(testSomaDiagonalPrincipaleSecundaria, testSomaDiagonalPrincipaleSecundaria){
    int mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}},
        somaEsperada = 38;
    EXPECT_EQ(SomaDiagonalPrincipaleSecundaria(mat), somaEsperada);

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}