#include <iostream>
using namespace std;

void rendez(int* t, int size) {
    int i,j,k;
    for(i=0; i<size; i++) {
        k = i;
        for(j=i; j<size; j++) {
            if(*(t+k) > *(t+j)) {
                k = j;
            }
        }
        if(k > i) {
            int cs = *(t+k);
            *(t+k) = *(t+i);
            *(t+i) = cs;
        }
    }
}

int main() {
    int* tomb = new int[5];
    int be;
    for(int i=0; i < 5; i++) {
        cin >> be;
        *(tomb+i) = be;
        cout << i+1 << " = " << *(tomb+i) << '\n';
    }
    rendez(tomb, 5);
    cout << '\n';
    for(int i=0; i < 5; i++) {
        cout << i+1 << " = " << *(tomb+i) << '\n';
    }
    return 0;
}