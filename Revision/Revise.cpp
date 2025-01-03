#include <iostream>
using namespace std;
int getIthbit(int n, int i) {
	int mask = (1 << i);
	return (n & mask) > 0 ? 1 : 0;
}
void setbit(int &n, int i) {
	int mask = (1 << i);
	n = n | mask;
}
void clearithbit(int &n, int i) {
	int mask = ~(1 << i);
	n = (n & mask);
}
void updateithbit(int &n, int i, int v) {
	clearithbit(n, i);
	int mask = (v << i);
	n = n | mask;
}
void clearlastithbits(int &n, int i) {
	int mask = (-1 << i);
	n = (n & mask);
}
int convertDecimal(int n) {
	int ans = 0, power = 1;
	while (n > 0) {
		int last_bit = (n & 1);
		ans = ans + (last_bit * power);

		power = power * 10;
		n = n >> 1;
	}
	return ans;
}

int main() {
	int a, n ;
	//int i;
	//int v;
	cin >> a >> n ;
	//cout << getIthbit(n, i);
	//setbit(n, i);
	//clearithbit(n, i);
	//updateithbit(n, i, v);
	//clearlastithbits(n, i);
	//power of two
	if (n & (n - 1))
		cout << "Not a power of two";
	else
		cout << "Yes, power of two";
	//cout << n << endl;

	// count the set bits
	// int c = 0;
	// while (n > 0) {
	// 	n = n & (n - 1);
	// 	c++;
	// }
	// cout << endl << c ;

	// fast exponentiation
	//

	// convert decimal to binary

	cout << endl << convertDecimal(a);
}