#include <iostream>
using namespace std;
pair<int, int> StaircaseSearch(int a[][10], int m, int n, int t) {
	// Check if the target is low or high cause matrix is sorted
	if (t < a[0][0] || t > a[m - 1][n - 1])
		return { -1, -1};
	// counters for row and columns
	int i = 0; // for row
	int j = n - 1; // for columns

	while (i < m && j >= 0) {
		if (a[i][j] == t)
			return {i, j};
		else if (a[i][j] > t)
			j--;
		else
			i++;
	}
	return { -1, -1};
}
int main() {
	int a[][10] = {
		{35, 45, 55, 65},
		{40, 50, 60, 70},
		{52, 54, 62, 73},
		{57, 58, 64, 75}
	};

	int n = 4, m = 4, target = 57;
	pair<int, int> coords = StaircaseSearch(a, m, n, target);
	cout << coords.first << " " << coords.second;
	cout << a[3][0];
}