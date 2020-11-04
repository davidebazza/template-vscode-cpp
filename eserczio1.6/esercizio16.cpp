#include <iostream>
#include "esercizio15.cpp"

using namespace std;

int e (int indice);

int main(){
    int i;
    cout << "Inserire un numero di indice: " << endl;
    cin >> i;

    cout << "e= " << 1+e(i);
}

int e (int indice){

    int j=1;
    int x=1;
    for (int k = 1; k <= indice; k++)
    {
        x = (1/fact(j));
        j++;    
    }
    return x;
    
}