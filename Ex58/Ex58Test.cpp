/*Faça uma função que receba, por parâmetro, duas matrizes quadradas de orden N, A e ˆ
B, e retorna uma matriz C, tambem por parãmetro, que seja o produto matricial de A e B.*/

#include <iostream>
#include "Ex58.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testProdutoMatricial, testProdutoMatricial){
    int a[4][4] = {{2,1,4,1},{4,7,6,4},{3,2,8,1},{7,6,5,2}},
       b[4][4] = {{5,0,3,2},{2,6,4,7},{4,5,3,2},{6,7,4,1}},
       c[4][4] ={{0}},
       produto = 1;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            produto = a[i][j] * b[i][j];
            c[i][j] = produto;
        }
    }

    EXPECT_EQ(SomaMatriz(c), 100);

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}