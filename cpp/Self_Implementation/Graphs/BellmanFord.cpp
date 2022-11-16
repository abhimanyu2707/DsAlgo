#include<iostream>
#include<vector>

using namespace std;

struct Edge {
    int u;
    int v;
    int w;
    Edge (int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

class Graph {
    int V;
    int E;
    vector<Edge> edges;
public:
    Graph(int V, int E) {
        this->V = V;
        this->E = E;
    }
    void addEdge(int u, int v, int w) {
        edges.push_back(Edge(u, v, w));
    }
    friend void BellmanFord(Graph &G, int src) ;
};

void printDist(int *dist, int V) {
    cout << "Vertex    " << "Distance" << endl;
    for(int i = 0; i<V; i++) {
        cout << i << "\t\t" << dist[i] << endl;
    }
}

void BellmanFord(Graph &G, int src) {
    int dist[G.V];
    for (int i=0; i<G.V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;
    cout << "Source: " << src << endl;

    for (int i=0; i<G.V-1; i++) {
        for(auto edge : G.edges) {
            if (dist[edge.u] != INT_MAX && (dist[edge.u] + edge.w < dist[edge.v]))
                dist[edge.v] = dist[edge.u] + edge.w;
        }
    }

    for(auto edge : G.edges) {
        if (dist[edge.u] != INT_MAX && (dist[edge.u] + edge.w < dist[edge.v]))
            return; //Negative wt cycle
    }

    printDist(dist, G.V);
}

int main() {
    Graph G(5, 8);
    G.addEdge(0, 1, -1);
    G.addEdge(0, 2, 4);
    G.addEdge(1, 2, 3);
    G.addEdge(1, 3, 2);
    G.addEdge(1, 4, 2);
    G.addEdge(3, 2, 5);
    G.addEdge(3, 1, 1);
    G.addEdge(4, 3, -3);
    BellmanFord(G, 0);
    return 0;
}