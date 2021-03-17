#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int* a_mut = &a;
    cout << a << ' ' << a_mut << endl;
    cout << *a_mut << ' ' << a_mut << endl;
    return 0;
}