#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* t = new int[n];
    for(int i=0; i<n; i++){
        cout << i+1 << ". szam: "; cin >> t[i];
    }
    for(int i=0; i<n; i++){
        cout << t+i << " " << *(t+i) << '\n';
    }
    cout << t << '\n';
    delete[] t;
    return 0;
}