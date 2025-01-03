#include <bits/stdc++.h>
// all the array elements should be +ve
using namespace std;
void countSort(int a[], int n) {
	int largest = INT_MIN;
	// get the largest element inside the array
	for (int i = 0; i < n; i++)
		largest = max(a[i], largest);
	// create a array of size largest + 1 and set values to 0;
	vector <int> freq(largest + 1, 0);

	// mark the frequency of each element
	for (int i = 0; i < n; i++)
		freq[a[i]]++;
	// add the elements based on their frequency
	int j = 0;
	for (int i = 0; i <= largest; i++) {
		while (freq[i] > 0) {
			a[j] = i;
			freq[i]--;
			j++;
		}
	}

}
int main () {
	int a[] = { 15, 1, 54, 12, 13, 4};
	int n = sizeof(a) / sizeof(int);

	countSort(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
}