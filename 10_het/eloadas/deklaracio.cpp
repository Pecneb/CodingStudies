#include <iostream>
using namespace std;

//deklaracio
int osszead(); // csak visszateresi ertek es nev
//prototipusok
int osszead(int , int);
int osszead(int x, int y);
int osszead(int k, int l);

int i;
/* valtozo ujradeklaralasa tiltott
   error: redefinition of 'int i'
int i;
*/
struct s {
  int tag1;
  double tag2;
};
/* tipus (struktura) ujradeklaralasa sem megengedett!! */
