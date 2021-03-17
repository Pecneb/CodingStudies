#include <iostream>
#include <cstdlib>
#include <ctime>
#define MIN 0
#define MAX 10
using namespace std;


int main() {
    srand(time(NULL));
    int a[6];
    for(int i=0; i<(int)(sizeof(a)/sizeof(a[0])); i++) {
        a[i]= MIN + rand()%(MAX-MIN+1);
        cout << a[i] << '\n';
    }
    cout << '\n';
    int* mut[10];
    for(int i=0; i<(int)(sizeof(mut)/sizeof(mut[0])); i++) {
        int be; cin >> be;
        for(int j=0; j<(int)(sizeof(a)/sizeof(a[0])); j++) {
            if(be == a[j]) {mut[i] = &a[j]; break;}
            else mut[i] = nullptr;
        }
    }
    cout << '\n';
    for(int i=0; i<(int)(sizeof(mut)/sizeof(mut[0])); i++) {
        if(mut[i] == nullptr) cout << 0 << ' ' << mut[i] << '\n';
        else cout << *mut[i] << ' ' << mut[i] << '\n';
    }
    return 0;
}