#include<iostream>
using namespace std;
int Feladat1() {
    cout << "Irjon be egy szamot!" << endl;
    int szam;
    cin >> szam;
    cout << szam*2 << endl;
    return 0;
}
int Feladat2() {
    cout << "Irjon be ketto szamot!" << endl;
    int szam1;
    int szam2;
    cin >> szam1;
    cin >> szam2;
    int ossz;
    ossz = szam1 + szam2;
    int szorz;
    szorz = szam1*szam2;
    cout << "A ket szam szorzata: " << szorz << endl;
    cout << "A ket szam osszege: " << ossz << endl;
    cout << "A szorzat es az osszeg kulombsege: " << szorz - ossz << endl;
    return 0;
}

int Feladat3() {
    cout << "Irjon be egy szamot: ";
    int szam;
    cin >> szam;
    cout << "A szam abszolut erteke: " << abs(szam) << endl;
    if (szam%2 == 0) {
        cout << szam/2 << endl;
    } else {
        cout << szam%2 << endl;
    }
    return 0;
}

int Feladat4() {
    std::cout << "Adjon meg egy szamot! ";
    int szam;
    std::cin >> szam;
    if (szam < 0) {
    szam = -szam; 
    }
    std::cout << szam << std::endl;

    if (szam%2==0) {
        std::cout << "A szam fele: " << szam/2 << std::endl;
    } else {
        std::cout << "Paratlan szam eseten a 2-vel osztas eredmenye: "
                  << szam/2 << std::endl;
    }
    return 0;
}
int Feladat5() {
      int min, max, szam, osszeg, szorzo;
    osszeg = 0;
    std::cout << "Mennyi legyen a legkisebb szam? ";
    std::cin >> min;
    if (min%2==1) {
      min = min + 1;
    }
    szam = min;
    std::cout << "Mennyi legyen a legnagyobb szam? " << std::endl;
    std::cin >> max;
    if (min > max) {
      szorzo = -1;
    } else {
      szorzo = 1;
    }
    if (max > 1) {
    while (szorzo*szam <= szorzo*max) {
      std::cout << szam << '\t';
      osszeg = osszeg + szam;
      szam = szam + szorzo*2;
    }
    std::cout << std::endl;
    std::cout << "A szamok osszege: " << osszeg << std::endl;
    } else {
      std::cout << "N erteke tul kicsi!\n";
    }
    return 0;
}
int FeladatOpcionalis() {
   // Opcionalis feladat: a bekert szam prim szam-e.
 int i, N;
 i = 2;
 std::cout << "Adjon meg egy N szamot: ";
 std::cin >> N;
 std::cout << std::endl;
 bool isPrime = true;
 if(N == 1 || N == 0) {
   isPrime = false;
 } else {
   while(i<N && isPrime) {
   if(N%i==0) {
     isPrime = false;
   }
   std::cout << i << '\t';
   i = i + 1;
  }
 }
 std::cout << '\n' << std::endl;
 if(isPrime) {
   std::cout << N << " prim szam." << std::endl;
 } else {
   std::cout << N << " nem prim szam." << std::endl;
 }
 return 0;
}
int main() {
    FeladatOpcionalis();
    return 0;
}

