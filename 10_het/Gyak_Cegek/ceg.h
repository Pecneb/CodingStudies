#ifndef CEG
#define CEG

#include "datum.h"
#include "telephely.h"
#include <iostream>

struct ceg {
  string nev;
  datum alapitas;
  telep* telephelyek;
  int telepDB;
};

void beolvas(ceg*);
int evesBevetel(const ceg*);
void kiir(const ceg*);
void torol(const ceg*); //azert const mert mutato nem valtozik csak ahova mutat!

#endif
