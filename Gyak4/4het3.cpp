#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string rsz;
    do {
        cout << "Kovetkezo rendszam: ";
        cin >> rsz;
        if(rsz != "k") {
            bool helyes = true;
            if(rsz.length() == 7) {
                for(int i=0; helyes && i<3; i++) {
                    if(!isalpha(rsz[i])) helyes = false;
                }
                if(rsz[3] != '-' || rsz[3] != ' ') helyes = false;
                for(int i=4; helyes && i<7; i++) {
                    if(!isdigit(rsz[i])) helyes = false;
                }
            } else if(rsz.length() == 6) {
                for(int i=0; helyes && i<3; i++) {
                    if(!isalpha(rsz[i])) helyes = false;
                }
                for(int i=3; helyes && i<6; i++) {
                    if(!isdigit(rsz[i])) helyes = false;
                }
            } else helyes = false;
            
            cout << "Ez a rendszam formailag " << (helyes ? "helyes" : "hibas") << ".\n";
        }
    } while(rsz != "k");
    return 0;
}