#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;
	Node(int data) {
		this->data = data;
		this->next = nullptr;
		this->prev = nullptr;
	}
};
// traversal of list
void print(Node* head) {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
// getting length of the list
int getLength(Node* head) {
	Node* temp = head;
	int len = 0;
	while (temp != nullptr) {
		len++;
		temp = temp->next;
	}
	return len;
}
// Insert data at the start of the linked list
void insertAtHead(Node* &head, int data) {
	// if head is null
	if (head == nullptr) {
		Node* temp = new Node(data);
		head = temp;
		return;
	}
	// create a new node for data
	Node* temp = new Node(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
}
// Insert data at the end of the linked list
void insertAtEnd(Node* &head, int data) {
	// if head is null
	if (head == nullptr) {
		Node* temp = new Node(data);
		head = temp;
		return;
	}
	// get the tail of the list
	Node* temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	// create a new node for inserting
	Node* n = new Node(data);
	temp->next = n;
	n->prev = temp;
	n->next = nullptr;
}
// Insert data at a given position of the linked list
void insertAtPosition(Node* &head, int data, int position) {
	// check if the position is valid or not
	if (position < 0) {
		cout << "!Invalid Position" << endl;
		return;
	}
	// check if the data is to be added at the start
	if (position == 0) {
		insertAtHead(head, data);
		return;
	}
	int len = getLength(head);
	if (position >= len) {
		insertAtEnd(head, data);
		return;
	}

	// Insert at any other position
	Node* temp = head;
	for (int i = 1; i < position; i++) {
		temp = temp->next;
	}

	// Create the node to add
	Node* n = new Node(data);
	n->next = temp->next;
	if (temp->next != nullptr) {
		temp->next->prev = n;
	}
	temp->next = n;
	n->prev = temp;
}


int main() {
	Node* node1 = new Node(10);
	Node* head = node1;
	print(head);
	cout << getLength(head) << endl;
	insertAtHead(head, 11);
	insertAtHead(head, 5);
	print(head);
	insertAtEnd(head, 80);
	print(head);
	insertAtPosition(head, 50, 2);
	print(head);
	insertAtPosition(head, 12, -1);
	print(head);
	return 0;
}