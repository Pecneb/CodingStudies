#include <iostream>
#include <cstring>

using namespace std;
#define MAX 100

int main() {
    // char cstr[MAX+1];
    string s;
    char *pcstr;
    cout << "Adjon meg egy karakterlancot!\n";
    // cin >> cstr;
    cin >> s;
    pcstr = new char[s.length()+1];
    if(pcstr == NULL) {
        cerr << "Nana ebbol baj lesz szaros!\n";
        return -1;
    }
    // strcpy(pcstr, cstr);
    strcpy(pcstr, s.c_str());
    cout << "A beolvasott, atlmasolt karakterlanc: ";
    cout << pcstr << endl;
    delete[] pcstr;
    return 0;
}