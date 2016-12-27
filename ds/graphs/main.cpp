#include "graph.h"

int main() {

  Graph g;
  g.AddEdge(1,2);
  g.AddEdge(3,2);

  auto vec1 = g.GetNabors(2);

  for(auto i : vec1) {
    cout << i << endl;
  }


  Graph g2;
  g2.AddEdge(1,2);
  g2.AddEdge(3,2);
  g2.AddEdge(4,5);
  g2.AddEdge(1,3);

  cout << "#######################################" << endl;

  g2.CalculateConnectedComponents();
  cout << "Connected Component 0" << endl;
  auto vec = g2.GetConnectedComponent(1);

  for(auto i : vec) {
    cout << i << endl;
  }
  return 0;
}
