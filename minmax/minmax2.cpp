#include <iostream>
using namespace std;

int main() {
	cout << "Adjon meg nem negativ egesz szamokat, \n"
	     << "megkeressuk kozottuk a minimalisat es a maximalisat. \n"
	     << "Kilepes negativ szam megadasaval. \n";
	int db=0, akt=1; // inicializacio
	int min, max;
    cout << "A kovetkezo szam: "; // kod elso elofordulasa
    cin >> akt;
    min = max = akt;
	while(akt >= 0){
			if(akt > max) max = akt;
			else if(akt < min) min = akt;
			db++;
            cout << "Kovetkezo szam: "; // kod masodik elofordulasa
            cin >> akt;
    }
	if(db > 0) cout << "A minimum: " << min
					<< "\nA maximum: " << max << '\n';
	else cout << "Nem adott meg szamokat.\n";
	return 0;
}
