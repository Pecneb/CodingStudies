#include <iostream>
#include <cstdlib>

using namespace std;

#define MIN 1
#define MAX 3
void level_one() {
    // MIN MAX intervallumon belul szamok bekerese, 0 ra kilepes.
    int db[MAX-MIN+1] = {0};
    int szam;
    cout << "Adjon meg szamokat a(z) [" << MIN << ", " << MAX << "] intervallumban 0 vegjelig!\n";
    while(cout << "Kovetkezo szam: ", cin >> szam, szam != 0) { // erdekesseg! meg lehet adni utasitasokat a feltetel elott.
        if(szam>=MIN and szam<=MAX) {
            db[szam-MIN]++;
        } else {
            cout << "Intervallumon kivuli ertek!\n";
        }
    }
    cout << "A megadott szaok mennyisege: \n";
    for(int i=0; i<MAX-MIN+1; i++) {
        cout << i+MIN << " mennyisege: " << db[i] << endl;
    }
}

#define MAX_TWO 3
struct counter {
    int num, db;
};
void level_two() {
    counter count[MAX_TWO];
    int kind = 0;
    int szam;
    cout << "Adjon meg szamokat tetszoleges intervallumban (MAX 100 fele ertek) 0 vegjelig!\n";    
    while(cout << "Kovetkezo szam: ", cin >> szam, szam!=0) {
        int i;
        for(i=0; i<kind and szam!=count[i].num; i++);
        if(i == MAX_TWO) cout << "Tul sok kulondozo ertek faszos, esznel legy!\n";
        else if(i==kind) {
            count[kind].num = szam;
            count[kind].db = 1;
            kind++;
        } else {
            count[i].db++;
        }
    }
    cout << "A megadott szamok mennyisege:\n";
    for(int i=0; i<kind; i++) {
        cout << count[i].num << " mennyisege: " << count[i].db << endl;
    }
}

void hiba(counter* sz) {
    if(sz == NULL) {
        cerr << "Memoriakezelesi hiba.\n";
        exit(1);
    }
}

void level_three() {
    int meret=2;
    counter* count = new counter[meret];
    hiba(count);
    int kind = 0;
    int szam;
    cout << "Adjon meg szamokat tetszoleges intervallumban 0 vegjelig!\n";    
    while(cout << "Kovetkezo szam: ", cin >> szam, szam!=0) {
        int i;
        for(i=0; i<kind and szam!=count[i].num; i++);
        if(i==kind) {
            if(kind == meret) {
                counter* new_count = new counter[meret*2];
                hiba(count);
                for(int j=0; j<kind; j++) {
                    new_count[j] = count[j];
                }
                meret *= 2;
                delete[] count;
                count = new_count;
            }
            count[kind].num = szam;
            count[kind].db = 1;
            kind++;
        } else {
            count[i].db++;
        }
    }
    cout << "A megadott szamok mennyisege:\n";
    for(int i=0; i<kind; i++) {
        cout << count[i].num << " mennyisege: " << count[i].db << endl;
    }
    delete[] count;
}

int binker(counter* c, int key, int start, int end) {
    if(start > end) {
        cerr << "Number not found" << endl;
        return -1;
    } else {
        int mid = (start+end)/2;
        if((c+mid)->num == key) {
            cerr << "Found at: " << mid << endl;
            return mid;
        } else {
            if((c+mid)->num < key) {
                return binker(c, key, mid+1, end);
            } else {
                return binker(c, key, start, mid-1);
            }
        }
    }
}

void rendez(counter* c, int meret) {
    cerr << "Rendezes..." << endl;
    int i, j, k;
    for(i=0; i<meret; i++) {
        k=i;
        for(j=i; j<meret; j++) {
            if((*(c+k)).num > (*(c+j)).num) {
                k = j;
            }
        }
        if(k>i) {
                counter swap = *(c+k);
                *(c+k) = *(c+i);
                *(c+i) = swap;
        }
    }
}

void level_four() {
    int meret = 2;
    counter* count = new counter[meret];
    hiba(count);
    int kind = 0;
    int szam;
    cout << "Adjon meg szamokat tetszoleges intervallumban 0 vegjelig!\n";    
    while(cout << "Kovetkezo szam: ", cin >> szam, szam!=0) {
        if(kind>1) rendez(count, meret);
        int talalt = binker(count, szam, 0, meret);
        if(talalt == -1) {
            if(meret == kind) {
                counter* new_count = new counter[meret*2];
                for(int i=0; i<kind; i++) {
                    new_count[i] = count[i];
                }
                delete[] count;
                count = new_count;
            }
            count[kind].num = szam;
            count[kind].db = 1;
            kind++;
            cerr << kind << " kind of numbers." << endl;
        } else {
            (count+talalt)->db++;
        }
    }
    cout << "A megadott szamok mennyisege:\n";
    for(int i=0; i<kind; i++) {
        cout << count[i].num << " mennyisege: " << count[i].db << endl;
    }
    delete[] count;
}

int main() {
    int level;
    cout << "Melyik szintet akarja kitolni? (1/2/3/4)";
    cin >> level;
    switch(level){
        case 1:
            level_one();
            break;
        case 2:
            level_two();
            break;
        case 3:
            level_three();
            break;
        case 4:
            level_four();
            break;
    }
    return 0;
}