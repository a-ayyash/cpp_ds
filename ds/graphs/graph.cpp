#include "graph.h"

void Graph::AddEdge(int key1, int key2) {
  Vertex v1(key1);
  Vertex v2(key2);
  adj[key1].push_back(v2);
  adj[key2].push_back(v1);
}

vector<Vertex> Graph::GetNabors(int v) const{
  return adj[v];
}


int Graph::count() const{
  return adj.size();
}

bool Graph::HasPath(int key1, int key2) {
  bool result = false;

  if (key1 <= capacity - 1) {
    for(int i = 0; i < adj[key1].size(); i++) {
      if (adj[key1][i].key == key2) {
        result = true;
        break;
      }
    }
  }

  return result;
}

Graph GetConnectedComponent(int cc) {}

vector<int> ListConnectComponents() {}

void Graph::DFS() {
  Vertex *v1 = &adj[1][0];
  Explore(v1);
}

void Graph::Explore(Vertex *v) {
  v->visited = true;
  cout << "NOW VISITING " << v->key << " visited = " << v << endl;

  for(int i = 0; i < adj[v->key].size(); i++) {
    Vertex *w = &adj[v->key][i];

    if(!w->visited) {
      Explore(w);
    }
  }
}
