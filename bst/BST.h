#include "BSTNode.h"
#include <iostream>
using namespace std;

class BST {
public:
  BST() {
    root = 0;
  }

  void insert(int k);
  void print();


private:
  void insertNode(BSTNode *node, BSTNode *marker);
  void printTree_LevelTraversal(BSTNode *root);
  void printTree_InOrder(BSTNode *root);
  void printTree_PreOrder(BSTNode *root);
  void printTree_PostOrder(BSTNode *root);
  void printNode(BSTNode *node);
  BSTNode *root;
};
