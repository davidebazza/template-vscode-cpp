#include <iostream>
#include "esercizio11.cpp"

using namespace std;

int splitter(int split, int indice);

int main(){
    int number, indice;
    cout << "Inserire numero da split up: " << endl;
    cin >> number;

    cout << "Inserire numero di indice: " << endl;
    cin >> indice;

    cout << splitter (number, indice);


}

int splitter(int split, int indice){
    return (split / potenza(10, index) % 10);
}