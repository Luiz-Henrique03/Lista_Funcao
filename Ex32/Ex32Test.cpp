/**/

#include <iostream>
#include <cmath>
#include "Ex32.h"
#include <gtest/gtest.h>

using namespace std;

void Simplifica(int &a, int &b){
    int denominador = 0;
    for(int i = 1; i < a; i++){
        if(a%i == 0 && b%i == 0){
            denominador = i;
        }
    }

    a = a / denominador;
    b = b / denominador;
   
}

TEST(testSimplifica, testSimplifica){
    int a = 60,
        b = 36;
    Simplifica(a,b);
    EXPECT_EQ(5,a);
    EXPECT_EQ(3,b);
    
}
