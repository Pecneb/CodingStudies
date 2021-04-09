#ifndef NAP
#define NAP

#include "tanora.h"
#include <iostream>


struct nap {
    int tanoraszam;
    tanora* tanorak = new tanora[tanoraszam];
};

void beker(nap*);
void torol(nap*);

#endif