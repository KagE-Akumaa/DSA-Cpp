#include <iostream>

using namespace std;
int main() {
	char a[1000];
	cin.getline(a, 1000);
	int x = 0, y = 0;

	for (int i = 0; a[i] != '\0'; i++) {
		switch (a[i]) {
		case 'N': y++;
			break;
		case 'S': y--;
			break;
		case 'E': x++;
			break;
		case 'W': x--;
			break;
		}
	}
	cout << x << endl << y << endl;
	// for first quadrant x < 0 y < 0
	if (x >= 0 && y >= 0) {
		while (x--)
			cout << "E";
		while (y--)
			cout << "N";
	}
}