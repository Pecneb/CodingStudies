#include <iostream>
#define SZAMOKSZAMA 10
using namespace std;

int main() { 
    int szamok[SZAMOKSZAMA];
    double osszeg=0;
    cout << "Irjon be 10 szamot: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i+1 << ". szam: "; cin >> szamok[i];
        osszeg += szamok[i];
    }
    for (int j = 0; j <= 9; j++)
    {
        if(szamok[j] < osszeg/SZAMOKSZAMA) cout << szamok[j] << " az atlag alatt van.\n";
    }
    return 0;
}