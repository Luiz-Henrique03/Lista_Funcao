/*Faça uma função para calcular o número neperiano usando uma série. A função deve ˜
ter como parametro o número de termos que serão somados (note que, quanto maior o ˜
numero, mais próxima a resposta estará do valor  e).
l =  P∞ n=0 1 n! = 1 0! + 1 1! + 1 2! + 1 3! + 1 4! + . . .*/

#include <iostream>
#include "Ex31.h"
#include <gtest/gtest.h>


using namespace std;

int fatorial(int n){
    int resultado = n;
    if(n == 0){
        return 1;
    }
    for(int i = n - 1; i > 0; i--){
        resultado *= i;
    }

    return resultado;
}

double Neperiano(int n){
    double Soma = 0;
    for(int i = 0; i < n; i++){
       Soma += 1 / fatorial(i);
    }

    return Soma;
}

TEST(testNeperiano, testNeperiano){
    EXPECT_EQ(Neperiano(4),2);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}