#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Lista das arestas de um vértice
typedef struct adjacencia 
{
    int vFinal;
    struct adjacencia *prox;
} Adjacencia;

// Começo da lista de adjacencias de uma aresta
typedef struct vertice 
{
    Adjacencia *inicio;
} Vertice;

// Estrutura do grafo em si
typedef struct grafo
{
    int vertices;
    int arestas;
    Vertice *ver;
} Grafo;

// Declarações das funções utilizadas:
bool iniciaGrafo (Grafo *G);
bool criaVertice(Grafo *G);
bool criaAdj(Grafo *G, int v1, int v2);
void printGrafo(Grafo *G);
bool removeAresta(Grafo *G, int v1, int v2);
bool removeVertice(Grafo *G, int indiceGrafo);