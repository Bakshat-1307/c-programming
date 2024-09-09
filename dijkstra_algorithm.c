#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define V 5 // The number of vertices in the graph

// Function to find the vertex with the minimum distance value, from the set of vertices not yet included in the shortest path tree
int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++) {
        if (!sptSet[v] && dist[v] < min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to print the final shortest distances from the source vertex
void printSolution(int dist[]) {
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++) {
        printf("%d \t %d\n", i, dist[i]);
    }
}

// Function to implement Dijkstra's algorithm
void dijkstra(int graph[V][V], int src) {
    int dist[V]; // Array to store the shortest distance from the source vertex
    bool sptSet[V]; // Boolean array to represent whether a vertex is included in the shortest path tree

    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    dist[src] = 0; // Distance from the source vertex to itself is 0

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && (dist[u] + graph[u][v] < dist[v])) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist);
}

int main() {
    int graph[V][V] = {
        {0, 3, 0, 1, 0},
        {3, 0, 2, 0, 0},
        {0, 2, 0, 3, 4},
        {1, 0, 3, 0, 2},
        {0, 0, 4, 2, 0}
    };

    int src = 0; // Source vertex

    dijkstra(graph, src);

    return 0;
}
