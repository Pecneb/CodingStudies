#include <iostream>
#define TOMBELEM 10
using namespace std;
int main() {
    int tomb[TOMBELEM], sorszam1, sorszam2, i, csval;
    cout << "Adjon meg " << TOMBELEM << "db szamot.";
    i=0;
    while(i < TOMBELEM) {
        cin >> tomb[i];
        i++;
    }
    cout << "Most adjon meg annak a ket szamnak a sorszamat amit fel akar "
            "cserelni egymassal a tombon belul: ";
    i=0;
    do {
        cout << i+1 << ". csere.(ha ki szeretne lepni a cserebol " 
                       "akkor adjon meg egynel kisebb vagy tiznel nagyobb sorszamot.)\n";
        cout << "1. sorszam: "; cin >> sorszam1;
        cout << "2. sorszam: "; cin >> sorszam2;
        if(sorszam1 >= 1 && sorszam1 <= 10 && sorszam2 >= 1 && sorszam2 <= 10) {
            csval = tomb[sorszam1-1];
            tomb[sorszam1-1] = tomb[sorszam2-1];
            tomb[sorszam2-1] = csval;
            for (int j = 0; j < TOMBELEM; j++)
            {
                cout << tomb[j] << '\n';
            }
        
        }
        i++;
    } while(sorszam1 >= 1 && sorszam1 <= 10 && sorszam2 >= 1 && sorszam2 <= 10);
    return 0;
}