#include <iostream>
using namespace std;

int main() {
    int szam;
    cout << "Adjon meg egy pozitiv egesz szamot! ";
    cin >> szam;
    while(szam <= 0){
        cout << "Adjon meg egy pozitiv egesz szamot! ";
        cin >> szam;
    }
    cout << "Beolvasott ertek: " << szam << endl;
    return 0;
}