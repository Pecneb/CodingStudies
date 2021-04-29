#include <iostream>
#include <fstream>

using namespace std;

streampos filesize(ifstream& f) {
    streampos akt, vege;
    akt = f.tellg();
    f.seekg(0, ios_base::end);
    vege = f.tellg();
    f.seekg(akt, ios_base::beg);
    return vege;
}

int main(int argc, char* argv[]) {
    if(argc != 2) {
        cout << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }
    
    ifstream f(argv[1], ios_base::binary);
    if(!f.is_open()) {
        cerr << argv[0] << " couldnt be opened!\n";
        return 2;
    }

    streampos meret = filesize(f);
    int i=0;
    char c;
    while(f.get(c)) {
        i++;
        if(c<' ' && c!='\n' && c!='\r' && c!='\t' && (c!=26 || i!=meret)) {
            cout << "A(z) " << argv[1] << " valoszinuleg binaris";
            f.close();
        }
    }

    cout << "A(z) " << argv[1] << " valoszinuleg szovegfile!\n";
    return 0;
}