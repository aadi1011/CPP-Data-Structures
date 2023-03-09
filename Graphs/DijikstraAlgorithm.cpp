// C++ code to implement Dijkstra's Algorithm
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>
#include <limits.h>
using namespace std;

// Number of vertices in the graph
#define V 9

// Creating minimum_key() for finding the vertex that has minimum key-value and that is not added in MST yet
int minimum_key(int k[], bool mst[])
{
    int minimum = INT_MAX;
    int min, i;
    
    // Iterate over all vertices to find the vertex with minimum key-value
    for (i = 0; i < V; i++)
    {
        if(mst[i]==0 && k[i]<minimum)
        {
            minimum = k[i];
            min = i;
        }
    }
    return min;
}

// Create dijkstra() method for constructing and printing the MST
// The g[vertices][vertices] is an adjacency matrix that defines the graph for MST
void dijkstra(int g[V][V], int src)
{
    // Create an array of size equal to total number of vertices for storing the MST  
    int parent[V];
    
    // Create k[vertices] array for selecting an edge having minimum weight
    int k[V];
    bool mst[V];
    int i, count, edge, v; //V is the vertex
    
    for (i=0; i<V;i++)
    {
        k[i] = INT_MAX;
        mst[i] = 0;
    }
    
    k[src] = 0;         //It is selected as first vertex
    parent[src] = -1;   //Set first valiue of parent[] array to -1 to make root of MST
   
    for (count = 0; count < V-1; count++)
    {
        //Select the vertex having minimum key and that is not added in the MST yet from the set of vertices
        edge = minimum_key(k, mst);
        mst[edge] = 1;
        for (v=0; v<V; v++)
        {
            // Update the key value of adjacent vertices of the selected vertex
            if(g[edge][v] && mst[v]==0 && g[edge][v]<k[v])
            {
                parent[v] = edge;
                k[v] = g[edge][v];
            }
        }
    }
    
    // Print the constructed MST
    cout<<"Edge \tWeight"<<endl;
    for (i = 1; i < V; i++)
    {
        cout<<parent[i]<<" - "<<i<<" \t"<<g[i][parent[i]]<<" \t"<<endl;
    }
}

// Driver code
int main()
{
    // Creating a graph
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 14, 10, 0, 2, 0, 0},
                       {0, 0, 0, 0, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}};
    dijkstra(graph, 0);
    return 0;
}
