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
  set<Vertex*> GetNabors(int v) const;
  int count() const;
  bool HasPath(int key1, int key2);
  void CalculateConnectedComponents();
  set<int> GetConnectedComponent(int cc);

private:
  void Explore(Vertex *v, int cc);
  void Previsit(Vertex *v);
  void Postvisit(Vertex *v);

  std::map<Vertex*, std::set<Vertex*> > adj_map;
  std::map<int, Vertex*> key_vertex;

  int clock;
};


inline ostream& operator<< (ostream& out, const Graph& g) {
  for(int i = 0; i < g.count(); i++) {
    out << "for v = " << i << endl;
    set<Vertex*> v = g.GetNabors(i);

    out << endl;
  }

  return out;
}
