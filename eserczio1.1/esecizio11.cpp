#include <iostream>
using namespace std;

int potenza (int base, int exp);

int main(){

    int x, y;

    cout << "Inserire la base x: " << endl;
    cin >> x;

    cout << "Inserire l' esponente y: " << endl;
    cin >> y;

    cout << x << "^" << y << "=" << potenza(x, y) << endl;

}

int potenza (int base, int exp){
    int risultato=1;
    for (int k = 0; k < exp; k++)
    {
        risultato = risultato * base;
    }
    return risultato;
    
}