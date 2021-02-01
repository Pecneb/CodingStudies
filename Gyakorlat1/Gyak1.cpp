#include<iostream>
using namespace std;
int Feladat1() {
    cout << "Irjon be egy szamot!" << endl;
    int szam;
    cin >> szam;
    cout << szam*2 << endl;
    return 0;
}
int Feladat2() {
    cout << "Irjon be ketto szamot!" << endl;
    int szam1;
    int szam2;
    cin >> szam1;
    cin >> szam2;
    int ossz;
    ossz = szam1 + szam2;
    int szorz;
    szorz = szam1*szam2;
    cout << "A ket szam szorzata: " << szorz << endl;
    cout << "A ket szam osszege: " << ossz << endl;
    cout << "A szorzat es az osszeg kulombsege: " << szorz - ossz << endl;
    return 0;
}

int Feladat3() {
    cout << "Irjon be egy szamot: ";
    int szam;
    cin >> szam;
    cout << "A szam abszolut erteke: " << abs(szam) << endl;
    if (szam%2 == 0) {
        cout << szam/2 << endl;
    } else {
        cout << szam%2 << endl;
    }
    return 0;
}

int main() {
    Feladat3();
    return 0;
}

