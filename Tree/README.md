## C++ Data Structures: Trees

This GitHub repository contains C++ code examples for implementing various tree data structures and algorithms.

### BinarySearchTree.cpp

The `BinarySearchTree.cpp` file contains an implementation of a binary search tree in C++. A binary search tree is a binary tree where the value of the left child is less than the parent, and the value of the right child is greater than the parent. This property ensures that the tree can be searched efficiently.

The program provides a menu-driven interface to perform operations like insert, inorder, preorder, postorder, breadthfirst, search, and deleteNode on a binary search tree. The user can input a choice from the menu to perform the corresponding operation on the binary search tree.

### SingleThreadedBT.cpp

The `SingleThreadedBT.cpp` file contains an implementation of a single-threaded binary tree in C++. In a single-threaded binary tree, each node has a pointer to its right child, but instead of a left pointer, it has a pointer to its in-order successor. This makes the traversal of the tree faster, as the program does not have to check if a node has a left child or not.

The implementation in this file provides functions to create a new node, insert a node in the tree, and traverse the tree in pre-order.
