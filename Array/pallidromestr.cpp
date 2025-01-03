#include <bits/stdc++.h>
using namespace std;

int main () {
	string str = "abcdcba";
	int l = str.length();
	cout << l << endl;
	string check(l, ' ');
	for (int i = l - 1; i >= 0; i--) {
		check[i] = str[i];
		cout << check[i];
	}
	cout << endl << check << endl;
	if (check == str)
		cout << "true" << endl;

	else
		cout << "false" << endl;
}