#include "../include/GRAPH.h"
#include "../include/functions.h"
#include "../include/variables.h"


#include "dfs.c"

void main()
{
    G = InitializeGraph(10);
    if(G == NULL) exit(0);

    InsertEdge(G,0,1);
    InsertEdge(G,1,2);
    InsertEdge(G,0,3);
    InsertEdge(G,3,4);
    InsertEdge(G,3,5);
    InsertEdge(G,4,5);
    InsertEdge(G,5,6);
    InsertEdge(G,6,9);
    // InsertEdge(G,9,8);
    InsertEdge(G,7,8);
    InsertEdge(G,7,4);
    InsertEdge(G,3,1);

    printGraph(G);

    visited = (int*)malloc(G->iV * sizeof(int));
    n = 0;
    for(int i = 0 ; i < G->iV ; i++)
        visited[i] = NOT_VISITED;
    DFS(G, 0);
    printf("END\nn = %d\n", n);
}