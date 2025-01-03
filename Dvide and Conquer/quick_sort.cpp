#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int s, int e) {
	int i = s - 1;
	int pivot = a[e];

	for (int j = s; j <= e; j++) {
		if (a[j] < pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[e]);
	return i + 1;
}

void QuickSort(vector<int> &a, int s , int e) {
	// base case
	if (s >= e)
		return;
	int p = partition(a, s, e);
	QuickSort(a, s, p - 1);
	QuickSort(a, p + 1, e);
}

int main() {
	vector <int> a{2, 4, 1, 8, 3, 9, 5, 7, 6};
	int n = a.size();
	QuickSort(a, 0, n - 1);

	for (int i : a)
		cout << i << " ";
}