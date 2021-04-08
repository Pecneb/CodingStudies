#include <iostream>
#include <veremkezeles>
using namespace std;


// int --> string atalakitas
string itos(int szam) {
  bool negativ = false;
  if(szam < 0) {
    negativ = true;
  }
  do {
    berak(szam%10 + '0');
    szam /= 10;
  } while(szam != 0);
  if(negativ) berak('-');
  string er = "";
  while (!ures()) {
    er += kivesz();
  }
}
