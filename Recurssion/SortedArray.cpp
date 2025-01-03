#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
	if (n == 0 or n == 1) {
		return true;
	}
	if (arr[0] < arr[1] && isSorted(arr + 1, n - 1))
		return true;
	else
		return false;
}



int main() {
	int arr[] = {1, 2, 3, 41, 5};
	int n = sizeof(arr) / sizeof(int);
	bool sor = isSorted(arr, n);
	cout << sor << endl;
}