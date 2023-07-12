typedef struct edge *Edge;
typedef struct graph *Graph;

struct edge {
    int v;
    int w;
};

struct graph {
    int nE;
    struct edge** edges;
};

// Checks if a supplied array of Edges is an Euler path
// e[] is an array of nE edges
bool isEulerPath(Graph g, Edge e[], int nE) {
    assert(g != NULL);

    return false;
}