#include <iostream>
using namespace std;
#define BETUK ('Z'-'A'+1)
int main() {
    cout << "Vignere rejtjelezo program\nAdja meg a kulcsot! ";
    string kulcs;
    cin >> kulcs;

    char* tabla[BETUK];
    for(int i=0; i<BETUK; i++) {
        tabla[i] = new char[kulcs.length()];
        if(tabla[i] == NULL) {
            cerr << "Memoriafoglalasi hiba.\n";
            return 1;
        }
    }
    for(int col=0; col<kulcs.length(); col++) {
        kulcs[col] = toupper(kulcs[col]);
        int eltolas = abs(kulcs[col] - 'A');
        for(int row=0; row<BETUK; row++) {
            tabla[row][col] = 'A' + eltolas%BETUK;
            eltolas++;
        }
    }
    cout << "  | " << kulcs << endl;
    for(int row=0; row<BETUK; row++) {
        cout << char('A'+row) << " | ";
        for(int col=0; col<kulcs.length(); col++) {
            cout << tabla[row][col];
        }
        cout << endl;
    }
    string szoveg;
    cin.ignore();
    while(cout << "Adja meg a nyilt szoveget! ",
          getline(cin, szoveg),
          szoveg.length()>0) {
              for(int i=0; i<szoveg.length(); i++) {
                  if(isalpha(szoveg[i])) {
                      cout << tabla[toupper(szoveg[i])-'A'][i%kulcs.length()];
                  } else {
                      cout << szoveg[i];
                  }
              }
              cout << endl;
            }
    for(int i=0; i<BETUK; i++) {
        delete[] tabla[i];
    }
    return 0;
}