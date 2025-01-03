#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T data;
	Node<T>* next;
	Node(T d) {data = d;}
};

template <typename T>
class Stack {
	Node<T>* head;
public:
	Stack() {head = nullptr;}

	void push(T d) {
		Node<T>* n = new Node(d);
		n->next = head;
		head = n;
	}

	bool empty() {return head == nullptr;}
	T top() {
		if (empty()) {
			// Handle empty stack case
			throw runtime_error("Stack is empty");
		}
		return head->data;
	}

	void pop() {
		if (empty()) {
			// Handle empty stack case
			throw runtime_error("Stack is empty");
		}
		Node<T>* temp = head;
		head = head->next;
		delete temp;
	}
};