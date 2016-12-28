#include "BinaryTreeNode.h"
#include <vector>
#include <iostream>
using namespace std;

#define NOT_FOUND std::numeric_limits<int>::min()
#define INF       std::numeric_limits<int>::max()

class BinaryHeap {
public:
  BinaryHeap() {
    current_size = 0;
  }

  BinaryHeap(std::vector<int> vec) {
    arr = vec;
    current_size = arr.size();
  }

  void insert(int value);
  int extractMax();
  int getMax();
  void print_LevelTraversal();
  void changePriority(int index, int new_priority);
  void remove(int index);
  bool empty();
  int size();

  static void HeapSort_inPlace(std::vector<int> &vec){
    BinaryHeap heap(vec);
    heap.BuildHeap();
    heap.InPlaceSwap();
    vec = heap.AsVector();
  }

  static std::vector<int> HeapSort(std::vector<int> vec) {
    BinaryHeap temp_heap;
    std::vector<int> sorted;

    for(int i =0; i < vec.size(); i++) {
      temp_heap.insert(vec[i]);
    }

    while(!temp_heap.empty()) {
      sorted.push_back(temp_heap.extractMax());
    }

    return sorted;
  }
  void BuildHeap();
  void InPlaceSwap();

  std::vector<int> AsVector() {
    return arr;
  }

private:
  void sift_up(int index);
  void sift_down(int index);
  int parent(int index);
  int parent_index(int index);
  int left_child(int index);
  int left_child_index(int index);
  int right_child(int index);
  int right_child_index(int index);
  void swap(int index, int parent_index);

  std::vector<int>  arr;
  int               current_size;
};
