# Ford-Fulkerson Algorithm for Maximum Flow

## Overview
The code first constructs a graph representing a flow network, then applies the Ford-Fulkerson algorithm to find the maximum flow from a given source node to a given sink node in the network. It does this by iteratively finding augmenting paths using BFS and updating the residual capacities of the graph until no augmenting paths are found. Finally, it returns the maximum flow.

## Implementation Details
The algorithm has been implemented with the use of 2 functions:

1. **Breadth-First Search (BFS) Function**
   - Function Signature: `bool BFS(vector<vector<int>> graph, int start, int end)`
   - Description: This function performs a BFS traversal on the residual graph to find an augmenting path from the source (start) to the sink (end). It returns true if there exists such a path, false otherwise.

2. **Ford-Fulkerson Function**
   - Function Signature: `int fordFulkerson(vector<vector<int>> graph, int start, int end)`
   - Description: This function implements the Ford-Fulkerson algorithm. It takes the graph, source node (start), and sink node (end) as input and returns the maximum flow from start to end. It repeatedly calls BFS to find augmenting paths and updates the residual graph accordingly until no augmenting paths are found.

## Usage
1. **Main Function:**
   - It takes input for the number of vertices (V), the source node (s), the sink node (t), and the number of edges (edgecount).
   - It initializes the graph with zero weights.
   - It takes input for each edge's starting node, ending node, and weight, and updates the graph accordingly.
   - It calls fordFulkerson function and prints the maximum flow.
