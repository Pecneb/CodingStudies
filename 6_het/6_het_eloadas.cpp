#include <iostream>
#define MAXLETSZAM 1000
using namespace std;

struct hallgato {
	string nev;
	int pontszam;
};

int main(void) {
	struct hallgato hg[MAXLETSZAM];
	int letszam, maxPont = 0;
	cout << "Legeredmenyeseeb hallgatok kikeresese\n"
		"Osztalyletszam: ";
	cin >> letszam;
	for(int i=0; i<letszam; i++) {
		cout << (i+1) << ". hallgato neve: "; cin >> hg[i].nev;
		cout << "ZH-n elert pontszam: "; cin >> hg[i].pontszam;
		if(hg[i].pontszam > maxPont) maxPont = hg[i].pontszam;
	}
	for(i=0; i<letszam; i++) {
		if(hg[i].pontszam == maxPont) cout << hg[i].nev << " pontszam: " << hg[i].pontszam;
	}
	return 0;
}
