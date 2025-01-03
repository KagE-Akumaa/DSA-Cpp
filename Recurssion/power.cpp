#include <iostream>
using namespace std;
int power(int a, int n) {
	if (n == 0)
		return 1;
	return a * power(a, n - 1);
}
int fastpower(int a, int n) {
	if (n == 0)
		return 1;
	int subPower = fastpower(a, n / 2);
	int subsqPower = subPower * subPower;
	if (n & 1)
		return a * subsqPower;
	return subsqPower;
}
int main() {
	int a, n;
	cin >> a;
	cin >> n;
	cout << power(a, n) << endl;
	cout << fastpower(a, n) << endl;
}