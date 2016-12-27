#include <iostream>
using namespace std;

class Vertex {
public:
  Vertex() {
    key = -1;
    visited = false;
    ID = 0;
    ccID = 0;
  }

  Vertex(int _key) {
    key = _key;
    visited = false;
    ID = 0;
    ccID = 0;
  }

  int key;
  bool visited;
  long ID;//unused for now, for uniquness. Assume keys are unique.
  int ccID;

  bool operator<(const Vertex &v) const {
    return key < v.key;
  }
};
