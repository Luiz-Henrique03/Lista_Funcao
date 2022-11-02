#include <iostream>
#include "Ex65.h"
#include <string>

using namespace std;

string ConcatString(string str1, string str2, int n){
    for(int i = 0; i < n; i++){
        str1 += str2[i];
    }
   return str1;
}

