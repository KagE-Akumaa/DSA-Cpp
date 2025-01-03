#include <iostream>
using namespace std;
int fact(int n) {
	if (n == 0 || n == 1)
		return 1;
	int ans = n * fact(n - 1);
	return ans;
}
int fibo(int n) {
	//base case
	if (n == 0 || n == 1)
		return n;
	int ans = fibo(n - 1) + fibo(n - 2);
	return ans;
}
int main() {
	int n;
	cin >> n;

	cout << fact(n) << endl;
	cout << fibo(n);
}