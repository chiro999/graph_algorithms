import heapq

def dijkstra(graph, start):
    # Initialize distances with infinity for all nodes except the start node
    distances = {node: float('infinity') for node in graph}
    distances[start] = 0
    
    # Priority queue to store nodes with their corresponding distances
    priority_queue = [(0, start)]
    
    while priority_queue:
        current_distance, current_node = heapq.heappop(priority_queue)
        
        # If the current distance is greater than the stored distance, skip
        if current_distance > distances[current_node]:
            continue
        
        # Check neighbors and update distances
        for neighbor, weight in graph[current_node].items():
            distance = current_distance + weight
            
            # If a shorter path is found, update the distance and push it to the priority queue
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(priority_queue, (distance, neighbor))
    
    return distances

# Example graph represented as an adjacency list
graph = {
    'A': {'B': 1, 'D': 3},
    'B': {'A': 1, 'D': 4, 'E': 2},
    'C': {'E': 5},
    'D': {'A': 3, 'B': 4},
    'E': {'B': 2, 'C': 5}
}

# Starting node
start_node = 'A'

# Run Dijkstra's algorithm
shortest_distances = dijkstra(graph, start_node)
print("Shortest distances from node", start_node + ":")
print(shortest_distances)