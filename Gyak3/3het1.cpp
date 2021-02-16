#include <iostream>
using namespace std;

int main() {
    int szam;
    double ossz;
    cout << "Irjon be 10 szamot: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> szam;
        ossz += szam;
    }
    cout << "A beirt szamok atlaga: " << ossz/10 << endl;
    return 0;
}