#include "telephely.h"

void beolvas(telep* t) {
  cout << "Telephely helysege: "; cin >> t->helyseg;
  cout << "Adja meg az alapitss datumat!\n";
  beolvas(&t->alapitas);
  cout << "Utolso ev arbevelete: "; cin >> t->bevetel;
}

void kiir(const telep* t) {
  cout << "Telephely helysege: " << t->helyseg
       << "\nAlapitas datuma: " << t->alapitas;
  kiir(&t->alapitas);
  cout << "\nUtolso ev arbevelete: " << t->bevetel;
}
