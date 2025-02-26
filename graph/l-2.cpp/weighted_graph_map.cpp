#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Graph represented as a vector of unordered maps
// Each unordered map represents the adjacency list of a vertex
vector<unordered_map<int, int>> graph;
int v; // Number of vertices

// Function to add an edge to the graph
void add_edge(int src, int des, int wt)
{                         // weighted bidirectional graph
    graph[src][des] = wt; // Add edge from src to des with weight wt
    graph[des][src] = wt; // Add edge from des to src with weight wt (bidirectional)
}

// Function to display the graph
void display()
{
    for (int i = 0; i <= v; i++)
    {
        cout << i << " -> ";
        for (auto ele : graph[i])
        {
            cout << "(" << ele.first << "," << ele.second << ") ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Enter the number of vertices" << endl;
    cin >> v;            // Input number of vertices
    graph.resize(v + 1); // Resize the graph to hold v+1 vertices

    int e;
    cout << "Enter number of edges" << endl;
    cin >> e; // Input number of edges

    // Input each edge and add it to the graph
    while (e--)
    {
        int s, d, wt;
        cin >> s >> d >> wt; // Input source, destination, and weight of the edge
        add_edge(s, d, wt);  // Add the edge to the graph
    }
    display(); // Display the graph

    return 0;
}