#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

// Graph represented as a vector of lists
vector<list<int>> graph;
int v; // Number of vertices

// Function to add an edge to the graph
void add_edge(int src, int des)
{
   graph[src].push_back(des); // Add edge from src to des
   graph[des].push_back(src); // Add edge from des to src (bidirectional)
}

// Function to display the graph
void display()
{
   for (int i = 0; i < v; i++)
   {
      cout << i << " -> ";
      for (auto ele : graph[i])
      {
         cout << ele << " ";
      }
      cout << endl;
   }
}

// Function to check if a path exists between two vertices
bool isPathPresent(unordered_set<int> &st, int current, int destination)
{
   if (current == destination)
      return true; // If current vertex is the destination, return true

   for (auto ele : graph[current])
   {
      if (ele == destination)
         return true; // If an adjacent vertex is the destination, return true
   }

   st.insert(current); // Mark the current vertex as visited

   bool ans = false;

   for (auto ele : graph[current])
   {
      if (st.find(ele) == st.end())
      {
         ans = ans | isPathPresent(st, ele, destination); // Recursively check for path in adjacent vertices
      }
   }

   return ans; // Return the result
}

// Function to find all paths between two vertices (incomplete)
void allPath(int src, int des, vector<int> store, vector<vector<int>> &ans, unordered_set<int> &mark)
{
   if (src == des)
   {
      store.push_back(src);
      ans.push_back(store);
   }
}

int main()
{
   cin >> v;                     // Input number of vertices
   graph.resize(v, list<int>()); // Resize the graph to hold v vertices

   int e;
   cin >> e; // Input number of edges

   // Input each edge and add it to the graph
   while (e--)
   {
      int s, d;
      cin >> s >> d;  // Input source and destination of the edge
      add_edge(s, d); // Add the edge to the graph
   }

   unordered_set<int> st; // Set to keep track of visited vertices

   cout << "Is path is present " << endl;
   cout << isPathPresent(st, 3, 5); // Check if a path exists between vertex 3 and vertex 5

   return 0;
}