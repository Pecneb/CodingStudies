#include <iostream>
#define ARRAYLEN 5
using namespace std;

int main() {
    int num_array[ARRAYLEN], i, shift;
    cout << "Irjon be " << ARRAYLEN << " db szamot.\n";
    i = 0;
    while(i < ARRAYLEN){
    	cin >> num_array[i];
        i++;
    }
    cout << "Ija be mennyivel akarja eltolni a szamokat a tombon belul, "
            "ha balra akarja akkor < 0 szamot adjon meg, "
            "ha jobbra akkor > 0 szamot adjon meg, "
            "kilepeshez pedig 0-at.\n";
    cin >> shift;
    
    if(shift>0){
        int temp;
        i = 0;
        while(i < shift) {
            temp = num_array[ARRAYLEN-1];
            for(int j = ARRAYLEN-2; j>=0; j--) {
            	num_array[j+1] = num_array[j];
            }
            num_array[0] = temp;
            i++;
        }
        for(int k = 0; k < ARRAYLEN; k++) {
            cout << num_array[k] << '\t';
        }
        cout << endl;
    } else if(shift<0){
        int temp;
        i = 0;
        while(i<abs(shift)) {
            temp = num_array[0];
            for(int j = 1; j < ARRAYLEN; j++) {
                num_array[j-1] = num_array[j];
            }
            num_array[ARRAYLEN-1] = temp;
            i++;
        }
        for(int k = 0; k < ARRAYLEN; k++) {
            cout << num_array[k] << '\t';
        }
        cout << endl;
    }
    return 0;
}
