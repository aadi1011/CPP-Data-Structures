## Data Structures: Graphs

This GitHub repository contains C++ code examples for implementing various graph data structures and algorithms.

### AdjacencyMatrix.cpp

The `AdjacencyMatrix.cpp` file contains an implementation of a graph using an adjacency matrix. In computer science, an adjacency matrix is a two-dimensional array used to represent a graph where the elements represent the edges between vertices. This implementation uses a simple two-dimensional array to store the edges between the vertices. 

The program reads in the number of vertices and the adjacency matrix representation of the graph from the standard input. It then prints out the adjacency matrix representation of the graph to the standard output.

### DijikstraAlgorithm.cpp

The `DijikstraAlgorithm.cpp` file contains an implementation of Dijkstra's shortest path algorithm. Dijkstra's algorithm is a popular graph algorithm used to find the shortest path between two nodes in a graph that has non-negative edge weights. 

The implementation in this file reads in an adjacency list representation of a graph with non-negative edge weights from the standard input. It then runs Dijkstra's algorithm on the graph from a given source node, and prints out the shortest path distances to all other nodes in the graph.

The implementation uses a priority queue to efficiently process the nodes in the order of their shortest distance from the source node. It also uses a vector to keep track of the shortest distances to each node and another vector to keep track of the predecessor of each node on the shortest path.

### GraphTraversal.cpp

### KruskalsAlgorithm.cpp
