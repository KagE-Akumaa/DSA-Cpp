#include <iostream>
#include <queue>
using namespace std;
// Input 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int d) {
    data = d;
    left = right = nullptr;
  }
};

Node *buildTree() {
  int d;
  cin >> d;
  if (d == -1)
    return nullptr;

  Node *n = new Node(d);
  n->left = buildTree();
  n->right = buildTree();
  return n;
}

void printPreoder(Node *root) {
  if (root == nullptr)
    return;
  cout << root->data << " ";
  printPreoder(root->left);
  printPreoder(root->right);
}
// inorder traverle of binary tree
void printInorder(Node *root) {
  if (root == nullptr)
    return;
  printInorder(root->left);
  cout << root->data << " ";
  printInorder(root->right);
}
// post order traversel of binary tree

void postOrder(Node* root) {
  if (root == nullptr)
    return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

// level order print
void levelOrder(Node* root) {
  queue<Node*> q;
  q.push(root);
  q.push(nullptr);

  while (!q.empty()) {
    Node* temp = q.front();
    if (temp == nullptr) {
      cout << endl;
      q.pop();
      // insert a new null for the next part
      if (!q.empty()) {
        q.push(nullptr);
      }
    }
    else {
      q.pop();
      cout << temp->data << " ";
      if (temp->left)
        q.push(temp->left);
      if (temp->right)
        q.push(temp->right);
    }
  }
  return;
}
// Preorder Traversel of binary tree
int main() {
  Node *root = buildTree();
  cout << "Preorder print is : " << endl;
  printPreoder(root);
  cout << endl << "Inorder print is: " << endl;
  printInorder(root);

  cout << endl << "Post Order Print is: " << endl;
  postOrder(root);

  cout << endl << "Level Order print is: " << endl;
  levelOrder(root);
}