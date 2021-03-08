#include <iostream>
#include <cmath>

using namespace std;

int Maximum(int a, int b) {
	if(a > b) return a;
	else return b;
}

int main() {
	int uj, max, db=0;
	cout << "Irjon be egy szamot: "; cin >> max;
	do{
		cout << "Irjon be szamokat: "; cin >> uj;	
		if(Maximum(uj, max) > max) {
			max = uj;
			db++;
			cout << "Ez volt a(z) " << db << ". nagyobb szam!\n";
		}
	}while(db < 3);
	return 0;
}
