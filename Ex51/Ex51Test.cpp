/*Faça uma função que receba uma matriz de 3 x 3 elementos. Calcule e retorne a soma ˜
dos elementos que estao na diagonal secundária.*/


#include <iostream>
#include "Ex51.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testsomaDiagonalSecundaria, testsomaDiagonalSecundaria){
    int soma = 0,
        mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}};

    for(int i = 3; i >= 0; i--){
        for(int j = 3; j > 0; j--){
            if(j == i){
                soma+=matriz[i][j];
            }
        }
    }
   EXPECT_EQ(somaDiagonalSecundaria(mat),soma)
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}