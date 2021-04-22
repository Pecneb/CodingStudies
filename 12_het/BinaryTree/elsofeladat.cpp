#include <climits>
#include "bintree.h"

inline void tab(int db) {
	for(int i=0; i<db; i++) {
		cout << '\t';
	}
}

csucs* ujCsucs(int ertek) {
	csucs* uj = new csucs;
	uj->egesz = ertek;
	uj->bal = uj->jobb = NULL;
	return uj;
}

void kiir(csucs* cs, int szint) {
	if(cs == NULL) return;
	cout << cs->egesz << endl;
	if(cs->bal != NULL) {
		tab(szint);
		cout << "|--";
		kiir(cs->bal, szint+1);
	}
	if(cs->jobb != NULL) {
		tab(szint);
		cout << "|--";
		kiir(cs->jobb, szint+1);
	}
}

void melyseg(csucs* cs, int szint,  int* min, int* max) {
	if(cs == NULL) return;
	if(cs->bal == NULL && cs->jobb == NULL) {
		if(szint < *min) *min = szint;
		if(szint > *max) *max = szint;
	}
	melyseg(cs->bal, szint+1, min, max);
	melyseg(cs->jobb, szint+1, min, max);
}

bool kiegyensulyozott(csucs* gyoker) {
	int min = INT_MAX;
	int max = 0;
	melyseg(gyoker, 0, &min, &max);
	if(max-min <= 1) return true;
	return false;
}

void felszabadit(csucs* cs) {
	if(cs == NULL) return;
	felszabadit(cs->bal);
	felszabadit(cs->jobb);
	delete cs;
}

int main() {
	csucs* gyoker = ujCsucs(1);
	gyoker->bal = ujCsucs(11);
	gyoker->bal->bal = ujCsucs(111);
	gyoker->bal->bal->bal = ujCsucs(1111);
	gyoker->bal->bal->jobb = ujCsucs(1112);
	gyoker->bal->jobb = ujCsucs(112);
	gyoker->jobb = ujCsucs(12);
	
	kiir(gyoker, 0);
	
	cout << "Ez a fa " << (kiegyensulyozott(gyoker)?"":"nem ")
		<< " kiegyenfulyozott.\n";	
	felszabadit(gyoker);
	return 0;
}
