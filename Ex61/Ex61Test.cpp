/*Escreva uma função que compare e retorne verdadeiro, caso uma string seja anagrama ˜
da outra, e falso, caso contrário.
*/


#include <iostream>
#include <string>
#include "Ex61.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>

using namespace std;
 


TEST(testAnagrama, testAnagrama){
     string palavra1 = "alegria",
            palavra2 = "alergia",
     bool ResultadoEsperado = true;
     EXPECT_EQ(Anagrama(palavra1,palavra2),ResultadoEsperado);
}


int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}