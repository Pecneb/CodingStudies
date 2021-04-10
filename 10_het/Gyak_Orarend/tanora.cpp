#include "tanora.h"

void beker(tanora* t) {
    cout << "Targy neve: ";
    cin.ignore();
    getline(cin, t->nev);
    cout << "Kezdes idopontja: ";
    beker(&t->kezdes);
    cout << "Tanora vege: ";
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
