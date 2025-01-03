#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> a, int i, int n) {
	if (n == 1 || n == 0)
		return true;
	if (a[i] < a[i + 1] and isSorted(a, i + 1, n - 1))
		return true;

	return false;
}
int main() {
	vector <int> a = {11, 2, 3, 4, 5};
	int n = a.size();
	int i  = 0;
	bool check = isSorted(a, n, i);

	cout << check << endl;
}