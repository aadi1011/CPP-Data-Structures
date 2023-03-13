// C++ Program to implement breadth first search and depth first search in graph
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include<iostream>
using namespace std;

// Breadth First Search
void BFS(int g[5][5], int start, int n)     // where g is the matrix, start is starting node and n is number of vertices
{
    int i = start;
    int visited[5] = {0};
    int queue[5], front = -1, rear = -1; // front is index of the first element and rear is the index of the last element
    cout << i << " ";
    visited[i] = 1;
    queue[++rear] = i;                      //adding the first element to the queue
    while (front != rear)                   //queue is not empty
    {
