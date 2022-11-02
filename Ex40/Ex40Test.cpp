/*Faça uma função que receba um vetor de inteiros e retorne quantos valores pares ele ˜
possui */



#include <iostream>
#include "Ex40.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testRetornaQtdPar, testRetornaQtdPar){
    int vetor[10] {8,9,5,7,6,21,7,3,2,78};
    EXPECT_EQ(3, RetornaQtdPar(vetor));

}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}