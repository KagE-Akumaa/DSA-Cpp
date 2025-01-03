#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int s, int e) {
	int i = s;
	int m = (s + e) / 2;
	int j = m + 1;
	vector<int> t;

	while (i <= m && j <= e) {
		if (a[i] < a[j]) {
			t.push_back(a[i]);
			i++;
		}
		else {
			t.push_back(a[j]);
			j++;
		}
	}

	while (i <= m) {
		t.push_back(a[i++]);
	}
	while (j <= e) {
		t.push_back(a[j++]);
	}

	int k = 0;
	for (int idx = s; idx <= e; idx++)
		a[idx] = t[k++];
}

void mergeSort(vector<int> &a, int s, int e) {
	// base case
	if (s >= e)
		return;
	int m = (s + e) / 2;
	mergeSort(a, s, m);
	mergeSort(a, m + 1, e);
	merge(a, s, e);
}

int main() {
	vector <int> a = {10, 5, 2, 0, 7, 6, 4};
	int s = 0, e = a.size() - 1;

	mergeSort(a, s, e);

	for (int i : a)
		cout << i << endl;
}