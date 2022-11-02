/*Crie uma função que calcula o comprimento de uma string e que possui a seguinte ˜
assinatura: void tamanho(char *str, int *strsize).*/

#include <iostream>
#include <string>
#include "Ex62.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testTamanho, testTamanho){
    int *strsize = new int(),
         tamanho = 10;
    char str[11] = {"Computador"};
    EXPECT_EQ(Tamanho(str,strsize),tamanho);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}