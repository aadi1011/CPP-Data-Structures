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
        i = queue[++front];                 // removing the first element from the queue
        for (int j = 1; j <= n; j++)
        {
            if (g[i][j] == 1 && visited[j] == 0) // if edge not visited
            {
                cout << j << " ";     
                visited[j] = 1;     
                queue[++rear] = j;              // adding the element to the queue
            }
        }
    }
}

// Depth First Search
void DFS(int g[5][5], int start, int n)     // where g is the matrix, start is starting node and n is number of vertices
{
    static int visited[5] = {0};
    int i = start;
    if (visited[i] == 0)
    {
        cout << i << " ";
        visited[i] = 1;
        for (int j = 1; j <= n; j++)
        {
            if (g[i][j] == 1 && visited[j] == 0) // if edge not visited
            {
                DFS(g, j, n);
            }
        }
    }
}

// Main function
int main()
{
    int g[5][5] = { {0,1,1,0,0},
                    {1,0,0,1,1},
                    {1,0,0,0,1},
                    {0,1,0,0,1},
                    {0,1,1,1,0} };
    cout<<"BFS: ";
    BFS(g, 1, 5);
    cout << endl;
    cout<<"DFS: ";
    DFS(g, 1, 5);
    cout << endl;
    return 0;
}
