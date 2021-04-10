#include "idopont.h"

void beker(idopont* i) {
    cout << "\nOra: "; cin >> i->ora;
    cout << "\nPerc: "; cin >> i->perc;
}

int osszehasonlit(const idopont* ido1, const idopont* ido2) {
    if(ido1->ora == ido2->ora) {
        if(ido1->perc == ido2->perc) {
            return 0;
        } else if(ido1->perc > ido2->perc) {
            return 1;
        } else {
            return -1;
        }
    } else if(ido1->ora > ido2->ora) {
        return 1;
    } else {
        return -1;
    }
}
