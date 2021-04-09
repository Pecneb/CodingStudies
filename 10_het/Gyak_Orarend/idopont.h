#ifndef IDOPONT
#define IDOPONT

#include <iostream>
using namespace std;

struct idopont {
    char ora;
    char perc;
};

void beker(idopont*);
int osszehasonlit(const idopont*, const idopont*);

#endif