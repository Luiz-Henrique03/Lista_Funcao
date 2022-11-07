/*Implemente a função a qual recebe duas strings,  str1 e str2, e concatena a string apontada por str2 a string apontada por  str1.
*/


#include <iostream>
#include <string>
#include "Ex64.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testConcatString, testConcatString){
    string str1 = "Olá ",
           str2 = "Mundo";

    EXPECT_EQ(ConcatString(str1,str2), str1+=str2);
}
