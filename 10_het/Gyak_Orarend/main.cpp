#include "szemely.h"
#include <iostream>

#define SZEMELYEK_SZAMA 2
using namespace std;

string legtobbtanora(const szemely* sz, int napszama) {
    int max = sz->orarend[napszama].tanoraszam;
    int idx = 0;
    for(int i=0; i<SZEMELYEK_SZAMA; i++) {
        if(sz->orarend[napszama].tanoraszam > max) {
            max = sz->orarend[napszama].tanoraszam;
            idx = i;
        }
    }
    return sz[idx].nev;
}

int main() {
    szemely szemelyek[SZEMELYEK_SZAMA];
    for(int i=0; i<SZEMELYEK_SZAMA; i++) {
        beker(szemelyek + i);
    }
    int nap;
    cout << "Nap: "; cin >> nap;
    cout << legtobbtanora(szemelyek, nap) << " nak van a legtobb oraja aznap!\n";
    idopont idop;
    beker(&idop);
    for(int i=0; i<SZEMELYEK_SZAMA; i++) {
        if(szabad(szemelyek + i, nap, &idop)) {
           cout << szemelyek[i].nev << " eppen szabad ebben az idopontban!\n"; 
        } else {
           for(int j=0; j<szemelyek[i].orarend[nap].tanoraszam; j++) {
               cout << i+1 << ". tanora: " << szemelyek[i].orarend[nap].tanorak[j].nev << '\n';
           } 
        }
    }
    for(int i=0; i<SZEMELYEK_SZAMA; i++) {
        for(int j=0; j < 5; j++) {
                torol(&szemelyek[i].orarend[j]);
        }
    }
    return 0;
}