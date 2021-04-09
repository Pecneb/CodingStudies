#ifndef TANORA
#define TANORA 

#include "idopont.h"
#include <iostream>


struct tanora {
    string nev;
    idopont kezdes;
    idopont vege;
};

void beker(tanora*);
bool utkozes(const tanora*, const idopont*);

#endif