#include <iostream>
using namespace std;
int FirstOccurence(int arr[], int n, int key) {
	if (n == 0) {
		return -1;
	}
	if (arr[0] == key) {
		return 0;
	}
	int ans = FirstOccurence(arr + 1, n - 1, key);
	if (ans != -1) {
		return ans + 1;
	}
	return -1;
}
int LastOccurence(int arr[], int n, int key) {
	if (n == 0) {
		return -1;
	}
	int last = LastOccurence(arr + 1, n - 1, key);
	if (last == -1) {
		if (arr[0] == key) {
			return 0;
		}
		else
			return -1;
	}
	else
		return last + 1;
}

int main() {

	int arr[] = {1, 2, 5, 8, 3, 1};
	int n = sizeof(arr) / sizeof(int);
	int key = 1;
	//cout << FirstOccurence(arr, n, key) << endl;
	cout << LastOccurence(arr, n, key) ;

}