#include <iostream>
using namespace std;
string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printNumber(int n) {
	if (n == 0)
		return;
	int last_digit = n % 10;
	printNumber(n / 10);
	cout << spell[last_digit] << endl;
}
int main() {
	int n;
	cin >> n;
	printNumber(n);
}