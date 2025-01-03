#include <iostream>
#include <vector>
using namespace std;
void Perm(vector<int> &a, vector<vector<int>> &result, int s) {
	// base case
	if (s == a.size()) {
		result.push_back(a);
		return;
	}
	// rec case
	for (int i = s; i < a.size(); i++) {
		swap(a[s], a[i]);
		Perm(a, result, s + 1);
		swap(a[s], a[i]);
	}
}

int main() {
	vector<int> a = {1, 2, 3};
	vector<vector<int>> result;
	Perm(a, result, 0);

	for (auto x : result) {
		for (auto y : x)
			cout << y << " ";
	}

}