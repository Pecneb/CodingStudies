#include <iostream>

using namespace std;

int faktorialis(int n) {
	if(n < 2) {
		return 1;
	} else {
		return n * faktorialis(n-1);
	}
}

int main() {
	cout << "5! = " << faktorialis(5) << endl;
	return 0;
}
