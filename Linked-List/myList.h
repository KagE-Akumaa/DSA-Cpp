#include <iostream>
using namespace std;

class Node {
	int data;
	Node *next;
public:
	Node(int d): data(d), next(nullptr) {}

	int getData() {return data;}
	void setData(int data) {this->data = data;}
	void setNode(Node* next) {this->next = next;}
	Node* getNode() {return next;}
	~Node() {
		if (next != nullptr) {
			delete next;
		}
		cout << "Deleting data from node" << data << endl;
	}

};
class MyList {
	Node *head;
	Node *tail;
public:
	MyList(): head(nullptr), tail(nullptr) {}
	Node* begin() {return head;}
	void push_front(int data) {
		if (head == nullptr) {
			Node *n = new Node(data);
			head = tail  = n;
		}
		else {
			Node *n = new Node(data);
			n->setNode(head);
			head = n;
		}
	}
	void push_back(int data) {
		if (head == nullptr) {
			Node* n = new Node(data);
			head = tail = n;
		}
		else {
			Node* n = new Node(data);
			tail->setNode(n);
			tail = n;

		}
	}
	void insert(int data, int pos) {
		if (pos == 0) {
			push_back(data);
			return;
		}
		Node* temp = head;
		for (int i = 1; i <= pos - 1; ++i)
			temp = temp->getNode();
		Node* n = new Node(data);
		n->setNode(temp->getNode());
		temp->setNode(n);
	}
	void pop_front() {
		if (head == nullptr) { // Check for empty list
			cout << "List is already empty. Nothing to pop." << endl;
			return;
		}

		Node* temp = head; // Store the current head
		head = head->getNode(); // Move head to the next node

		if (head == nullptr) { // If the list becomes empty, update tail
			tail = nullptr;
		}

		temp->setNode(nullptr); // Disconnect the node to be deleted
		delete temp; // Delete the old head
	}

	~MyList() {
		if (head != nullptr) {
			delete head;
			head = nullptr;
		}
	}
};