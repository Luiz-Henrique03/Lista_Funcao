#include <iostream>

using namespace std;

int ComparaDoisNumeros(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){
    int a,
        b;
    
    cout << "Digite dois valores: ";
    cin >> a;
    cin >> b;
    cout <<  ComparaDoisNumeros(a,b);
}