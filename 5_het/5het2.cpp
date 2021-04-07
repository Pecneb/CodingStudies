#include <iostream>
#include <cmath>

using namespace std;

int relacio(int a, int b) {
	if(a > b) return 1;
	else if(b > a) return -1;
	else return 0;
}
int main() {
	int szamok[7];
	cout << "Adjon meg 7 db szamot: ";
	for(int i=0; i < 7; i++) {
		cout << i+1 << ". szam: ";
		cin >> szamok[i];
	}
	for(int i=0; i < 6; i++) {
		if(relacio(szamok[i], szamok[i+1]) == 1) {
			cout << szamok[i] << " " << szamok[i+1] << '\n';
		}
	}
	return 0;
}
