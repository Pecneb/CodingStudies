#include <iostream>
#include "gepkocsi2.h"
#include "ember2.h"

using namespace std;

int main() {
  
  ember e = { "Gizike", { 2000, 1, 2} };
  gepkocsi gk = { { 2010, 10, 3}, { 2016, 10, 7}, 2 };
  datum ma = { 2018, 4, 7 };
  
  if(elmult17(&e, &ma)) {
    datum erv = muszakiErvenyesseg(&gk);
    if(bazis(&erv) >= bazis(&ma)) {
      cout << "Hajtsunk a naplementebe!\n";
    } else {
      cout << "Foglalkozni kell a verdaval.\n";
    }
  } else {
    cout << "Tul fiatal vagy meg a vezeteshez.\n";
  }
  
  return 0;
}
