#include <iostream>

using namespace std;

struct koordinata {
    int x, y;
};

#define N 3
struct haromszog {
    koordinata csucsok[N];
};

void beolvas(haromszog* cim) {
    for(int i = 0; i<N; i++) {
        cout << ' ' << i+1 << ". szoge:\n";
        cout << "X: "; cin >> cim->csucsok[i].x;
        cout << "Y: "; cin >> cim->csucsok[i].y;
    }
}

void kiir(const haromszog* cim) {
    for(int i = 0; i<N; i++) {
        cout << ' ' << i+1 << ". Szoge:\n";
        cout << "X: " << cim->csucsok[i].x
             << " Y: " << cim->csucsok[i].y << endl;
    }
}

#define DB 2
int main() {
    haromszog tomb[DB];
    cout << "Haromszogek kezelese\n";
    for(int i = 0; i<DB; i++) {
        cout << i+1 << ". haromszog adatai:\n";
        beolvas(tomb+1);
    }
    cout << "A beolvasott haromszogek adatai:\n";
    for(int i=0; i<DB; i++) {
        cout << i+1 << ". haromszog csucsainak koordinatai:\n";
        kiir(tomb+i);
    }
    return 0;
}