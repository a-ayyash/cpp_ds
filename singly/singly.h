#include "Node.h"


class Singly {
  Node *head;
  int count;

public:
  Singly() {
    head = 0;
    count = 0;
  }

  void pushFront(int k);
  int  topFront();
  void popFront();
  void pushBack(int k);
  int  topBack();
  void popBack();
  bool find(int key);
  void erease(int key);
  bool empty();
  void addBefore(const Node* anchor, int key);
  void addAfter(const Node* anchor, int key);

  int* printList();
  int  listCount();
};
