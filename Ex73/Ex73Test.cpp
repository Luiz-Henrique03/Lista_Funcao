#include <gtst/gtest.h>
#include "Ex73.h"


TEST(testHabitantes, testHabitantes){
    Habitantes pessoas[5] = {{'M',27,Azuis,Preto},{'F',20,Castanhos,Louro},{'M',33,Castanhos,Preto},{'F',32,Azuis,Castanho},{'M',17,Castanhos,Castanho}};
    const float MediaEsperada1 = 0.2,
                MediaEsperada2 = 0;
    const MaiorIdadeEsperada = 33;

    EXPECT_EQ(Media(pessoas),0.2);
    EXPECT_EQ(maiorIdade(pessoas),33);
    EXPECT_EQ(Media18e35(pessoas),0);
}

