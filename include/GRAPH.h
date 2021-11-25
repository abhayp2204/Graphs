#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define NOT_CREATED -1
#define NOT_VISITED -1
#define VISITED 1
#define N 20

typedef struct stGraph* Graph;
typedef struct stNode* Node;
typedef struct stQueue* Queue;
typedef int Vertex;

// Graph structure
struct stGraph
{
    int iV;
    int iE;
    Node head[N];
};

// Node structure
struct stNode
{
    Vertex iVertexID;
    Node iNext;
};

// Queue Structure
struct stQ
{
    Vertex iVertexID;
    Queue iNext;
};

#endif