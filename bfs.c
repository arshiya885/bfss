bfs.c Function to perform DFS on the graph
def dfs(graph, node, visited=None):
    if visited is None:
        visited = set()  # Initialize visited set if it's not provided
    
    visited.add(node)  # Mark the node as visited
    print(node, end=" ")  # Print the current node
    
    # Explore all the neighbors of the current node
    for neighbor in graph[node]:
        if neighbor not in visited:
            dfs(graph, neighbor, visited)  # Recursively visit unvisited neighbors

# Example graph represented as an adjacency list
graph = {
    0: [1, 2],
    1: [0, 3, 4],
    2: [0],
    3: [1],
    4: [1]
}

# Call DFS starting from node 0
print("DFS starting from node 0:")
dfs(graph, 0)


