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
