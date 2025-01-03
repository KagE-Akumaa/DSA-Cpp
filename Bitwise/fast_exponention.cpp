#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 12;
	int b = 25;
	int ans = 1;
	int mod = 10007;


	while (b > 0) {
		int last_bit = (b & 1);
		if (last_bit) {
			ans = (ans * a) % mod;
			cout << ans << endl;
		}
		a = (a * a) % mod;
		b = (b >> 1);
	}

	cout << ans  << endl;
}