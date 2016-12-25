#include "singly.h"
#include <iostream>
using namespace std;

void printit(Singly& singly) {
  cout<< "******************************" << endl;

  int *arr = singly.printList();

  for( int i = 0; i < singly.listCount(); i++) {
    cout<< arr[i] << endl;
  }
  cout<< "******************************" << endl;
}

int main() {
  Singly single_list;

  single_list.pushFront(5);
  single_list.pushFront(8);
  single_list.pushFront(11);
  single_list.pushFront(33);

  cout << single_list.topFront() << endl;
  single_list.popFront();
  cout << single_list.topFront() << endl;

  printit(single_list);

  single_list.pushBack(33);
  single_list.pushBack(44);
  single_list.pushBack(66);

  printit(single_list);
}
