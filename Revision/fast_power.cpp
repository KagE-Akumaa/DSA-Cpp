#include <iostream>
using namespace std;

int fastPower(int a, int n) {
	// base case
	if (n == 0)
		return 1;

	int subpower = fastPower(a, n / 2);
	int subpowersq = subpower * subpower;
	if (n & 1)
		return a * subpowersq;
	return subpowersq;
}

int main() {
	int a, n;

	cin >> a >> n;

	cout << fastPower(a, n) << endl;
}