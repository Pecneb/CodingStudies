#include <iostream>

using namespace std;

int fibonacci(int tag) {
	if(tag < 2) {
		return tag;
	} else {
		return fibonacci(tag-1)+fibonacci(tag-2);
	}
}

int main() {
	cout << "A Fibonacci sorozat 5. tagja: "
	     << fibonacci(5) << endl;
	return 0;
}
