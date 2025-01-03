#include <iostream>
#include <stack>
#include <string>
using namespace std;
void insertAtBottom(stack<string>&books, string a) {
	// base case
	if (books.empty()) {
		books.push(a);
		return;
	}
	// rec case
	string temp = books.top();
	books.pop();
	insertAtBottom(books, a);
	books.push(temp);
}
void reverse(stack<string>&b) {
	// base case
	if (b.empty()) {
		return;
	}
	// rec case
	string temp = b.top();
	b.pop();
	reverse(b);
	insertAtBottom(b, temp);
}

int main() {
	stack<string> books;
	books.push("c++");
	books.push("Java");
	books.push("Python");
	books.push("Os");

	// insertAtBottom(books, "c");

	// while (!books.empty()) {
	// 	cout << books.top() << endl;
	// 	books.pop();
	// }
	reverse(books);
	while (!books.empty()) {
		cout << books.top() << endl;
		books.pop();
	}
}