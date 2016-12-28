#include "DisjointSet.h"

int main() {
  DisjointSet set;
  /*
  srand(time(NULL));
  for (int i =0; i < 10; i++) 
  */
  set.MakeSet(1);
  set.MakeSet(2);
  set.MakeSet(3);
  set.MakeSet(4);
  set.MakeSet(5);
  set.MakeSet(6);
  set.MakeSet(7);
  set.MakeSet(8);
  set.MakeSet(9);
  set.MakeSet(10);


  set.Union(1,10);
  set.Union(1,9);
  set.Union(1,8);
  set.Union(1,7);

  set.Union(2,5);
  set.Union(2,4);
  set.Union(2,3);

  cout << set.Find(2) << endl;
  cout << set.Find(4) << endl;
  cout << set.Find(3) << endl;
  cout << set.Find(10) << endl;
  return 0;
}
