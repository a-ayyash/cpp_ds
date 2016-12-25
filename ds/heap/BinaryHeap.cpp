#include "BinaryHeap.h"
#include <cmath>

void BinaryHeap::InPlaceSwap() {
  int array_size = arr.size();

  while (current_size > 1) {
    swap(0, current_size - 1);
    current_size--;
    sift_down(0);
  }

  current_size = array_size;
}

void BinaryHeap::BuildHeap() {
  int lower_bound = floor(current_size / 2);

  for (int i = lower_bound; i >= 0; i--) {
    sift_down(i);
  }

}

void BinaryHeap::insert(int value) {
  arr.push_back(value);
  current_size++;

  if (current_size == 1) {
    return;
  }

  sift_up(current_size - 1);
}

int BinaryHeap::extractMax() {
  if (current_size > 1) {
    swap(0, current_size - 1);
  }

  int root = arr.back();
  arr.pop_back();
  current_size--;

  sift_down(0);

  return root;
}

int BinaryHeap::getMax() {
  return arr[0];
}

void BinaryHeap::print_LevelTraversal() {
  cout << "Printing level traversal BEGIN" << endl;
  std::vector<int> queue;
  int idx = 0;
  queue.push_back(arr[0]);

  while (!queue.empty()) {
    int k = queue.front();
    queue.erase(queue.begin());

    cout << k << endl;

    int leftChild = left_child(idx);
    int rightChild = right_child(idx);

    if (leftChild != NOT_FOUND) {
      queue.push_back(leftChild);
    }

    if (rightChild != NOT_FOUND) {
      queue.push_back(rightChild);
    }

    idx++;
  }

  cout << "Printing level traversal END" << endl;
}

void BinaryHeap::changePriority(int index, int new_priority) {
  int oldP = arr[index];
  arr[index] = new_priority;

  if (new_priority > oldP) {
    sift_up(index);
  } else {
    sift_down(index);
  }
}

void BinaryHeap::remove(int index) {
  arr[index] = INF;
  sift_up(index);
  extractMax();
}

bool BinaryHeap::empty() {
  return current_size == 0;
}

int BinaryHeap::size() {
  return current_size;
}

//PRIVATE FUNCTIONS
int BinaryHeap::parent(int index) {
  return arr[parent_index(index)];
}

int BinaryHeap::parent_index(int index) {
  return floor((index-1)/2);
}

int BinaryHeap::left_child(int index) {
  int idx = left_child_index(index);

  if(idx >= current_size || current_size == 0) {
    return NOT_FOUND;
  } else {
    return arr.at(idx);
  }
}

int BinaryHeap::left_child_index(int index) {
  return ((index+1) * 2) - 1;
}

int BinaryHeap::right_child(int index) {
  int idx = right_child_index(index);

  if (idx >= current_size || current_size == 0) {
    return NOT_FOUND;
  } else {
    return arr[right_child_index(index)];
  }
}

int BinaryHeap::right_child_index(int index) {
  return ((index+1) * 2);
}

void BinaryHeap::sift_up(int index) {
  int local_idx = index;
  int parent_idx = parent_index(local_idx);

  while (arr[parent_idx] < arr[local_idx]) {
    swap(local_idx, parent_idx);
    local_idx = parent_idx;
    parent_idx = parent_index(local_idx);
  }
}

void BinaryHeap::sift_down(int index) {
  if (index >= current_size) 
    return;

  int local_idx = index;
  int local_value = arr[local_idx];
  int left_child_value = left_child(local_idx);
  int right_child_value = right_child(local_idx);
  int left_child_idx = left_child_index(local_idx);
  int right_child_idx = right_child_index(local_idx);

  int max_index = local_idx;

  if (left_child_value > arr[max_index]) {
    max_index = left_child_idx;
  }

  if (right_child_value > arr[max_index]) {
    max_index = right_child_idx;
  }

  if (max_index != local_idx) {
    swap(local_idx, max_index);
    sift_down(max_index);
  }
}

void BinaryHeap::swap(int first_idx, int second_idx) {
  arr[first_idx] = arr[first_idx] + arr[second_idx];
  arr[second_idx] = arr[first_idx] - arr[second_idx];
  arr[first_idx] = arr[first_idx] - arr[second_idx];
}
