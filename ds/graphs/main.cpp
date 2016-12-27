#include "graph.h"

int main() {
  /*
  Graph g(5);
  g.AddEdge(2,1);
  g.AddEdge(4,3);
  g.AddEdge(1,4);
  g.AddEdge(2,4);
  g.AddEdge(3,2);
  */

  Graph g;
  g.AddEdge(1,2);
  g.AddEdge(3,2);

  set<Vertex*> s = g.GetNabors(2);

  cout << " asdf " << s.size() << endl;

  auto itr = s.begin();
  while(itr != s.end()) {
    cout << (*itr)->key << endl;
    itr++;
  }


  //cout << g.HasPath(1,4) << endl;

  //cout << g << endl;

  Graph g2;
  g2.AddEdge(1,2);
  g2.AddEdge(3,2);
  g2.AddEdge(4,5);
  g2.AddEdge(1,3);

  //cout << g2.HasPath(1,4) << endl;

  //cout << g2 << endl;

  cout << "#######################################" << endl;

  g2.CalculateConnectedComponents();
  cout << "Connected Component 0" << endl;
  auto s2 = g2.GetConnectedComponent(1);
  auto itr2 = s2.begin();
  while(itr2 != s2.end()) {
    cout << *itr2 << endl;
    itr2++;
  }

  //cout << "5,4   = " << g2.HasPath(5,4) << endl;
  return 0;
}
