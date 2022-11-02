/*Faca uma função que receba uma matriz de 3 x 3 elementos. Calcule e retorne a soma ˜
dos elementos que estão abaixo da diagonal principal.*/

#include <iostream>
#include "Ex49.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testSomaAbaixoDiagonalPrincipal,testSomaAbaixoDiagonalPrincipal){
    int soma = 0,
        mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j < i){
                soma+=matriz[i][j];
            }
        }
    }

    EXPECT_EQ(somaAcimaDiagonalPrincipal(mat),soma);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}