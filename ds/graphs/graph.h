#include "vertex.h"
#include <vector>
#include <map>
#include <set>
#include <iostream>
using namespace std;

class Graph {
public:
  virtual void AddEdge(int key1, int key2);

  set<Vertex*> GetNabors(int v) const;
  int count() const;

  bool HasPath(int key1, int key2);

  Graph GetConnectedComponent(int cc);
  vector<int> ListConnectComponents();
  void DFS();

private:
  void Explore(Vertex *v);

  std::map<Vertex*, std::set<Vertex*> > adj_map;
  std::map<int, Vertex*> key_vertex;
};


inline ostream& operator<< (ostream& out, const Graph& g) {
  for(int i = 0; i < g.count(); i++) {
    out << "for v = " << i << endl;
    set<Vertex*> v = g.GetNabors(i);

    out << endl;
  }

  return out;
}
