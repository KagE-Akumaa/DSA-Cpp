#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	vector <int> a(num);
	for (int i = 0; i < num; i++)
		cin >> a[i];

	sort(a.begin(), a.end());
}