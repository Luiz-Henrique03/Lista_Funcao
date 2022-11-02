#include <iostream>
#include "Ex71.h"
#include <gtest/gtest.h>

using namespace std;



TEST(testPonto, testPonto){
    Ponto v1[1] = {{10,20}};
    Ponto v2[1] = {{2,5}};
    Ponto p[1] = {};

    EXPECT_EQ(DentroRet(v1,v2,p),3);

}

