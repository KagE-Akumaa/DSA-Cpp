#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *a, int n) {
	for (int i = 1; i < n; i++) {
		int current = a[i];
		int prev = i - 1;
		while (prev >= 0 && a[prev] > current) {
			a[prev + 1] = a[prev];
			prev = prev - 1;
		}
		a[prev + 1] = current;

	}
	int main () {
		int a[] = {12, 34, 2, 5, 654, 23};
		int n = sizeof(a) / sizeof(int);

		insertionSort(a, n);
		for (int i : a)
			cout << i << endl;
	}