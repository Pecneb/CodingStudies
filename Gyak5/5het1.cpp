#include <iostream>
#include <cmath>
using namespace std;

int osszeg(int a, int b) {
	return a+b;
}

int main() {
	int i, j, o;
	do {
		cout << "Adja meg az elso szamot: "; cin >> i;
		cout << "Adja meg a masodik szamot: "; cin >> j;
		o = osszeg(i, j);
		cout << i << " + " << j << " = " << o << endl;
	}while(o%7!=0);
	cout << "Kilepes...\n";
	return 0;
}
