/*Faça uma função ‘Troque’, que recebe duas variáveis reais A e B e troca o valor delas ´
(i.e., A recebe o valor de B e B recebe o valor de A).*/

#include <iostream>
#include "Ex39.h"
#include <gtest/gtest.h>
#include <cmath>

using namespace std;



TEST(testSimplifica, testSimplifica){
    int a = 10,
        b = 15;
    Trocar(a,b);
    EXPECT_EQ(15,a);
    EXPECT_EQ(10,b);
    
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}