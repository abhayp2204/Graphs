#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "GRAPH.h"

Graph InitializeGraph(int V);
void InsertEdge(Graph G, Vertex u, Vertex v);
int EdgeExists(Graph G, Vertex u, Vertex v);
void InsertAtStart(Graph G, Vertex u, Vertex v);

void DFS(Graph G, Vertex S);

void reset(Node P);

#endif