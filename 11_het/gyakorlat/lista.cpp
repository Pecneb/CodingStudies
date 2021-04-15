#include "lista.h"

//Converts an Array to a List
lista* create_lista(int tomb[]) {
    lista* horgony = NULL;
    for(int i=0; tomb[i]!=-1; i++) {
        lista* uj = new lista;
        uj->adat = tomb[i];
        uj->kov = horgony;
        horgony = uj;
    }
    return horgony;
}

//Adds data to the front of the List
lista* add_front(lista* horgony, int adat) {
    lista* uj = new lista;
    uj->adat = adat;
    uj->kov = horgony;
    return uj;
}

//Adds data to the end of the List
lista* add_end(lista* horgony, int adat) {
    lista* uj = new lista;
    uj->adat = adat;
    uj->kov = NULL;
    if(horgony == NULL) {
        return uj;
    } else {
        lista* akt = horgony;
        while(akt->kov != NULL) {
            akt = akt->kov;
        }
        akt->kov = uj;
        return horgony;
    }
}

//Prints the items of the List
void out_lista(lista* horgony) {
    lista* akt = horgony;
    while(akt != NULL) {
        cout << akt->adat << '\t';
        akt = akt->kov;
    }
    cout << endl;
}

//Deletes the List from the memory
void delete_lista(lista* horgony) {
    lista* akt = horgony;
    while(akt != NULL) {
        lista* kov = akt->kov;
        delete akt;
        akt = kov;
    }
}