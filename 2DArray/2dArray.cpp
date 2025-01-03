#include <bits/stdc++.h>
using namespace std;
void print(int a[][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
}
int main() {

	int a[100][100];
	int n , m;
	cin >> n >> m;
	int c = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] += c;
			c++;
		}
	}
	print(a, n, m);

}