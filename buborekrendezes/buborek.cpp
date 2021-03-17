#include <iostream>

using namespace std;
// a t tomb nem ertek szerint adja at a tombot hanem cim szerint, mert a fordito nem hulye, egybol cimkent adja at a tombot
void buborek(int t[], int n) {
    for(int i=n-1; i>=1; i--) {
        for(int k=0; k<i; k++) {
            if(t[k] > t[k+1]) {
                int csere = t[k];
                t[k] = t[k+1];
                t[k+1] = csere;
            }
        }
    }
}