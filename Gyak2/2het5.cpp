#include <iostream>
using namespace std;

int main() {
    /*int N, i=0, j;
    cout << "Adjon meg egy N magassagot: "; cin >> N;
    while(i<N) {
        j=0;
        while(j<=i) {
        cout << '*';
        j++;
        }
        cout << endl;
        i++;
    }*/
    int l, m=0, N=10;
    for (int k = 0; k < N*2; k++)
    {
        if(k<N){
            l=0;
            while(l<m){
                cout << '*';
                l++;
            }
            cout << endl;
            m++;
        } else {
            l=0;
            while(l<m){
                cout << '*';
                l++;
            }
            cout << endl;
            m--;
        }  
    }
    return 0;
}