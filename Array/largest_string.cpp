#include <bits/stdc++.h>
using namespace std;

int main() {
	char sentence[1000];
	char larg[1000];

	int n = 0;
	cin >> n;
	// use cin.get() to get the \n
	cin.get();
	int largest = 0;
	while (n--) {
		cin.getline(sentence, 1000);
		int len = strlen(sentence);
		if (len > largest) {
			largest = len;
			strcpy(larg , sentence);

		}

	}
	cout << "largest sentence is: " << endl;
	cout << larg << endl;

}