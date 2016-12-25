#include "singly.h"

void Singly::pushFront(int k) {
  count++;
  Node *newNode = new Node(k);

  if (!head) {
    head = newNode;
    return;
  }


  newNode->next = head;
  head = newNode;
}

int  Singly::topFront() {
  if (head) {
    return head->key;
  } else {
    return -99999;
  }
}

void Singly::popFront() {
  if (!head) {
    return;
  }

  Node *newHead = head->next;
  delete head;
  head = 0;
  head = newHead;
  count--;
}

void Singly::pushBack(int k) {
  //without tail = n
  count++;
  Node *newNode = new Node(k);

  if(!head) {
    head = newNode;
    return;
  }

  Node* tail = head;

  while(tail->next) {
    tail = tail->next;
  }

  tail->next = newNode;
}

int  Singly::topBack() {
  Node *tail = head;
  
  while(tail->next) {
    tail = tail->next;
  }

  return tail->key;
}

void Singly::popBack() {
  Node* tail = head;

  while(tail->next) {
    tail = tail->next;
  }
}

bool Singly::find(int key) {
  return false;
}

void Singly::erease(int key) {
}

bool Singly::empty() {
  return count == 0;
}

void Singly::addBefore(const Node* anchor, int key) {
  Node *marker = head->next;
  Node *one_behind = head;

  while(marker && marker != anchor) {
    marker = marker->next;
    one_behind = one_behind->next;
  }

  //need to handle found in last cell 
  if (marker->next) {
    Node *nnode = new Node(key);
    one_behind->next = nnode;
    nnode->next = marker;
  }

}

void Singly::addAfter(const Node* anchor, int key) {
}


int Singly::listCount() {
  return count;
}

int* Singly::printList() {
  Node *printer = head;
  int *arr = new int[count];
  int i = 0;

  while(printer) {
    arr[i++] = printer->key;
    printer = printer->next;
  }

  return arr;
}
