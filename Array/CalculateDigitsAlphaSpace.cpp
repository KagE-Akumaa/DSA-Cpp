#include <iostream>
#include <cstring>

using namespace std;
int main() {
	char ch = cin.get();
	int digits = 0, spaces = 0, alpha = 0;

	while (ch != '\n') {
		if (ch >= '0' && ch <= '9')
			digits++;
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			alpha++;
		if (ch == ' ' || ch == '\t')
			spaces++;
		ch = cin.get();
	}
	cout << digits << endl << alpha << endl << spaces << endl;
}