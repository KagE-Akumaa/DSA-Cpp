#include <iostream>
using namespace std;
class Node {
	int data;
public:
	// Inline getter function for getting the data
	int getData() {return data;}
	// Create a node with a pointer to the next node, initially set to nullptr
	Node* next;
	// Constructor initializes data and next pointer to nullptr
	Node(int d): data(d), next(nullptr) {}
	~Node() {
		if (next != nullptr) {
			delete next;

		}
		cout << "deleting node and date: " << data << endl;
	}
};

class List {
	Node* head;
	Node* tail;
public:
	// Constructor initializes both head and tail to nullptr, meaning the list is empty
	List(): head(nullptr), tail(nullptr) {}

	// Begin() returns the head of the linked list
	Node* begin() {return head;}

	// Function to add an element at the front of the list
	void push_front(int data) {
		// If the list is empty, create a new node and set both head and tail to point to it
		if (head == nullptr) {
			Node* n = new Node(data);
			head = tail = n;
		}
		else {
			// If the list is not empty, create a new node and update head to point to it
			Node* n = new Node(data);
			n->next = head; // new node points to the old head
			head = n;        // head is updated to the new node
		}
	}

	// Function to add an element at the back of the list
	void push_back(int data) {
		// If the list is empty, create a new node and set both head and tail to point to it
		if (head == nullptr) {
			Node* n = new Node(data);
			head = tail = n;
		}
		else {
			// If the list is not empty, create a new node and update the current tail
			Node* n = new Node(data);
			tail->next = n; // old tail's next points to new node
			tail = n;       // tail is updated to the new node
		}
	}
	void insert(int data, int pos) {
		if (pos == 0) {
			push_front(data);
			return;
		}
		Node* temp = head;
		for (int jump = 1; jump <= pos - 1; ++jump) {
			temp = temp->next;
		}
		Node* n = new Node(data);
		n->next = temp->next;
		temp->next = n;
	}
	void pop_front() {
		if (head == nullptr)
			return;
		Node* temp = head;
		head = head->next;
		temp->next = nullptr;
		delete temp;
	}
	void pop_back() {
		Node* temp = head;
		// get the tail
		while (temp->next->next != nullptr) {
			temp = temp->next;
		}
		delete temp->next;
		temp->next = nullptr;
	}
	Node* reverse(Node * head) {
		Node* c = head;
		Node* p = nullptr;
		Node* n = nullptr;
		while (c != nullptr) {
			n = c->next;
			c->next = p;
			p = c;
			c = n;
		}
		return p;
	}
	Node* getMiddle(Node* head) {
		Node* slow, *fast;
		slow = head; fast = head;
		while (fast != nullptr && fast->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}
	~List() {
		if (head != nullptr) {
			delete head;
			head = nullptr;
		}
	}
};
