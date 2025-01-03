#include <algorithm>
#include <unordered_set>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int a[num];

	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	int c = 0;
	for (int i = 0; i < num; i++) {
		int flag = 0;
		for (int j = i + 1; j < num; j++) {
			if (a[i] == a[j]) {
				flag = 1;
			}
		}
		if (flag != 0)
			c++;
	}
	cout << c ;
}