#include <bits/stdc++.h>
using namespace std;
void SpiralPrint(int a[][10], int m, int n) {
	int startRow = 0;
	int endCol = n - 1;
	int enRow = m - 1;
	int startCol = 0;

	while (startCol <= endCol and startRow <= enRow) {
		for (int col = startCol; col <= endCol; col++) {
			cout << a[startRow][col] << " ";
		}

		for (int row = startRow + 1; row <= enRow; row++) {
			cout << a[row][endCol] << " ";
		}

		for (int col = endCol - 1; col >= startCol; col--) {
			if (startRow == enRow) {
				break;
			}
			cout << a[enRow][col] << " ";
		}
		for (int row = enRow - 1; row >= startRow + 1; row--) {
			if (startCol == endCol) {
				break;
			}
			cout << a[row][startCol] << " ";
		}
		startRow++;
		endCol--;
		enRow--;
		startCol++;
	}
}
int main() {

	int a[][10] = { { 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};
	int n = 4, m = 4;
	SpiralPrint(a, m, n);
}