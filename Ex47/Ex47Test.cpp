/*Faça uma função que receba uma matriz 4 x 4 e retorne quantos valores maiores do que ˜
10 ela possui.
*/



#include <iostream>
#include "Ex47.h"
#include <gtest/gtest.h>




TEST(testMatriz, testMatriz){
    int matriz[4][4] = {{4,15,48,35},{87,94,5,3},{7,8,1,20},{3,5,54,12}};
    int qtdDez = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] > 10){
                qtdDez++;
            }
        }
    }

    EXPECT_EQ(Matriz(matriz),qtdDez);

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}