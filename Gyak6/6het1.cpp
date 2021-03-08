#include <iostream>
#include <cmath>

using namespace std;

struct person {
    struct birthday {int year; int month; int day;} birth;
    float dist;
};

#define DB 5

void distrend(person persons[]) {
    for(int i=0; i<DB-1; i++) {
        int k=i;
        for(int j=i+1; j<DB; j++) {
            if(persons[k].dist < persons[j].dist) {
                k = j;
            }
        }
        if(k!=i) {
            struct person swap = persons[i];
            persons[i] = persons[k];
            persons[k] = swap;
        }
    }
    
    cout << "Tavolsag szrint csokkenoen rendezett szemelyek:\n";
    for(int i=0; i<DB; i++) {
        cout << persons[i].birth.year << '.' <<
                persons[i].birth.month << '.' <<
                persons[i].birth.day << '\t' <<
                persons[i].dist << endl;
    }
}

int sz2szam(person sz) {
    return sz.birth.year*1000 + sz.birth.month*100 + sz.birth.day;
}

void korrend(person persons[]) {
    for(int i=0; i<DB-1; i++) {
        int k=i;
        for(int j=i+1; j<DB; j++) {
            if(sz2szam(persons[k]) < sz2szam(persons[j])) {
                k = j;
            }
        }
        if(k!=i) {
            struct person swap = persons[i];
            persons[i] = persons[k];
            persons[k] = swap;
        }
    }
    
    cout << "Kor szerint csokkenoen rendezett szemelyek:\n";
    for(int i=0; i<DB; i++) {
        cout << persons[i].birth.year << '.' <<
                persons[i].birth.month << '.' <<
                persons[i].birth.day << '\t' <<
                persons[i].dist << endl;
    }
}

int main() {
    cout << "Szemelyek kezelesere\n\n";
    person persons[DB];
    for(int i=0; i<DB; i++) {
        cout << i+1 << ". szemely szuletesi eve: ";
        cin >> persons[i].birth.year;
        cout << "Szuletes honapja: ";
        cin >> persons[i].birth.month;
        cout << "Szuletes napja: ";
        cin >> persons[i].birth.day;
        cout << "Tavolsag a fovarostol: ";
        cin >> persons[i].dist;
    }
    korrend(persons);
    return 0;
}