// C++ program to implement Kruskal's algorithm
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>
#include <stdio.h>
using namespace std;
# define vertices 5
# include <limits.h>

// Function to find the vertex with minimum key value, from the set of vertices not yet included in MST
int minimum_key(int k[], int mst[])
{
    int minimum = INT_MAX;
    int min, i;

    // Iterate over all vertices to find the vertex with minimum key-value
    for (i = 0; i < vertices; i++)
    {
        if(mst[i]==0 && k[i]<minimum)
        {
            minimum = k[i];
            min = i;
        }
    }
    return min;
}

// Create kruskal() method for constructing and printing the MST
// The g[vertices][vertices] is an adjacency matrix that defines the graph for MST
void kruskal(int g[vertices][vertices])
{
    // Create an array of size equal to total number of vertices for storing the MST  
    int parent[vertices];
    // Create k[vertices] array for selecting an edge having minimum weight
    int k[vertices];
    int mst[vertices];
    int i, count, edge, v; //V is the vertex
    for (i=0; i<vertices;i++)
    {
        k[i] = INT_MAX;
        mst[i] = 0;
    }
    k[0] = 0; //It is selected as first vertex
    parent[0] = -1; //Set first valiue of parent[] array to -1 to make root of MST
    for (count = 0; count < vertices-1; count++)
    {
        //Select the vertex having minimum key and that is not added in the MST yet from the set of vertices
        edge = minimum_key(k, mst);
        mst[edge] = 1;
        for (v=0; v<vertices; v++)
        {
            // Update the key value of adjacent vertices of the selected vertex
            if(g[edge][v] && mst[v]==0 && g[edge][v]<k[v])
            {
                parent[v] = edge;
                k[v] = g[edge][v];
            }
        }
    }
