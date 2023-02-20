// C++ Program to implement Adjacency Matrix
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>
using namespace std;
#define V 5

//init matrix to 0
//int V = 5;  // Number of vertices
void init(int arr[5][5]);
void addEdge(int arr[5][5], int src, int dest);
void printAdjMatrix(int arr[5][5]);
