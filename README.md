# Graph Theory

## Undirected Graphs
Edge (u, v) is equivalent to (v, u)

## Directed Graphs (Digraphs)
(u, v) is the edge from u to v

## Weighted Graphs
(u, v, w) where w is the cost of edge between u and v

## Tree
An undirected graph with no cycles  
It is a connected graph with N nodes and N-1 edges

### Minimum Spanning Tree (MST)
A subset of the edges of a graph that connects all the vertices together 
without any cycles and minimum weight  
MSTs are not unique

### Rooted Tree
There is a designated root where every edge points either away(arborescence) 
from or towards(anti-arborescence) the node

## Directed Acyclic Graphs (DAGs)
Directed graphs with no cycles  
Play an important role in representing structures with dependencies  
All out trees are DAGs but not all DAGs are out trees

## Bipartite Graphs
One whose vertices can be split into two independent groups U, V such that
every edge connects a node from U to V  
There is no odd length cycle in a bipartite graph

## Complete Graph
There is a unique edge between every pair of nodes  
K<sub>1</sub>, K<sub>2</sub>, K<sub>3</sub>, ...  
Complete Graphs are the worst graphs to have because of the number of edges.  
Used to test your algorithm for performance

## Bridges
Bridges are edges that if removed increase the number of connected components
Bridges are important because they hint at bottlenecks in the real world    

## Articulation Points
Nodes that if removed, increase the number of connected components in a graph

# Graph Structure

## Adjacency Matrix
Each cell M[i][j] in the matrix represents the cost of moving from i to j  
The diagonal of an Adjacency Matrix will be 0  

### Pros
- Space efficient for representing dense graphs
- Edge weight lookup is O(1)
- Simplest graph representation

### Cons
- Requires O(V<sup>2</sup>) space
- Iterating over all edges takes O(V<sup>2</sup>) time

## Adjacency List
Each node is associated with a list of nodes that are adjacent to it
A -> [B, C]
B -> [C]
C -> [A, B, D]
D -> []

### Pros
- It is great for sparse graphs, because it only tracks the necessary edges
- Iterating over all edges is efficient

### Cons
- The denser the graph, the less is the advantage of storing only the necessary edges
- Edge weight lookup is O(E)
- Complex graph representation

# Graph Algorithms
- DFS
- BFS
- MST

# DFS
The DFS is the most fundamental algorithm to traverse a graph
Time complexity : O(V + E)
Most often used as a tool for other algorithms, it is useless on its own

DFS plunges depth first into a graph withouot regard for which edge it takes next
until it cannot go any further, in which case it backtracks and continues

Applications of DFS:
- Strongly connected components
- MST
- Detect cycles
- Bipartite checking
- Topological sorting
- Bridges and Articulation points
- Augmenting paths in a flow network
- Generate mazes

# BFS
BFS explores nodes in layers ie we visit all the neighbours og a given node first.  
Time complexity : O(V + E)
Most often used as a tool for other algorithms, it is useless on its own

DFS plunges depth first into a graph withouot regard for which edge it takes next
until it cannot go any further, in which case it backtracks and continues

Applications of DFS:
- Strongly connected components
- MST
- Detect cycles
- Bipartite checking
- Topological sorting
- Bridges and Articulation points
- Augmenting paths in a flow network
- Generate mazes