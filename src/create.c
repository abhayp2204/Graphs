#include "../include/GRAPH.h"
#include "../include/functions.h"
#include "../include/variables.h"

Graph InitializeGraph(int V)
{
    G = (Graph)malloc(sizeof(struct stGraph));
    Node P = (Node)malloc(sizeof(struct stNode));

    if(G == NULL)
    {
        perror("intialize : Could not allocate memory\n");
        return G;
    }

    G->iV = V;
    G->iE = 0;

    for(int i = 0 ; i < V ; i++)
    {
        G->head[i] = malloc(sizeof(struct stNode));
        G->head[i]->iVertexID = i;
        G->head[i]->iNext = NULL;
    }
    return G;
}

void InsertEdge(Graph G, Vertex u, Vertex v)
{
    if(u >= G->iV || v >= G->iV)
    {
        printf("ash_initialize : Edge (%d, %d) is invalid\n", u, v);
        return;
    }

    // Check if the edge already exists
    if(EdgeExists(G, u, v))
    {
        printf("ash_initialize : Edge (%d, %d) already exists\n", u, v);
        return;
    }

    // If not, insert
    InsertAtStart(G,u,v);
}

int EdgeExists(Graph G, Vertex u, Vertex v)
{
    Node P = (Node)malloc(sizeof(struct stNode));
    P = G->head[u];

    while(P->iNext != NULL)
    {
        // printf("shark\n");
        if(P->iNext->iVertexID == v)
            return 1;
        P = P->iNext;
    }
    return 0;
}

void InsertAtStart(Graph G, Vertex u, Vertex v)
{
    Node P = (Node)malloc(sizeof(struct stNode));
    P->iVertexID = v;
    P->iNext = G->head[u]->iNext;
    G->head[u]->iNext = P;
}

void printGraph(Graph G)
{
    Node P = (Node)malloc(sizeof(struct stNode));

    for(int i = 0 ; i < G->iV ; i++)
    {
        printf("%d : ", i);
        P = G->head[i];
        while(P->iNext != NULL)
        {
            printf("%d -> ", P->iNext->iVertexID);
            P = P->iNext;
        }
        printf("NULL\n");
    }
    free(P);
}

Queue InitializeQueue()