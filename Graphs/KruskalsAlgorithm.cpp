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

