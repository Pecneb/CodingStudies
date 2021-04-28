#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cout << "Hasznalat: " << argv[0] << "<fajlnev>";
    } else {
        ifstream file(argv[1]);
        if(file.is_open()) {
            char c;
            while(file.get(c), !file.eof()) cout << c;
        }   else {
            cerr << "Hiba a fajl megnyitasanal!";
        }
    }
}