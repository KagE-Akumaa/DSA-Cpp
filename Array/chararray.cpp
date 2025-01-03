#include <iostream>
#include <cstring>

using namespace std;
int main() {

	// using cin.get();
	char a[100];

	char temp  = cin.get();

	int len = 0;

	while (temp != '#') {
		a[len] = temp;
		len ++;

		temp = cin.get();
	}
	cout << a << endl;
	cout << len << endl;


}