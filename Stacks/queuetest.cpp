#include <iostream>
#include "queue.h"
using namespace std;
int main() {
	Queue myque(7);
	myque.push(1);
	myque.push(2);
	myque.push(3);
	myque.push(4);
	myque.push(5);
	myque.push(6);
	myque.push(7);
	myque.push(8);
	myque.pop();
	myque.pop();
	myque.push(9);
	while (!myque.empty()) {
		cout << myque.frontt() << endl;
		myque.pop();
	}
	return 0;

}