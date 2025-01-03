#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int d) {
		data = d;
		left = right = nullptr;
	}
};

// Function to perform level-order traversal with levels separated by newlines
void levelOrder(Node* root) {
	if (root == nullptr) return;

	queue<Node*> q;
	q.push(root);
	q.push(nullptr); // Marker for level separation

	while (!q.empty()) {
		Node* temp = q.front();
		q.pop();

		if (temp == nullptr) {
			cout << endl; // End of the current level
			if (!q.empty()) {
				q.push(nullptr); // Add marker for the next level
			}
		} else {
			cout << temp->data << " ";

			if (temp->left) q.push(temp->left);
			if (temp->right) q.push(temp->right);
		}
	}
}

// Function to build the binary tree using level-order input
Node* levelOrderBuild() {
	int d;
	cin >> d;

	if (d == -1) return nullptr;

	Node* root = new Node(d);
	queue<Node*> q;
	q.push(root);

	while (!q.empty()) {
		Node* current = q.front();
		q.pop();

		int c1, c2;
		cin >> c1 >> c2;

		if (c1 != -1) {
			current->left = new Node(c1);
			q.push(current->left);
		}

		if (c2 != -1) {
			current->right = new Node(c2);
			q.push(current->right);
		}
	}

	return root;
}

int main() {
	cout << "Enter the nodes in level order (-1 for NULL):" << endl;

	// Build the binary tree
	Node* root = levelOrderBuild();

	// Perform level-order traversal
	cout << "Level order traversal:" << endl;
	levelOrder(root);

	return 0;
}
