#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    if(argc != 2) {
        cout << "Hasznalat: " << argv[0] << " <filename>";
    } else {
        ifstream binfile(argv[1], ios_base::binary);
        if(binfile.is_open()) {
            binfile.seekg(0, ios_base::end);
            streampos end = binfile.tellg();
            char* tomb = new char[end];
            binfile.seekg(0, ios_base::beg);
            binfile.read(tomb, end);
            for(char* m=tomb; m<tomb+end; m++) {
                cout << *m;
            }
            cout << endl;
            delete[] tomb;
            binfile.close();
        }    
         else {
            cerr << "Hiba a fajl megnyitasakor!";
        }
    }
    return 0;
}