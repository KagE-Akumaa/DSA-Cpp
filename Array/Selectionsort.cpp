#include <bits/stdc++.h>

using namespace std;

void selectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int current = a[i];
		int min_pos = i;
		for (int j = i; j < n; j++) {
			if (a[j] < a[min_pos])
				min_pos = j;
		}
		swap(a[i], a[min_pos]);
	}
}
int main() {
	int a[]  = { -45, -5, -87, 98, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	selectionSort(a, n);
	for (int i : a)
		cout << i << endl;
}