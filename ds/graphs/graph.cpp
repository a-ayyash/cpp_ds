#include "graph.h"
#include <cassert>

void Graph::AddEdge(int key1, int key2) {

  auto itr1 = key_vertex.find(key1);
  Vertex *v1;
  Vertex *v2;

  if (itr1 == key_vertex.end()) {
    v1 = new Vertex(key1);
    key_vertex[key1] = v1;
  } else {
    v1 = itr1->second;
  }

  auto itr2 = key_vertex.find(key2);

  if (itr2 == key_vertex.end()) {
    v2 = new Vertex(key2);
    key_vertex[key2] = v2;
  } else {
    v2 = itr2->second;
  }

  adj_map[v1].insert(v2);
  adj_map[v2].insert(v1);
}

set<Vertex*> Graph::GetNabors(int v) const{
  auto itr = key_vertex.find(v);

  if (itr != key_vertex.end()) {
    Vertex *vv = key_vertex.at(v);
    return adj_map.at(vv);
  } else {
    return set<Vertex*>();
  }
}


int Graph::count() const{
  return adj_map.size();
}

bool Graph::HasPath(int key1, int key2) {
  auto itr = key_vertex.find(key1);

  if (itr == key_vertex.end()) {
    return false;
  }

  bool result = false;
  auto set_itr = adj_map[itr->second].begin();

  while(set_itr != adj_map[itr->second].end()) {
    if((*set_itr)->key == key2) {
      result = true;
      break;
    }

    set_itr++;
  }

  return result;
}

Graph GetConnectedComponent(int cc) {}

vector<int> ListConnectComponents() {}

void Graph::DFS() {
  /*
  std::map<Vertex*, std::set<Vertex*> >::iterator map_itr = adj_map.begin();

  while(map_itr != adj_map.end()) {
    std::set<Vertex>::iterator itr = map_itr->second.begin();
    Vertex vv = *itr;
    vv.visited = true;
    map_itr->second.erase(itr);
    map_itr->second.insert(vv);
    Explore(vv);
    map_itr++;
  }
  */
  auto itr = key_vertex.begin();
  while(itr != key_vertex.end()){
    if (!itr->second->visited) {
      Explore(itr->second);
    }

    itr++;
  }
}

void Graph::Explore(Vertex *v) {
  v->visited = true;
  cout << "NOW VISITING " << v->key << " visited = " << v << endl;

  auto nabors_itr = adj_map[v].begin();

  while (nabors_itr != adj_map[v].end()) {
    int key = (*nabors_itr)->key;

    if(!(*nabors_itr)->visited) {
      Explore((*nabors_itr));
    }
    nabors_itr++;
  }

  cout << "##############################" << endl;
}
