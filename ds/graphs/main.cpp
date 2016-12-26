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

  Graph g(4);
  g.AddEdge(1,2);
  g.AddEdge(3,2);

  cout << g.HasPath(1,4) << endl;

  cout << g << endl;

  Graph g2(4);
  g2.AddEdge(1,2);
  g2.AddEdge(3,2);
  g2.AddEdge(4,3);
  g2.AddEdge(1,4);

  cout << g2.HasPath(1,4) << endl;

  cout << g2 << endl;

  cout << "#######################################" << endl;

  g2.DFS();
  return 0;
}
