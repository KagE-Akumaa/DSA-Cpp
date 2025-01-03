#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &a, int k) {
	int s = 0, e = a.size() - 1;

	while (s <= e) {
		int m = (s + e) / 2;

		if (a[m] == k)
			return m;
		else if (a[s] <= a[m]) {
			if (k >= a[s] && k <= a[m])
				e = m - 1;
			else
				s = m + 1;
		}
		else {
			if (k >= a[m] && k <= a[e])
				s = m + 1;
			else
				e = m - 1;
		}
	}
	return -1;
}

int main() {
	vector <int> a = {4, 5, 6, 7, 0, 1, 2};
	int k = 0;
	cout << search(a, k) << endl;
}