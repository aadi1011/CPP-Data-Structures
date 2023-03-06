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
    k[src] = 0; //It is selected as first vertex
    parent[src] = -1; //Set first valiue of parent[] array to -1 to make root of MST
    for (count = 0; count < V-1; count++)
