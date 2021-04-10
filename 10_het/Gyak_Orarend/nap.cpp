#include "nap.h"
using namespace std;

void beker(nap* n) {
    cout << "\nTanorak szama: "; cin >> n->tanoraszam;
    n->tanorak = new tanora[n->tanoraszam];
    for(int i=0; i<n->tanoraszam; i++) {
        beker(&n->tanorak[i]);
    }
}

void torol(nap* n) {
    delete[] n->tanorak;
}
