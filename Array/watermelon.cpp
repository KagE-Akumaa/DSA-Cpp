#include <bits/stdc++.h>
using namespace std;
bool check(int n) {
	if (n % 2 != 0 || n == 2)
		return false;
	else {
		int m = n % 2;
		if (m % 2 == 0)
			return true;

		else
			return false;
	}
}
int main() {
	int n = 0;
	cin >> n;
	bool weight = check(n);
	weight == 1 ? cout << "YES" : cout << "NO";
}