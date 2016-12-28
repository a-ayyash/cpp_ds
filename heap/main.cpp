#include "BinaryHeap.h"

int main() {
  BinaryHeap heap;
  heap.insert(10);
  heap.insert(5);
  heap.insert(15);
  heap.insert(4);
  heap.insert(1);
  heap.insert(9);
  heap.insert(11);
  heap.insert(15);
  heap.insert(99);
  heap.insert(129);
  heap.insert(32);
  heap.insert(38);
  heap.insert(-10);

  //heap.print_LevelTraversal();

  heap.changePriority(2, 1000);
  heap.remove(5);

  std::vector<int> vec;

  vec.push_back(5);
  vec.push_back(10);
  vec.push_back(5);
  vec.push_back(15);
  vec.push_back(4);
  vec.push_back(1);
  vec.push_back(9);
  vec.push_back(11);
  vec.push_back(15);
  vec.push_back(99);
  vec.push_back(129);
  vec.push_back(32);
  vec.push_back(38);
  vec.push_back(-10);


  std::vector<int> vec2;

  srand(time(NULL));
  for (int i = 0; i < 20; i++) 
    vec2.push_back(rand() % 100);

  cout << "##############################" << endl;

  for( int i = 0; i < vec2.size(); i++) {
    cout << vec2[i] << endl;
  }

  cout << "##############################" << endl;

  BinaryHeap::HeapSort_inPlace(vec2);

  for( int i = 0; i < vec2.size(); i++) {
    cout << vec2[i] << endl;
  }


  return 0;
}
