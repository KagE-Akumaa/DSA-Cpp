#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[] = {1, 2, 3, 4, 5};
	int n = 0;
	cin >> n;
	int c = INT_MAX;
	int low = 0;

	for (int i = 0; i < 5; i++) {
		if (n % a[i] == 0) {
			low = n / a[i];
			//cout << low << endl;
			if (low < c)
				c = low;
		}
	}
	cout << c;
}