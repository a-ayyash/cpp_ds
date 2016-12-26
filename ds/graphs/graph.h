#include "vertex.h"
#include <vector>
#include <iostream>
using namespace std;

class Graph {
public:
  Graph(int vertex_count) : adj(vertex_count + 1, vector<Vertex>()), capacity(vertex_count+1) {}

  virtual void AddEdge(int key1, int key2);

  vector<Vertex> GetNabors(int v) const;
  int count() const;

  bool HasPath(int key1, int key2);

  Graph GetConnectedComponent(int cc);
  vector<int> ListConnectComponents();
  void DFS();

private:
  void Explore(Vertex *v);

  vector<vector<Vertex> > adj;
  int capacity;
};


inline ostream& operator<< (ostream& out, const Graph& g) {
  for(int i = 0; i < g.count(); i++) {
    out << "for v = " << i << endl;
    vector<Vertex> v = g.GetNabors(i);

    for(int j = 0; j < v.size(); j++) {
      if (j == 0)
        out << "\t";
      out << v[j].key << " ";
    }
    out << endl;
  }

  return out;
}
