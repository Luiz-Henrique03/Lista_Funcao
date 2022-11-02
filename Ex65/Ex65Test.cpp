/*Implemente a função a qual recebe duas strings, str1 e str2, e um valor inteiro positivo
N. A funçãoo concatena não mais que  N caracteres da string apontada por str2 a string `
apontada por str1 e termina str1 com NULL.*/

#include <iostream>
#include <string>
#include <gtest/gtest.h>

using namespace std;

string ConcatString(string str1, string str2, int n){
    for(int i = 0; i < n; i++){
        str1 += str2[i];
    }
   return str1;
}

TEST(testConcatString, testConcatString){
    string str1 = "Olá ",
           str2 = "Mund";

    int n = 4;

    EXPECT_EQ(ConcatString(str1,str2),str1+=str2);
}

