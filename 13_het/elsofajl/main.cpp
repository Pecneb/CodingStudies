#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream f("elsofajl.txt");
    if(f.is_open()) {
        string szoveg[] = {
            "Ezt a fajlt c++ nyelven irt programmal hoztam letre!",
            "Juppi!",
            "Hello vilag!"
        };
        for(int i=0; i<(int)(sizeof(szoveg)/sizeof(szoveg[0])); i++) {
            f << szoveg[i] << endl;
        }
        f.close();
    } else {
        cerr << "Valami nincs rendben!";
    }
    return 0;
}