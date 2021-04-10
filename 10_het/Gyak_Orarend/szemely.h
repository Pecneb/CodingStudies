#ifndef SZEMELY
#define SZEMELY

#include "nap.h"
#include "tanora.h"
#include "idopont.h"
#include <iostream>
#define NAPOKSZAMA 1
struct szemely {
    string nev;
    nap orarend[NAPOKSZAMA];
};

void beker(szemely*);
bool szabad(szemely*, int, idopont*);

#endif
