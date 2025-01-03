#include <iostream>
#include "List.h"
//#include "myList.h"
using namespace std;

int main() {
	List l;
	l.push_back(0);
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);


	//l.insert(12, 2);
	//l.pop_front();
	//l.pop_back();
	Node* head = l.begin();
	Node* temp = l.begin();
	Node* mid = l.getMiddle(head);

	cout << "The middle element is: " << mid->getData() << endl;

	while (head != nullptr) {
		cout << head->getData() << endl;
		head = head->next;
	}
	Node* newhead = l.reverse(temp);
	while (newhead != nullptr) {
		cout << newhead->getData() << "hello " << endl;
		newhead = newhead->next;
	}
	// MyList l;
	// l.push_front(1);
	// l.push_front(0);
	// l.push_back(2);
	// l.push_front(4);
	// l.insert(12, 2);
	// l.insert(10, 0);
	// l.pop_front();


	// //int k  = 4;
	// Node* head = l.begin();

	// while (head != nullptr) {
	// 	cout << head->getData() << endl;
	// 	head = head->getNode();
	// }
	// int ans, idx = 0;
	// Node* temp = head;
	// while (temp != nullptr) {
	// 	if (temp->getData() == k) {
	// 		ans = idx;
	// 		break;
	// 	}
	// 	idx++;
	// 	temp = temp->getNode();
	// }
	//cout << "The index to the key is " << idx << endl;



}