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

void level_two() {
    cout << "Adjon meg egesz szamokat, ha nem akar mar tobbet megadni adjon meg 0-t!";
    int all = 1, use = 0;
    int *numtomb = new int[1];
    if(numtomb == NULL) exit(1);
    while(use < all) {
        cout << use+1 << ". szam: "; cin >> *(numtomb+use);
        if(*(numtomb+use) == 0) break;
        use++;
        if(use == all) {
            all += 1;
            cerr << "[Dinamikus tomb novelese 1-el]";
        }
    }
}

int main() {
    level_one();
    return 0;
}