#include <iostream>

using namespace std;

double temperatura(int Celsius){
    return Celsius * (9/5) + 32;
}

int main(){
    int Temp;
    cout << "Informe a temperatura em celsius\n";
    cin >> Temp;
    cout << "Temperatura em fahreinheit: " << temperatura(Temp);
}