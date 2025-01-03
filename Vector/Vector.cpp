#include <iostream>
#include "vector.h"
using namespace std;


int main () {
	Vector<int> v(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	cout << v.size() << endl;
	cout << v.Capacity() << endl;
	cout << v[2] << endl;
	Vector<char> c;
	v.push_back('a');
	cout << c[0] << endl;

}