#include <iostream>
#include "ceg.h"

#define CEGDB 3

using namespace std;

int legregebbi(const ceg* cegek, int db) {
    int idx = 0;
    const datum* alapitas = &cegek->alapitas;
    for(int i=0; i<db; i++) {
        if(hasonlit(alapitas, &cegek[i].alapitas) > 0) {
            idx = i;
            alapitas = &cegek[i].alapitas;
        }
    }
    return idx;
}

int main() {
    cout << "Cegeket kezelo program\n"
         << "Adja meg " << CEGDB << " ceg adatait!\n";
    ceg cegek[CEGDB];
    for(int i=0; i<CEGDB; i++) {
        cout << "A(z) " << i+1 << " ceg adatai:\n";
        beolvas(cegek + i); // &cegek[i]
    }
    
    cout << "A legregebben alapitott ceg adaita:\n";
    kiir(cegek + legregebbi(cegek, CEGDB));

    cout << "Telephely adatok kiirasa a helysegnev alapjan, ures sorig.\n";
    string helyseg;
    cin.ignore();
    while(cout<<"Helysegnev: ",getline(cin, helyseg),helyseg.length()>0) {
        for(int c=0; c<CEGDB; c++) {
            for(int t=0; t<cegek[c].telepDB; t++) {
                if(cegek[c].telephelyek[t].helyseg == helyseg) {
                    cout << "Ceg neve: " << cegek[c].nev
                         << "\nTelephely adatai:\n";
                    kiir(cegek[c].telephelyek+t);
                }
            }
        }
    }

    for(int i=0; i<CEGDB; i++) {
        torol(cegek + i);
    }
    return 0;
}