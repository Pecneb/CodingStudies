#include "ceg.h"
#include <iostream>

void beolvas(ceg* c) {
  cout << "Ceg neve: ";
  cin >> std::ws; // Specialis konstans: feher karakterek kidobalasa
  getline(cin, c->nev);
  cout << "Adja meg az alapitas datumat!\n";
  beolvas(&c->alapitas);
  cout << "Telephelyek szama: "; cin >> c->telepDB;
  c->telephelyek = new telep[c->telepDB];
  if(c->telephelyek == NULL) {
    cerr << "Hiba a telephelyek tomb lefoglalasakor!";
    exit(1);
  }
  for(int i=0; i<c->telepDB; i++) {
    cout << "Adja meg a(z) " << i+1 << ". telephely adatait!\n";
    beolvas(c->telephelyek + i);
  }
}

int evesBevetel(const ceg* c) {
  int bevetel = 0;
  for(int i=0; i<c->telepDB; i++) {
    bevetel += c->telephelyek[i].bevetel;
  }
  return bevetel;
}

void kiir(const ceg* c) {
  cout << "Ceg neve: " << c->nev
       << "\nALapitas datuma: ";
  kiir(&c->alapitas);
  cout << "\nTelephelyek szama: " << c->telepDB
       << "\nTelephelyek adatai:\n";
  for(int i=0; i<c->telepDB; i++) {
    kiir(c->telephelyek + i);
  }
  cout << "Osszesitett bevetel: " << evesBevetel(c) << endl;
}

void torol(const ceg* c) {
  delete[] c->telephelyek;
}
