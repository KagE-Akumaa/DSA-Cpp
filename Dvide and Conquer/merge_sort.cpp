#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int s, int e) {
	int i = s;
	int m = (s + e) / 2;
	int j = m + 1;
	vector<int> temp;

	while (i <= m and j <= e) {
		if (a[i] < a[j]) {
			temp.push_back(a[i]);
			i++;
		}
		else {
			temp.push_back(a[j]);
			j++;
		}
	}
	// i = m copy j to e elements inside of temp
	while (j <= e) {
		temp.push_back(a[j++]);
	}
	// j = e copy i to m elments inside temp
	while (i <= m) {
		temp.push_back(a[i++]);
	}
	// copy the values of temp inside the original array
	int k = 0;
	for (int i = s; i <= e; i++) {
		a[i] = temp[k++];
	}
}



void mergeSort(vector<int> &a, int s, int e) {
	//base case
	if (s >= e)
		return;
	int m = (s + e) / 2;
	mergeSort(a, s, m);
	mergeSort(a, m + 1, e);
	// helper function which will sort and merge
	return merge(a, s, e);
}

int main() {
	vector <int> a{2, 4, 1, 8, 3, 9, 5, 7, 6};
	int s = 0, e = a.size() - 1;
	mergeSort(a, s, e);
	for (int i : a)
		cout << i << " ";

}