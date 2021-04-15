#ifndef LISTA
#define LISTA

#include <iostream>

using namespace std;

struct lista {
    int adat;
    lista *kov;
};

lista* create_lista(int*);
lista* add_front(lista*, int);
lista* add_end(lista*, int);
void out_lista(lista*);
void delete_lista(lista*);

#endif