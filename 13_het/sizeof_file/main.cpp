#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cout << "Hasznalat: " << argv[0] << " <filename>" << endl;
    } else {
        ifstream file(argv[1]);
        if(file.is_open()) {
            file.seekg(0, ios_base::end);
            streampos vege = file.tellg();
            cout << "Size: " << vege << " bajt";
            file.close();
        } else {
            cerr << "Problema a fajl megnyitasakor!";
        }
    }
}