/*Fac¸a uma func¸ao n ˜ ao-recursiva que receba um n ˜ umero inteiro positivo ´ n e retorne o hiperfatorial desse numero. O hiperfatorial de um n ´ umero ´ n, escrito H(n), e definido por: ´
H(n) = Qn k=1 k k = 11 · 2 2 · 3 3 . . .(n − 1)n−1 · n
*/

#include <iostream>
#include "Ex37.h"
#include <cmath>

using namespace std;


int main(){
    cout << HiperFat(4);
}