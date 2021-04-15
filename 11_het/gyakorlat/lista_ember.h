#ifndef LISTA_EMBER
#define LISTA_EMBER

#include <iostream>

using namespace std;

struct lista {
    string monogram;
    int eletkor;
    int szulEv;
    int magassag;
    lista *kov;
};

lista* create_lista();
/* lista* add_front(lista*, int);
lista* add_end(lista*, int); */
void out_lista(lista*);
lista* delete_items(lista*);
void delete_lista(lista*);

#endif