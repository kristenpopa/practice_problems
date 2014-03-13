#ifndef BST_H
#define BST_H

#include <iostream>

class Tree {

  struct Node {
    int value;
    Node* left;
    Node* right;
  };

public:
  Tree();
  Tree(int value);
  void insert(int val);  
  Node* search(int val);
  int top();
  void print();

private:
  Node* head;
  void insert(int val, Node** top);
  void print(Node* head);
};

#endif // BST_H
