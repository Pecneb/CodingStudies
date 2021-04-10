#include "szemely.h"
#include <iostream>

using namespace std;

#define SZEMELYEK_SZAMA 1

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
    szemely* szemelyek = new szemely[SZEMELYEK_SZAMA];
    for(int i=0; i<SZEMELYEK_SZAMA; i++) {
      cout << i+1 << ". szemely:\n";
      beker(szemelyek + i);
    }
    int napbe;
    cout << "Adja meg a nap szamat: ";
    cin.ignore();
    cin >> napbe;
    napbe = napbe-1;
    idopont idobe;
    cout << "Adja meg az idopontot!\n";
    beker(&idobe);
    cout << "Az a szemely akinek a legtobb oraja van a megadott napon: " << legtobbtanora(szemelyek, napbe) << '\n';

    for(int i=0; i<SZEMELYEK_SZAMA; i++) {
      cout << szemelyek[i].nev << ": ";
      if(szabad(&szemelyek[i], napbe, &idobe)) {
        cout << "szabad a megadott idoben.\n";
      } else {
        for(int j=0; j<szemelyek[i].orarend[napbe].tanoraszam; j++) {
          if(utkozes(&szemelyek[i].orarend[napbe].tanorak[j], &idobe)) {
            cout << szemelyek[i].orarend[napbe].tanorak[j].nev << " oraval utkozik a megadott idopont.\n";   
          }
        }
      }
    }
    delete[] szemelyek;
    return 0;
}
