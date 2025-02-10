#include<iostream>
#include<vector>
using namespace std;

int findCenter(vector<vector<int> >& edges) {
  if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) 
    return edges[0][0];
  else 
    return edges[0][1];
}

int main() {
  vector<vector<int> > edges;
  int v, e;
  cout << "Enter the number of vertices: ";
  cin >> v;
  cout << "Enter the number of edges: ";
  cin >> e;

  cout << "Enter the edges (u v):" << endl;
  for(int i = 0; i < e; i++) {
    vector<int> store;
    int u, v;
    cin >> u >> v;
    store.push_back(u);
    store.push_back(v);

    edges.push_back(store);
  }

  int center = findCenter(edges);
  cout << "The center of the star graph is: " << center << endl;

  return 0;
}