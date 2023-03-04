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

