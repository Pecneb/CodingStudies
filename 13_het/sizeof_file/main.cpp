#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cout << "Hasznalat: " << argv[0] << " <filename>" << endl;
    } else {
        ifstream file(argv[1], ios_base::binary);
        if(file.is_open()) {
            int filesize;
            while(file.get(), !file.eof()) filesize++;
            if(filesize < 1000) {
                cout << "Size: " << (filesize) << endl;
            } else if(filesize > 999 && filesize < 1000000) {
                cout << "Size: " << (filesize/1000) << "K" << endl;
            } else {
                cout << "Size: " << (filesize/1000000) << "M" << endl;
            }
            file.close();
        } else {
            cerr << "Problema a fajl megnyitasakor!";
        }
    }
}