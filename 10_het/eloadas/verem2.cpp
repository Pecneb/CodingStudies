#include "verem2.h" // ez a .h header fileunk, igy lehet #include olni egy altalunk csinalt header filet
#include <string>
#include <iostream>
using namespace std;

// Veremkezeles
// push pop peek clear
// fifo rendezesu tarolo
#define MAX 128
char verem[MAX];
int n = 0;

bool berak(char c) {
  if(n < MAX) {
    verem[n] = c;
    n++;
    return true;
  } else {
    return false;
  }
}

char kivesz() {
  if(n > 0) {
    n--;
    return verem[n];
  } else {
    return 0;
  }
}

bool ures() {
  return n==0;
}
