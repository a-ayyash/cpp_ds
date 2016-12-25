#include "BST.h"
#include <vector>

void BST::insert(int k) {

  BSTNode *new_node = new BSTNode(k);

  if (!root) {
    root = new_node;
    return;
  }

  insertNode(new_node, root);

}

void BST::insertNode(BSTNode *node, BSTNode *marker) {

  if (!marker) {
    return;
  }

  if (node->key < marker->key) {
    if (!marker->left) {
      marker->left = node;
    } else {
      insertNode(node, marker->left);
    }
  } else {
    if (!marker->right) {
      marker->right = node;
    } else {
      insertNode(node, marker->right);
    }
  }
}

void BST::print() {
  cout << "**********" << endl;
  cout << "IN ORDER PRINT" << endl;
  printTree_InOrder(root);
  cout << "**********" << endl;
  cout << "PRE ORDER PRINT" << endl;
  printTree_PreOrder(root);
  cout << "**********" << endl;
  cout << "POST ORDER PRINT" << endl;
  printTree_PostOrder(root);
  cout << "**********" << endl;
  cout << "**********" << endl;
  cout << "**********" << endl;
  cout << "LEVEL TRAVERSAL PRINT" << endl;
  printTree_LevelTraversal(root);
  cout << "**********" << endl;
}

void BST::printTree_LevelTraversal(BSTNode *_root) {

  std::vector<BSTNode*> queue;

  queue.push_back(_root);

  while(!queue.empty()) {
    BSTNode *t = queue.front();
    cout << t->key << endl;

    if (t->left) {
      queue.push_back(t->left);
    }

    if (t->right) {
      queue.push_back(t->right);
    }

    queue.erase(queue.begin());
  }
}

void BST::printTree_PreOrder(BSTNode *_root) {
  if (!_root) {
    return;
  }

  cout << _root->key << endl;
  printTree_PreOrder(_root->left);
  printTree_PreOrder(_root->right);
}

void BST::printTree_PostOrder(BSTNode *_root) {
  if (!_root) {
    return;
  }

  printTree_PostOrder(_root->left);
  printTree_PostOrder(_root->right);
  cout << _root->key << endl;
}

void BST::printTree_InOrder(BSTNode *_root) {

  if (!_root) {
    return;
  }

  printTree_InOrder(_root->left);
  cout << _root->key << endl;
  printTree_InOrder(_root->right);
}
