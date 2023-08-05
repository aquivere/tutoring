typedef struct edge *Edge;
typedef struct graph *Graph;

struct edge {
    int v;
    int w;
};

struct graph {
    int nE;
    int** edges;
};

// Checks if a supplied array of Edges is an Euler path
// e[] is an array of nE edges
bool isEulerPath(Graph g, Edge e[], int nE) {
    assert(g != NULL);

    // include all edges
    if (g->nE != nE) {
        return false;
    }

    // are the edges actually in the graph
    for (int i = 0; i < nE; i++) {
        if (g->edges[e[i]->v][e[i]->w] == 0) {
            return false;
        }
    }

    // is e[] actually a path 
    for (int i = 0; i < nE - 1; i++) {
        if (e[i]->w != e[i+1]->v) {
            return false;
        }
    }

    // include edges exactly once
    for (int i = 0; i < nE; i++) {
        for (int j = i + 1; j < nE; j++) {
            Edge a = e[i];
            Edge b = e[j];
            if (a->v == b->v && a->w == b->w) {
                // they are the same edge
                return false; 
            } else if (a->v == b->w && a->w == b->v) {
                return false;
            }
        }
    }

    return false;
}