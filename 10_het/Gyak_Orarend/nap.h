#ifndef NAP
#define NAP

#include "tanora.h"
#include "idopont.h"
#include <iostream>


struct nap {
    int tanoraszam;
    tanora* tanorak;
};

void beker(nap*);
void torol(nap*);

#endif
