import heapq

class Graph:
    def __init__(self, V):
        self.V = V
        self.edges = [{} for _ in range(V)]

    def addEdge(self, src, dst, dist):
        self.edges[src][dst] = dist
        self.edges[dst][src] = dist

def dfsPrint(dist, d, src):
    if d == src:
        print(d, "-> ", end = "")
        return
    dfsPrint(dist, dist[d][1], src)
    print(d, "-> ", end="")

def printPathAndDist(dist, src):
    print("Dest     Distance    Path")
    for i in range(len(dist)):
        print(str(i) + "\t" + str(dist[i][0]) + "\t", end=" ")
        dfsPrint(dist, dist[i][1], src)
        print(i)

def shortestPath(G, src):
    #keep distance and parent
    dist = [[float('inf'), None] for _ in range(G.V)]
    dist[src][0] = 0
    dist[src][1] = src
    visited = [False] * G.V
    h = [(0, src)]

    while(h):
        uDist, u = heapq.heappop(h)
        if visited[u]:
            continue
        visited[u] = True
        for v, d in G.edges[u].items():
            if uDist + d < dist[v][0]:
                dist[v][0] = uDist + d
                dist[v][1] = u
                heapq.heappush(h, (dist[v][0], v))
    print(dist)
    printPathAndDist(dist, src)

g = Graph(9)
g.addEdge(0, 1, 4)
g.addEdge(0, 7, 8)
g.addEdge(1, 2, 8)
g.addEdge(1, 7, 11)
g.addEdge(2, 3, 7)
g.addEdge(2, 8, 2)
g.addEdge(2, 5, 4)
g.addEdge(3, 4, 9)
g.addEdge(3, 5, 14)
g.addEdge(4, 5, 10)
g.addEdge(5, 6, 2)
g.addEdge(6, 7, 1)
g.addEdge(6, 8, 6)
g.addEdge(7, 8, 7)

shortestPath(g, 0)