#include <iostream>
using namespace std;

int convertobinary(int n) {
	int ans = 0;
	int p = 1;
	while (n > 0) {
		int last_digit = (n & 1);
		ans += p * last_digit;

		p = p * 10;
		n = n >> 1;
	}
	return ans;
}


int main() {
	int n;
	cin >> n;

	cout << convertobinary(n) << endl;
}