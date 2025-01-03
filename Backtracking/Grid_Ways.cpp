#include <iostream>
using namespace std;
int grid(int m, int n, int x, int y) {
	// base case
	if (x == m - 1 && y == n - 1) {
		return 1;
	}
	if (x >= m || y >= n)
		return 0;
	int ans = grid(m, n, x + 1, y) + grid(m, n, x, y + 1);
	return ans;
}
int main() {
	int m, n;
	cin >> m >> n;
	int ans = grid(m, n, 0, 0);
	cout << ans << endl;
}