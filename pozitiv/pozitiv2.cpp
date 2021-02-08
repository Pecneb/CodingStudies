#include <iostream>
using namespace std;

int main() {
    int szam;
    do
    {
        cout << "Adjon meg egy pozitiv egesz szamot!";
        cin >> szam;
    } while (szam <= 0);
    cout << "Beolvasott ertet: " << szam << endl;
    return 0;
}