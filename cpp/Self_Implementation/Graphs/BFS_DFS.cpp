#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<stack>

using namespace std;

class Graph {
    int V;
    vector<list<int>> adj;

public:
    Graph(int V);
    void addEdge(int u, int v);
    void BFS(int s);
    void DFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int u, int v) {
    adj[u].push_back(v);
}

void Graph::BFS(int s) {
    cout << "BFS: ";
    //Use visited to keep track
    vector<bool> visited;
    visited.resize(V, false);

    //Use queue for traversal.
    list<int> queue;

    queue.push_back(s);
    visited[s] = true;
    //cout << s << " ";


    while(!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        cout << u << " ";
        for (auto v : adj[u]) {
            if (!visited[v]) {
//                cout << v << " ";
                visited[v] = true;
                queue.push_back(v);
            }
        }
    }
    cout << endl;
}

void Graph::DFS(int s) {
    cout << "DFS: ";
    vector<bool> visited;
    visited.resize(V, false);

    stack<int> dfsStack;

    dfsStack.push(s);
    while (!dfsStack.empty()) {
        int u = dfsStack.top();
        dfsStack.pop();
        if (!visited[u]) {
            cout << u << " ";
            visited[u] = true;
        }
        for (auto v : adj[u]) {
            if (!visited[v]) {
                dfsStack.push(v);
            }
        }
    }
    cout << endl;
}

int main() {
    Graph g(5);
    g.addEdge(0, 4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.BFS(0);
    g.DFS(0);
}