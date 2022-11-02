/*Implemente a func¸ao a qual recebe duas strings,  str1 e str2, e concatena a string apontada por str2 a string apontada por  str1.
*/

#include <iostream>
#include "Ex64.h"
#include <string>

using namespace std;

int main(){
    string str1 = "Olá ",
           str2 = "Mundo";
    
    cout << ConcatString(str1,str2);
}