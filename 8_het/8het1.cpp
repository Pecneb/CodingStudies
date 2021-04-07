#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int main() {
    cerr << "[Egesz szam helyenek lefoglalasa]\n";
    int* n = new int;
    *n = 10;
    cout << n << '\n';
    cout << *n << '\n';
    cerr << "[Egesz szam helyenek felszabaditasa]\n";
    delete n;
    return 0;
}