/*Faça uma função que verifica se uma matriz quadrada de ordem N é a matriz identidade.*/


#include <iostream>
#include "Ex53.h"
#include <gtest/gtest.h> 

using namespace std;



TEST(testVerificaMatrizIdentidade, testVerificaMatrizIdentidade){
    int mat[3][3] = {{4,5,6},{3,9,7},{1,2,8}};
    int matIdentidade[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    ASSERT_TRUE(VerificaMatrizIdentidade(matIdentidade));
    ASSERT_FALSE(VerificaMatrizIdentidade(mat));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}