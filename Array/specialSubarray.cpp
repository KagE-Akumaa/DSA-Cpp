#include <bits/stdc++.h>
using namespace std;

void subarray (int *a, int n) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] == a[j])
				c++;
			cout << a[i] << "," << a[j] << endl;
		}
	}
	cout << c;
}

int main () {
	int t;
	cin >> t;

	while (t > 0) {

		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		subarray(a, n);


		t--;
	}
}