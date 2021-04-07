#define _USE_MATH_DEFINES // regi rendszerekhez
#include <iostream>
#include <cmath> // vagy math.h
using namespace std;
int masodfoku(){
	double a, b, c;
	cout << "Az ax^2+bx+c = 0 egyenlet megoldasa\n";
	cout << "a erteke: "; cin >> a;
	if(a == 0.){
		cout << "Az egyenlet nem masodfoku!\n";
	} else {
		cout << "b erteke: "; cin >> b;
		cout << "c erteke: "; cin >> c;
		double d = b*b - 4.*a*c;
		if(d < 0.){
			cout << "Nincs valos gyok!\n";
		} else {
			cout << "x1 = " << (-b + sqrt(d)) / (2.*a)
			     << "\nx2 = " << (-b - sqrt(d)) / (2.*a) << endl;
		}
	}
}
int haromszog5() {
	double n[3];
	int i;
	bool megszerkeztheto = false;
}
int fahrCels1(){
	cout << "Fahrenheit --> Celsius\n"
	     << "Fahrenheit: ";
	double f;
	cin >> f;
	cout << "Celsius: "
	//Egeszosztas, implicit top.konv.
	     << (5./9)*(f-32) << endl;
}
int kettes3() {
	for(cin >> d, i=0; d>0; d/=2, i++) {
		b[i] = d%2='0';
	}
}
int szofordit_for() {
	cout << "Adjon meg egy szot!";
	string szo;
	cin >> szo;
	int eleje, vege;

	for(eleje=0, vege=szo.length()-1; eleje<vege; eleje++, vege--) {
		char csere = szo[eleje];
		szo[eleje] = szo[vege];
		szo[vege] = csere;
	}
	cout << "Megforditva: " << szo << endl;
}
int fahrCels_table() {
	int ALSO=0, FELSO=150, LEPES=10;
	cout << "Fahrenheit\tCelsius\n"
	     << "-----------\t--------\n;
	double f;
	
	for(f=ALSO; f<=FELSO; f+=LEPES){
		cout << f << "\t\t" << (5./9.)*(f-32.) << '\n';
	}
}
int main() {
	fahrCels_table();
	return 0;	
}
