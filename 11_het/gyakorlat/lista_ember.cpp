#include "lista_ember.h"

#define EV 2020

//Converts an Array to a List
lista* create_lista() {
    lista* horgony = NULL;
    int db = 2 + rand()%10;
    for(int i=0; i<db; i++) {
        lista* uj = new lista;
        int mhossz = 2 + rand()%2;
        for(int j=0; j<mhossz; j++) {
            uj->monogram += 'A' + rand()%('Z'-'A'+1);
        }
        uj->eletkor = rand()%121;
        uj->szulEv = EV - uj->eletkor;
        uj->magassag = 40 + rand()%181;
        uj->kov = horgony;
        horgony = uj;
    }
    return horgony;
}

/* 
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
*/

//Prints the items of the List
void out_lista(lista* horgony) {
    lista* akt = horgony;
    while(akt != NULL) {
        cout << "Monogram: " << akt->monogram
            << "\nEletkor: " << akt->eletkor
            << "\nSzuletesi ev: " << akt->szulEv
            << "\nMagassag: " << akt->magassag << endl << endl;
        akt = akt->kov;
    }
    cout << endl;
}

lista* delete_items(lista* horgony) {
    lista* akt = horgony;
    lista* elozo = NULL;
    while(akt != NULL) {
        lista* kov = akt->kov;
        if(akt->szulEv > 2000) {
            if(akt == horgony) {
                horgony = kov;
            }
            if(elozo != NULL) {
                elozo->kov = kov;
            }
            delete akt;
        } else {
            elozo = akt;
        }
        akt = kov;
    }
    return horgony;
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