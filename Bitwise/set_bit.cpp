#include <iostream>
using namespace std;

int getithbit(int n , int i) {
	int mask = 1 << i;
	return (n & mask) ? 1 : 0;
}
void setithbit(int &n, int i) {
	int mask = (1 << i);
	n = (n | mask);
}

void clearithbit(int &n, int i) {
	int mask = ~(1 << i );
	n = (n & mask);
}
void updateithbit(int &n, int i, int v) {
	clearithbit(n, i);
	int mask = v << i;
	n = n | mask;
}
void clearlastithbit(int &n , int i) {
	int mask = (~0 << i);
	n = n & mask;
}
void clearbitsinrange(int &n, int i, int j) {
	int a = (~0) << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	n = n & mask;

}

int main() {
	int n = 31;
	int i = 1;
	int j = 3;
	//cin >> i;
	int v;
	//cin >> v;
	//cout << getithbit(n, i) << endl;

	//setithbit(n, i);
	//clearithbit(n, i);
	//updateithbit(n, i, v);
	//clearlastithbit(n, i);
	clearbitsinrange(n, i, j);
	cout << n << endl;
}