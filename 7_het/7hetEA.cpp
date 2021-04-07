#include <iostream>

using namespace std;

int memoriacimek() {
    int i=1;
    cout << "Az i valozo memoriacime: " << &i << '\n';
    struct koordinata { int x,y;} k;
    cout << "A k struktura memoriacime: " << &k
         << "\nk.x helye: " << &k.x << ", k.y helye: "
         << &k.y << '\n';
    double dt[2];
    cout << "A dt tomb memoriacime: " << &dt;
    return 0;
}

int indirekcio() {
    int i = 3;
    int* pi = &i;
    cout << pi << endl;
    cout << *pi << endl;
    *pi += 2; // i += 2
    cout << "i = " << i << endl;
    return 0;
}

void csere3(int* a, int* b) {
    int cs = *a;
    *a = *b;
    *b = cs;
}

struct date
{
	int year, month, day;
};

int main() {
    /*int a = 2;
    int b = 1;*/
    // memoriacimek();
    // indirekcio();
    // csere3(&a, &b);
	return 0;
}