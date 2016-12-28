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

vector<int> Graph::GetNabors(int v) const{
  auto itr = key_vertex.find(v);

  if (itr != key_vertex.end()) {
    Vertex *vv = key_vertex.at(v);
    vector<int> vec;
    auto set = adj_map.at(vv);
    auto set_itr = set.begin();

    while(set_itr != set.end()) {
      vec.push_back((*set_itr)->key);
      set_itr++;
    }

    return vec;
  } else {
    return vector<int>();
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

vector<int> Graph::GetConnectedComponent(int cc) {
  set<int> keys;
  vector<int> keys_vec;
  auto map_itr = adj_map.begin();

  while(map_itr != adj_map.end()) {
    auto set_itr = map_itr->second.begin();

    if (map_itr->first->ccID == cc) {
      keys.insert((*map_itr->first).key);
    }

    while(set_itr != map_itr->second.end()){
      if ((*set_itr)->ccID == cc) {
        keys.insert((*set_itr)->key);
      }

      set_itr++;
    }

    map_itr++;
  }

  std::copy(keys.begin(), keys.end(), std::back_inserter(keys_vec));

  return keys_vec;
}


void Graph::CalculateConnectedComponents() {
  auto itr = key_vertex.begin();
  int cc = 0;
  while(itr != key_vertex.end()){
    if (!itr->second->visited) {
      Explore(itr->second, cc);
      cc++;
    }

    itr++;
  }
}

void Graph::Previsit(Vertex *v) {
  v->previsit_order = clock++;
}

void Graph::Postvisit(Vertex *v) {
  v->postvisit_order = clock++;
}

void Graph::Explore(Vertex *v, int cc) {
  v->visited = true;
  v->ccID = cc;
  cout << "NOW VISITING " << v->key << " visited = " << v << endl;

  auto nabors_itr = adj_map[v].begin();
  Previsit(v);

  while (nabors_itr != adj_map[v].end()) {
    int key = (*nabors_itr)->key;

    if(!(*nabors_itr)->visited) {
      Explore((*nabors_itr), cc);
    }
    nabors_itr++;
  }

  Postvisit(v);
}
