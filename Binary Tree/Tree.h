#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int d) {
    data = d;
    left = right = nullptr;
  }
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
};

