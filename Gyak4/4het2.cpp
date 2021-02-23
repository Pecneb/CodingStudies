#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "ax^2+bx+c=0 masodfoku egyenlet megoldasa.\n";
    cout << "a: "; cin >> a;
    if(a==0.) cout << "Ez nem egy masodfoku egyenlet!(Nigger)" << endl;
    else {
        cout << "b: "; cin >> b;
        cout << "c: "; cin >> c;
        double x1, x2, dis;
        dis = pow(b, 2) - 4.*a*c;
        cout << "Diszkriminans: " << dis << '\n';
        if(dis < 0.) cout << "Az egyenletnek nincsen valos megoldasa!";
        else {
            x1 = (-b + sqrt(dis)) / (2.*a);
            x2 = (-b - sqrt(dis)) / (2.*a);
            cout << "Van valos gyoke:\n";
            cout << "x1: " << x1 << '\n';
            cout << "x2: " << x2 << endl;
        }
    }
	/*double a, b, c;
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
	}*/
    return 0;
}