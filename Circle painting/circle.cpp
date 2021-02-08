#include <iostream>
#define R 10 // kor sugara
using namespace std;

int main() {
    int sor = -R;
    while(sor <= R) {
        int oszlop = -R;
        while(oszlop <= R) {
            if(R*R >= sor*sor + oszlop*oszlop) cout << '*';
            else cout << ' ';
            oszlop++;
        }
        sor+=2;
        cout << '\n';
    }
    return 0;
}