#include "DisjointSet.h"

int DisjointSet::Find(int i) {
}

void DisjointSet::Union(int i, int j) {
}

//this assumes that entries will correspond to indices
void DisjointSet::MakeSet(int i) {
  if(current_size >= current_capacity) {
    ExpandArrays();
  }
  current_size++;
}


void DisjointSet::ExpandArrays() {
  int target_capacity = current_capacity * 2;

  int *new_parents = new int[target_capacity];
  int *new_ranks = new int[target_capacity];

  for (int i = 0; i < current_size; i++) {
    new_parents[i] = parents[i];
    new_ranks[i] = ranks[i];
  }

  delete[] parents;
  delete[] ranks;
  parents = 0;
  ranks = 0;

  parents = new_parents;
  ranks = new_ranks;

  current_capacity = target_capacity;
}
