#include "szemely.h"

void beker(szemely* sz) {
    cout << "Nev: ";
    getline(cin, sz->nev);
    cout << "Orarend: ";
    for(int i=0; i<NAPOKSZAMA; i++) {
        cout << i+1 << ". nap:\n";
        beker(&sz->orarend[i]);
    }
}

bool szabad(szemely* sz, int nap, idopont* idop) {
    for(int i=0; i<sz->orarend[nap].tanoraszam; i++) {
        if(utkozes(&sz->orarend[nap].tanorak[i], idop)) {
            return false;
        }
    }
    return true;
}
