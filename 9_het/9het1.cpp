#include <iostream>
using namespace std;

/*
[0] 1
[1] 1 1
[2] 1 2 1
[3] 1 3 3 1
[4] 1 4 6 4 1
*/
int main() {
    int size;
    cout << "Adja meg mekkora pascal haromszoget akar: "; cin >> size;
    int** pascal = new int*[size];
    for(int row=0; row<size; row++) {
        pascal[row] = new int[row+1];
    }

    for(int row=0; row<size; row++) {
        pascal[row][0] = pascal[row][row] = 1;
        for(int col=1; col<row; col++) {
            pascal[row][col] = pascal[row-1][col-1] + pascal[row-1][col];
        }
    }
    
    for(int row=0; row<size; row++) {
        for(int col=0; col<=row; col++) {
            cout << pascal[row][col] << '\t';
        }
        cout << endl;
    }
    
    for(int row=0; row<size; row++) {
        delete[] pascal[row];
    }
    delete[] pascal;
    return 0;
}