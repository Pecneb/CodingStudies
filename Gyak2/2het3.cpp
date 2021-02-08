#include <iostream>
using namespace std;

int main() { 
    cout << "Ijron be szamokat. Ha ki akar lepni akkor irja be a " 
         << " legutolso szamot megegyszer.";
    int akt, db=0, parosDB=0, elozo=0;    
    while(cout << "Kovetkezo szam: ", cin >> akt, akt != elozo) {
        db++;
        if(akt%2==0) parosDB++;
        elozo = akt;
    }
    cout << db << " db szamot adott meg." << endl;
    cout << parosDB << " db paros szam volt a beadott szamok kozott."
         << endl;
    return 0;
}