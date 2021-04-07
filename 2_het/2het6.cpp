#include <iostream>
#include <math.h>
#define OSSZEADAS 1
#define SZORZAS 2
#define HATVANYOZAS 3
#define SZAMTANISOR 4
#define MASODFOKUEGYENLET 5
int main() {
	int muvelet;
	int a, b;
	int n, hatvany, szamlalo;
	do {
		std::cout << "Matematikai muveletek elvegzese\n"
							<< OSSZEADAS << " - Osszeadas\n"
							<< SZORZAS << " - Szorzas\n"
							<< HATVANYOZAS << " - Hatvanyozas\n"
							<< SZAMTANISOR << " - Szamtani sorozat\n"
							<< MASODFOKUEGYENLET << "- Masodfoku egyenlet\n"
							"Adja meg a muvelet menupontjait, "
							"vagy barmilyen mas szamot a kilepshez!";

		std::cin >> muvelet;
		switch(muvelet) {
			case 1:
				std::cout << "Elso osszeadando: "; std::cin >> a;
				std::cout << "Masodik osszeadando: "; std::cin >> b;
				std::cout << "Az osszeg: " << a+b << std::endl;
				break;
			case 2:
				std::cout << "Szorzando: "; std::cin >> a;
				std::cout << "Szorzo:"; std::cin >> b;
				std::cout << "A szorzat: " << a*b << std::endl;
				break;
			case 3:
				std::cout << "Alap: "; std::cin >> a;
				std::cout << "Kitevo: "; std::cin >> b;
				n = 0;
				hatvany = 1;
				while(n < b) {
					hatvany *= a;
					n++;
				}
				std::cout << "Hatvany: " << hatvany << std::endl;
				break;
			case 4:
				n = 0;
				szamlalo = 1;
				std::cout << "0. tag: "; std::cin >> a;
				std::cout << "Differencia: "; std::cin >> b;
				std::cout << "Elemek szama: "; std::cin >> n;
				while(szamlalo <= n) {
					a += b;
					std::cout << szamlalo << ". tag: " << a << '\n';
					szamlalo++;
				}
				break;
			case 5:
				int c;
				double x1, x2;
				std::cout << "x^2 egyutthatoja: "; std::cin >> a;
				std::cout << "x egyutthatoja: "; std::cin >> b;
				std::cout << "Konstans: "; std::cin >> c;
				x1 = (-b+sqrt((b*b)-(4*c*a)))/(2*a);
				x2 = (-b-sqrt((b*b)-(4*c*a)))/(2*a);
				std::cout << "x1 = " << x1 << " x2 = " << x2 << std::endl;
		}
	} while(muvelet >= 1 && muvelet <= 5);
	return 0;
}