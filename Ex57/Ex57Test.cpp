/*Faça uma função que recebe, por parâmetro, uma matriz A[7][6] e uma coluna N e retorne ˆ
a soma dos elementos dessa coluna.*/

#include <iostream>
#include "Ex57.h"
#include <gtest/gtest.h>


TEST(testSomaLinha,testSomaLinha){
    int mat[7][6] = {{4,5,6,7,8,9},{1,3,3,10,9,7},{1,2,8,1,4,5},{1,5,7,8,4,5},{6,5,7,8,9,2},{4,7,8,9,1,2},{3,4,7,8,1,2}},
        somaEsperada = 8,
        coluna = 3;

    EXPECT_EQ(SomaColuna(mat,coluna),somaEsperada);

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}