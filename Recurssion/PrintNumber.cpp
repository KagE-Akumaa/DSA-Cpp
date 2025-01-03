#include <iostream>
using namespace std;
int printNumberDec(int n) {
	if (n == 0) {
		return 1;
	}
	cout << n << endl;
	printNumberDec(n - 1);
}

int printNumberInc(int n) {
	if (n == 0) {
		return 1;
	}

	printNumberInc(n - 1);
	cout << n << endl;
}

int main() {
	int n ;
	cin >> n;
	printNumberDec(n);
	printNumberInc(n);
}