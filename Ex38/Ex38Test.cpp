#include <iostream>
#include <cmath>
#include "Ex38.h"
#include <gtest/gtest.h>


TEST(testFatorialExponencial, testFatorialExponencial){
    EXPECT_EQ(226410701, FatorialExponencial(3));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}