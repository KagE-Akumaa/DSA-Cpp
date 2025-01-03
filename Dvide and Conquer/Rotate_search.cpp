#include <bits/stdc++.h>
using namespace std;
int RotateSearch(vector<int> a, int s, int e, int key) {
	while (s <= e) {
		int m = (s + e) / 2;
		if (a[m] == key)
			return m;
		else if (a[s] <= a[m]) {
			if (key >= a[s] and key <= a[m])
				e = m - 1;
			else
				s = m + 1;
		}
		else {
			if (key >= a[m] and key <= a[e])
				s = m + 1;
			else
				e = m - 1;
		}
	}
	return -1;
}
int main() {
	vector<int> a{3, 4, 5, 6, 7, 0, 1, 2};
	int key;
	cin >> key;

	int s = 0, e = a.size() - 1;
	cout << RotateSearch(a, s, e, key);


}