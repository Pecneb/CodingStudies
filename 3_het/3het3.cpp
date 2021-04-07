#include <iostream>
#define DIMENZIO 3
using namespace std;

int main() {
    int tomb1[DIMENZIO], tomb2[DIMENZIO];
    int i, k=0;
    int osszeg1, osszeg2;
    while(k < 2) {
        i=0;
        cout << "Adja meg a " << k+1 << ". vektor: ";
        while(i < 3) {
            cout << i+1 << ". elemet.\n";
            if(k == 0) {cin >> tomb1[i]; osszeg1 += tomb1[i];}
            else {cin >> tomb2[i]; osszeg2 += tomb2[i];}
            i++; 
        }
        k++;
    }
    cout << "A ket tomb osszege: " << osszeg2+osszeg1 << endl;
    cout << "A ket tomb kulombsege: " << osszeg1-osszeg2 << endl;
    return 0;
}