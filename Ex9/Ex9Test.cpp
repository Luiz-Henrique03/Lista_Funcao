/*Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume ˜
do cilindro. O volume de um cilindro circular e calculado por meio da seguinte f ´ ormula: ´
V = π ∗ raio2 ∗ altura, onde π = 3.141592*/

#include <iostream>
#include <cmath>
#include "Ex9.h"
#include <gtest/gtest.h>


using namespace std;


TEST(testCalcVolumeCilindro, testCalcVolumeCilindro){
    EXPECT_EQ(CalcVolumeCilindro(2,4), 100.531);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}