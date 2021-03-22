#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void kiir(const char* cstr) {
    const char* ment = cstr;
    cout << "ASCII:\t";
    cstr--;
    do {
        cstr++;
        cout << int(*cstr) << '\t';
    } while(*cstr!='\0');
    cout << "\nOlv:\t";
    for(cstr=ment; *cstr!='\0'; cstr++) {
        cout << *cstr << '\t';
    }
    cout << endl;
}
#define SOROK 3
#define OSZLOPOK 4
void mtxOsszead() {
    int a[SOROK][OSZLOPOK] = {
        {11,12,13,14},
        {21,22,23,24},
        {31,32,33,34}
    };
    int b[SOROK][OSZLOPOK], c[SOROK][OSZLOPOK];
    srand(time(NULL));
    for(int s=0;s<SOROK;s++){
        for(int o=0;o<OSZLOPOK;o++){
            b[s][o] = 10+rand()%40;
        }
    }
    for(int s=0;s<SOROK;s++){
        for(int o=0;o<OSZLOPOK;o++){
            c[s][o] = a[s][o]+b[s][o];
        }
    }
    //nincs teljesen kesz, meg kell a kiiratas
}
int mtxOsszead2() {
    //ide az elozo mtxOsszead fv. szebb megoldasa lesz, ami fv. eket hasznal nem manualis kiiratast...
}
int main() {
    /*kiir("");
    kiir("C");
    kiir("C-stilus");
    string h = "hello";
    kiir(h.c_str());
    char v[] = " vilag!\n";
    char* cs = new char[h.length() + strlen(v) + 1];
    strcpy(cs, h.c_str());
    strcat(cs, v);
    cout << cs;
    delete[] cs;*/
    //ez azert van kikommentelve mert ez a string kezeles bemutatasahoz van hasznalva
    return 0;
}