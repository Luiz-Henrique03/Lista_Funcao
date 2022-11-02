#include <iostream>
#include "Ex17.h"

using namespace std;


int main(){
    int inicio,
        fim;
    
    cout << "Informe o valor inicial e do valor final, respectivamente: " <<endl;
    cin >> inicio;
    cin >> fim;

    cout << SomaEntre(inicio,fim);
}