/*Faça uma função que recebe, por parâmetro, uma matriz A[4][4] e retorna a soma dos ˆ
seus elementos.
*/

#include <iostream>
#include "Ex54.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testSomaMatriz, testSomaMatriz){
    int mat[4][4] = {{4,5,6,10},{3,9,7,5},{1,2,8,6},{1,2,8,6}},
        somaEsperada = 84;
    EXPECT_EQ(SomaMatriz(mat), somaEsperada);

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}