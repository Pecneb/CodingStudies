#include <iostream>
#include "verem2.h"
using namespace std;
/*
Szabalyok:
additiv
  multiplikativ
  multiplikativ + additiv
  multiplikativ - additiv

multiplikativ
  elsodleges
  elsodleges * multiplikativ
  elsodleges / multiplikativ

elsodleges
  ( additiv )
  szam
 */
double additiv();
double multiplikativ();
double elsodleges();

double additiv() {
  double ertek = multiplikativ();
  if(not ures()) {
    string op = kivesz();
    if(op == "+") {
      return ertek + additiv();
    } else if(op == "-") {
      return ertek - additiv();
    } else {
      berak(op);
    }
  }
  return ertek;
}

double multiplikativ() {
  double ertek = elsodleges();
  if(not ures()) {
    string op = kivesz();
    if(op == "*") {
      return ertek * multiplikativ();
    } else if(op == "/") {
      return ertek / multiplikativ();
    } else {
      berak(op);
    }
  }
  return ertek;
}

double elsodleges() {
  if(not ures()) {
    string kovetkezo = kivesz();
    if(kovetkezo == "(") {
      double ertek = additiv();
      kivesz(); // ) eltavolitasa
      return ertek;
    } else {
      return stod(kvetkezo); // C++11
    }
  } else {
    return 0;
  }
}
