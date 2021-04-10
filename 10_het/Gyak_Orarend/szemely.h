#ifndef SZEMELY
#define SZEMELY

#include "nap.h"
#include "tanora.h"
#include "idopont.h"
#include <iostream>

struct szemely {
    string nev;
    nap orarend[5];
};

void beker(szemely*);
bool szabad(szemely*, int, idopont*);

#endif
