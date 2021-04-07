#include <iostream>
#include <cstdlib>

using namespace std;

struct Koordinata {
    double x,y,z; 
};

Koordinata* beolvas() {
    Koordinata* k = new Koordinata;
    if(k == NULL) {
        cerr << "Memoriafoglalasi hiba.\n";
        exit(1);
    }
    cout << "X koordinata: "; cin >> k->x;
    cout << "Y koordinata: "; cin >> k->y;
    cout << "Z koordinata: "; cin >> k->z;
    return k;
}

int main() {
    Koordinata* koord;
    cout << "Dinamikusan struktura: koordinatak kezelese\n";
    koord = beolvas();
    cout << "A beolvasott koordinata: ";
    cout << "X: " << koord->x << " Y: " << koord->y << " Z: " << koord->z << endl;
    delete koord;
    return 0;
}