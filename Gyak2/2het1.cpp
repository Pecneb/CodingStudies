#include <iostream>

int main() {
    int szam1, szam2;
    std::cout << "Irjon be ket szamot: ";
    std::cin >> szam1;
    std::cin >> szam2;
    if(szam1 == szam2) std::cout << "A ket szam egyenlo.";
    else if(szam1 > szam2) std::cout << "A(z) " << szam1 << " nagyobb mint a(z) "
    << szam2 << ".";
    else std::cout << "A(z) " << szam2 << " nagyobb mint a(z) " << szam1 << ".";
    return 0;
}