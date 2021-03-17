#include <iostream>
#define DB 2
using namespace std;

struct koordinata
{
    int x,y,z;
};


int main() {
    koordinata a[DB];
    cout << "Toltse fel a(z) " <<  DB << " elemu tombot x, y, z koordinatakkal!\n";
    for(int i=0; i<DB; i++) {
        cout << i+1 << ". koordinata: ";
        cin >> (a+i)->x >> (a+i)->y >> (a+i)->z;
    }
    for(int i=0; i<DB; i++) {
        cout << "A koordinata tomb " << i+1 << ". eleme:\n"
             << "x : " << (a+i)->x
             << ", y : " << (a+i)->y
             << ", z : " << (a+i)->z << endl;
    }
    return 0;
}