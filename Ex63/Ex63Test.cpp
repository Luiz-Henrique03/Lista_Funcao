/*Crie uma função que compara duas strings e que retorna se elas são iguais ou diferentes*/


#include <iostream>
#include <string>
#include "Ex63.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testComparaStrings, testComparaStrings){
    string palavra1 = "Teclado",
           palavra2 = "Teclado";
    ASSERT_TRUE(ComparaStrings(palavra1,palavra2));
    string palavradiferente1 = "Mouse",
           palavradiferente2 = "Gabinete";
    ASSERT_FALSE(ComparaStrings(palavradiferente1,palavradiferente2));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}