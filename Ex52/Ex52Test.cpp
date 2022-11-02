/*Escreva uma funcao que recebe uma matriz quadrada de ordem N e calcule a sua trans- ˜
posta (se B e a matriz transposta de A então aij = bji).*/


#include <iostream>
#include "Ex52.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testTransposta, testTransposta){
    int a[2][3] = {{1,4,5},{7,9,8}},
    b[3][2] = {{0,0},{0,0},{0,0}};
    
    Transposta(a,b);
    EXPECT_NE(a,b);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}