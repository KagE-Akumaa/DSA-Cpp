#include <iostream>

using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printwords(int n) {
	// base case
	if (n == 0)
		return;
	int last_digit = n % 10;
	printwords(n / 10);
	cout << spell[last_digit] << " ";
}

int main () {
	int n;
	cin >> n;
	printwords(n);
}