#include <iostream>
using namespace std;

int main() {
  cout << "Adjon meg szamokat! Minden parosnak kiirjuk a felet, pratlanra kilepunk.\n";
  int szam;
  bool paros;
  do{
    cout << "Kovetkezo szam: ";
    cin >> szam;
    paros = szam%2==0;
    if(paros) cout << "Szam fele: " << szam/2 << endl;
  }while(paros);
  return 0;
}