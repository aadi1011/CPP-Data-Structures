## Data Structures: Graphs

This GitHub repository folder contains C++ code examples for implementing various graph data structures and algorithms.

### AdjacencyMatrix.cpp

The `AdjacencyMatrix.cpp` file contains an implementation of a graph using an adjacency matrix. In computer science, an adjacency matrix is a two-dimensional array used to represent a graph where the elements represent the edges between vertices. This implementation uses a simple two-dimensional array to store the edges between the vertices. 

The program reads in the number of vertices and the adjacency matrix representation of the graph from the standard input. It then prints out the adjacency matrix representation of the graph to the standard output.

### DijikstraAlgorithm.cpp

The `DijikstraAlgorithm.cpp` file contains an implementation of Dijkstra's shortest path algorithm. Dijkstra's algorithm is a popular graph algorithm used to find the shortest path between two nodes in a graph that has non-negative edge weights. 

The implementation in this file reads in an adjacency list representation of a graph with non-negative edge weights from the standard input. It then runs Dijkstra's algorithm on the graph from a given source node, and prints out the shortest path distances to all other nodes in the graph.

The implementation uses a priority queue to efficiently process the nodes in the order of their shortest distance from the source node. It also uses a vector to keep track of the shortest distances to each node and another vector to keep track of the predecessor of each node on the shortest path.

### GraphTraversal.cpp

The `GraphTraversal.cpp` file contains implementations of two popular graph traversal algorithms: Depth-First Search (DFS) and Breadth-First Search (BFS). These algorithms are used to traverse a graph and visit all its nodes.

The implementation in this file reads in an adjacency list representation of a graph from the standard input. It then runs DFS and BFS algorithms on the graph from a given source node, and prints out the order in which the nodes are visited.

The DFS algorithm starts at the source node, explores as far as possible along each branch before backtracking, and visits nodes in the order they are encountered. The BFS algorithm starts at the source node and explores all the neighbor nodes at the current depth level before moving on to the next level.

### KruskalsAlgorithm.cpp

The `KruskalsAlgorithm.cpp` file contains an implementation of Kruskal's minimum spanning tree algorithm. This algorithm is used to find the minimum spanning tree of a connected, undirected graph with weighted edges.

The implementation in this file reads in an edge list representation of a graph from the standard input. It then runs Kruskal's algorithm on the graph to find its minimum spanning tree, and prints out the edges that are included in the tree along with their weights.

The implementation uses a Disjoint-Set data structure to keep track of the connected components of the graph and to determine whether adding an edge will create a cycle.

### PrimsAlgorithm.cpp

The `PrimsAlgorithm.cpp` file contains an implementation of Prim's minimum spanning tree algorithm. This algorithm is used to find the minimum spanning tree of a connected, undirected graph with weighted edges.

The implementation in this file reads in an adjacency list representation of a graph from the standard input. It then runs Prim's algorithm on the graph to find its minimum spanning tree, and prints out the edges that are included in the tree along with their weights.

The implementation uses a priority queue to efficiently process the nodes in the order of their minimum distance from the current tree. It also uses a vector to keep track of the distances to each node and another vector to keep track of the parent of each node in the tree.
