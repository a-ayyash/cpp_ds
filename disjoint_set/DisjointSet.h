#include <iostream>
using namespace std;

#define INITIAL_MAX_CAPACITY 5


class DisjointSet {
public:
  DisjointSet() {
    parents = new int[INITIAL_MAX_CAPACITY];
    ranks = new int[INITIAL_MAX_CAPACITY];
    current_capacity = INITIAL_MAX_CAPACITY;
    current_size = 0;
  }

  int Find(int i);
  void Union(int i, int j);
  void MakeSet(int i);
private:
  void ExpandArrays();
  int *parents;
  int *ranks;
  int current_capacity;
  int current_size;
};
