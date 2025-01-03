#include <iostream>
using namespace std;
// IMPLEMENTATION OF SINGLY LINKED LIST
class Node {
public:
  int data;
  Node *next;
  // constructor
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
  // Destructor
  ~Node() {
    int val = this->data;
    if (this->next != nullptr) {
      // memory free
      delete next;
      this->next = nullptr;
    }
    cout << "Memory for the Node with Data " << val << " has been freed" << endl;
  }

};
void insertAtHead(Node* &head, int data) {
  // create a new node
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}

void insertAtEnd(Node* &head, int data) {
  Node* temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  // we have tail as temp now
  // create a new node to add

  Node* n = new Node(data);
  temp->next = n;

}
void insertAtMiddle(Node* &head, int data, int position)
{
  // add the data at the front
  if (position == 0) {
    insertAtHead(head, data);
    return;
  }
  Node* temp = head;
  // get the node where to insert
  for (int i = 1; i <= position - 1; ++i) {
    temp = temp->next;
  }
  // create the new node to add
  Node* n = new Node(data);
  n->next = temp->next;
  temp->next = n;

}
void deleteAtposition(Node* &head, int position) {
  // Delete the first Node
  if (position == 0) {
    Node* temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp;
  }
  else {
    // Delete the middle or last Node
    Node* curr = head;
    Node* prev = nullptr;
    int cnt = 0;
    while (cnt < position) {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    prev->next = curr->next;
    curr->next = nullptr;
    delete curr;
  }
}

void print(Node* &head) {
  Node* temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;

}

int main() {
  Node *n = new Node(10);
  insertAtHead(n, 20);
  print(n);
  insertAtEnd(n, 30);
  print(n);
  insertAtMiddle(n, 15, 1);
  print(n);
  insertAtMiddle(n, 40, 4);
  print(n);
  deleteAtposition(n, 4);
  print(n);


}