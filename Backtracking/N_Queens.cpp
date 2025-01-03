#include <iostream>
#include <vector>
using namespace std;
bool canSolve(vector<vector<int>> &a, int n, int i, int j) {
	// for column
	for (int k = 0; k < i; k++) {
		if (a[k][j] == 1)
			return false;
	}
	int x = i, y = j;
	while (x >= 0 && y >= 0) {
		if (a[x][y] == 1)
			return false;
		x--; y--;
	}

	x = i; y = j;
	while (x >= 0 && y < n) {
		if (a[x][y] == 1)
			return false;
		x--; y++;
	}
	return true;
}

void Nquens(vector<vector<vector<int>>> &result, vector<vector<int>> &a, int n, int i) {
	// base case
	if (i == n) {
		result.push_back(a);
		return;
	}
	for (int j = 0; j < n; j++) {
		if (canSolve(a, n, i, j)) {
			a[i][j] = 1;

			Nquens(result, a, n , i + 1);

			a[i][j] = 0;
		}
	}
	//return false;
}

int main() {
	int n; cin >> n;
	vector<vector<int>> a(n, vector<int>(n, 0));
	vector<vector<vector<int>>> result;

	Nquens(result, a, n, 0);

	for (const auto &board : result) {
		for (const auto &row : board) {
			for (int cell : row) {
				cout << cell << " ";
			}
			cout << endl;
		}
		cout << endl; // Separate different solutions
	}
}