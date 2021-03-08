#include <iostream>
#include <cmath>
#define MAXHALL 5
#define ZHSZAM 4
using namespace std;

struct hallgato {
    string firstname;
    string lastname;
    string neptuncode;
    string subject;
    int er[ZHSZAM];
};

hallgato add_hallgato() {
    hallgato h;
    cout << "Hallgato vezetekneve: "; cin >> h.firstname;
    cout << "Keresztneve: "; cin >> h.lastname;
    cout << "Neptunkod: "; cin >> h.neptuncode;
    cout << "Targynev: "; cin >> h.subject;
    for(int i=0; i<ZHSZAM; i++) {
        cout << i+1 << ". ZH eredmenye: "; cin >> h.er[i];
    }
    return h;
}

int atlagFv(hallgato ujhallgato) {
    double szum=0.0;
    for(int i=0; i<ZHSZAM; i++) {
        szum += ujhallgato.er[i];
    }
    return (szum/ZHSZAM);
}

int main() {
    hallgato ujhallgato;
    double atlag;

    cout << "Adatok beolvasasa es ZH atlagok kiszamitasa" << endl;
    ujhallgato = add_hallgato();
    atlag = atlagFv(ujhallgato);
    cout << "A hallgato atlaga az adott tantargybol: " << atlag << endl;

    return 0;
}