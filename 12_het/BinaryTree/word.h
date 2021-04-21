#ifndef SZOGYAK
#define SZOGYAK
#include <iostream>

using namespace std;

struct szogyak {
	string szo;
	int szoDB;
	szogyak* bal;
	szogyak* jobb;
};


struct bejegyzes {
	string nev;
	string telszam;
	bejegyzes* bal;
	bejegyzes* jobb;
};


struct morze {
	char betu;
	morze* bal;
	morze* jobb;
};


#endif
