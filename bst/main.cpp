#include "BST.h"

int main() {
  BST root;

  root.insert(10);
  root.insert(2);
  root.insert(20);
  root.insert(15);
  root.insert(1);
  root.insert(3);

  root.print();
  return 0;
}
