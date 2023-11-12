# Exploring graphs, traversal and other algorithms

## Breath First Search:
The Breadth First Search (BFS) algorithm is used to search a graph data structure for a node that meets a set of criteria. It starts at the root of the graph and visits all nodes at the current depth level before moving on to the nodes at the next depth level.
Data Structure Used: Queue

## Depth First Search:
Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking.
Data Structure Used: (Stack)

## Greedy Algorithms
A greedy algorithm is any algorithm that follows the problem-solving heuristic of making the locally optimal choice at each stage. Edger Dijkstra, a computer scientist and mathematician who wanted to calculate a minimum spanning tree, introduced the term "Greedy algorithm". Prim and Kruskal came up with optimization techniques for minimizing cost of graphs. 

## Minimum Spannning Tree
A minimum spanning tree (MST) is a subset of the edges of a connected, edge-weighted graph that connects all the vertices together without any cycles and with the minimum possible total edge weight. It is a way of finding the most economical way to connect a set of vertices.

## Dijkstra's Algorithm
Dijkstra's Algorithm finds the shortest path between a given node (which is called the "source node") and all other nodes in a graph. This algorithm uses the weights of the edges to find the path that minimizes the total distance (weight) between the source node and all other nodes.

## Bellman-Ford Algorithm
The Bellman-Ford algorithm is a single-source shortest-path algorithm that works by iteratively relaxing edges in the graph until the shortest path to all vertices is found. It is especially useful for graphs with negative edge weights, as it can detect negative cycles and return a suitable error message.

## Floyd-Warshall Algorithm
The Floyd-Warshall algorithm is a multi-source shortest path algorithm that works by computing the shortest path between all pairs of vertices in the graph using dynamic programming. 

## Binary Search Tree
A Binary Search Tree (BST) is a special type of binary tree in which the left child of a node has a value less than the node’s value and the right child has a value greater than the node’s value. This property is called the BST property and it makes it possible to efficiently search, insert, and delete elements in the tree.
The root of a BST is the node that has the largest value in the left subtree and the smallest value in the right subtree. Each left subtree is a BST with nodes that have smaller values than the root and each right subtree is a BST with nodes that have larger values than the root.

## Inorder Traversal
For Inorder, you traverse from the left subtree to the root then to the right subtree.

## Preorder Traversal
For Preorder, you traverse from the root to the left subtree then to the right subtree.

## Postorder Traversal
For Post order, you traverse from the left subtree to the right subtree then to the root.
