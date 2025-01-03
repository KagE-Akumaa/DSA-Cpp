#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Stack {
	vector <T> arr;
public:
	void push(T d) {
		arr.push_back(d);
	}
	void pop() {
		arr.pop_back();
	}
	T top() {
		int lastIndex = arr.size() - 1;
		return arr[lastIndex];
	}
	bool isEmpty() {
		return arr.size() == 0;
	}
};