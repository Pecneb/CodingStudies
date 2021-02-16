#include <iostream>
#define TOMBELEM 5
using namespace std;

int main() {
    int tomb[TOMBELEM], i, shift;
    cout << "Adjon meg 5 szamot.\n";
    i=0;
    while(i < TOMBELEM) {
        cout << i+1 << "szam: ";
        cin >> tomb[i];
        i++;
    }
    do {
        cout << "Most adja meg mennyivel akarja eltolni a szamokat a tombon belul, "
                "ha pozitiv szam eseten jobbra, negativ eseten balra tolodik el.";
        cin >> shift;
        if(shift > 0 && shift != TOMBELEM && shift > 0) {
            if(shift > TOMBELEM) {
                i=0;
                while(i < TOMBELEM) {
                        
                    i++; 
                }
            } else {

            }
        }
    } while(shift != 0);
    
    return 0;
}