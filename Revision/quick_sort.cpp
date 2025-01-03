#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int s, int e) {
	int i = s - 1;
	int pivot = a[e];

	for (int j = s; j < e; j++) {
		if (a[j] < pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[e]);
	return i + 1;

}

void quickSort(vector<int> &a, int s, int e) {
	// base case
	if (s >= e)
		return;
	int p = partition(a, s, e);
	quickSort(a, s, p - 1);
	quickSort(a, p + 1, e);
}

int main() {
	vector <int> a = {10, 5, 2, 0, 7, 6, 4};
	int s = 0, e = a.size() - 1;

	quickSort(a, s, e);

	for (int i : a)
		cout << i << endl;

}