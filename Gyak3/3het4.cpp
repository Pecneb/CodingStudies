#include <iostream>
#define TOMBMERET 10
using namespace std;
int main() {
    int numarray[TOMBMERET], i, bekertszam, db;
    i = 0;
    while (i < TOMBMERET)
    {
        cout << "Adja meg a tomb " << i+1 << ". szamat: ";
        cin >>  numarray[i];
        i++;
    }
    do
    {
        db=0;
        cout << "Adjon meg egy szamot: ";
        cin >> bekertszam;
        i=0;
        while (i<TOMBMERET)
        {
            if(numarray[i] == bekertszam) db++;
            i++;
        }
        cout << bekertszam << ": " << db << " db\n";
    } while (db > 0);
    cout << "Mivel a legitobbi onaltal megadott szam egyszer sem szerepelt a tomben " 
            "ezert a program kileptette." << endl;
    return 0;
}