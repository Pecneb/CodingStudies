#include <iostream>

int main() {
  std::cout << "Negyzet rajzolasa\nAdja meg az oldahosszt!";
  int n;
  std::cin >> n;
  int sor, oszlop;
  sor = 0;
  while(sor < n){
    oszlop = 0;
    while(oszlop < n){
      if(sor == 0 || sor == n-1) std::cout << '*'; // elso es utolso sor csupa csillag
      else if(oszlop == 0 || oszlop == n-1) std::cout << '*'; // kozepso sorok ket vege csillag
      else if(sor == oszlop || sor+oszlop==n-1) std::cout << '*'; // atlok
      else std::cout << ' ';
      oszlop++;
    }
    std::cout << std::endl;
    sor++;
  }
  
  return 0;
}

/*

  01234
0 *****
1 **  *
2 * * *
3 *  ** 
4 *****

*/