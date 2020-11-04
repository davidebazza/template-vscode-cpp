#include <iostream>

using namespace std;

int fact (int number);

int main(){
    
    int n;
    cout << "Inserire un numero: " << endl;
    cin >> n;
    cout << "Il fattoriale è: " << fact (n);
}

int fact (int number){
    int k=1;


    for (int i=1; i<number; i++&number--)
    {
        k = k*number;
    }
    return k;

   
}
