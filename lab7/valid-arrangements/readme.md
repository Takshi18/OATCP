## The implementation utilizes Eulerian path method

### Input
The program takes input of pairs of numbers where each pair represents a relationship. For example:

### Arrangement Solver
The program contains a class named `ArrangementSolver` which has a method `findValidArrangement`. This method finds a valid arrangement of pairs based on certain rules.

### Eulerian Path
It uses a concept called Eulerian Path to determine the arrangement.

### Building Graph
It constructs a graph from the given pairs where each number is a node and each pair represents an edge.

### Degrees
It calculates the in-degree and out-degree of each node in the graph.

### Starting Node
It finds the starting node for the path based on the degrees of the nodes.

### Path Construction
It constructs the path using a depth-first search (DFS) approach.

### Output
Finally, it outputs the valid arrangement of pairs.
