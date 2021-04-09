#include "szemely.h"

void beker(szemely* sz) {
    cout << "Nev: ";
    cin.ignore();
    getline(cin, sz->nev);
    cout << "\nOrarend: ";
    for(int i=0; i<5; i++) {
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