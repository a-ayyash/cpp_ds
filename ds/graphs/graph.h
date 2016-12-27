#include "vertex.h"
#include <vector>
#include <map>
#include <set>
#include <iostream>
using namespace std;

class Graph {
public:
  Graph() {
    clock = 0;
  }

  virtual void AddEdge(int key1, int key2);
  vector<int> GetNabors(int v) const;
  bool HasPath(int key1, int key2);
  void CalculateConnectedComponents();
  vector<int> GetConnectedComponent(int cc);
  int count() const;

private:
  void Explore(Vertex *v, int cc);
  void Previsit(Vertex *v);
  void Postvisit(Vertex *v);

  std::map<Vertex*, std::set<Vertex*> > adj_map;
  std::map<int, Vertex*> key_vertex;

  int clock;
};


inline ostream& operator<< (ostream& out, const Graph& g) {

  return out;
}
