#include "tanora.h"

void beker(tanora* t) {
    cout << "\nTargy neve: ";
    cin.ignore();
    getline(cin, t->nev);
    cout << "\nKezdes idopontja: ";
    beker(&t->kezdes);
    cout << "\nTanora vege: ";
    beker(&t->vege);
}

bool utkozes(const tanora* tanora, const idopont* idopont) {
    if(tanora->kezdes.ora == idopont->ora) {
        if(tanora->kezdes.perc <= idopont->perc) {
            return true;
        }
    } else if(tanora->vege.ora == idopont->ora) {
        if(tanora->vege.perc >= idopont->perc) {
            return true;
        }
    } else if(tanora->kezdes.ora < idopont->ora && tanora->vege.ora > idopont->ora) {
        return true;
    }
    return false;
}
