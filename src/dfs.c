#include "../include/GRAPH.h"
#include "../include/functions.h"
#include "../include/variables.h"
#include "create.c"

void DFS(Graph G, Vertex S)
{
    // End condition
    if(visited[S] == VISITED)
        return;

    printf("%d--->", S);
    visited[S] = VISITED;
    n++;

    Node P = (Node)malloc(sizeof(struct stNode));
    P = G->head[S];

    while(P->iNext != NULL)
    {
        Vertex u = P->iNext->iVertexID;
        DFS(G, u);
        P = P->iNext;
    }
}