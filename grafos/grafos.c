#include "grafos.h"

bool iniciaGrafo (Grafo *G)
{
    G = (Grafo*)malloc(sizeof(Grafo));
    G->vertices = 0;
    G->arestas = 0;
}

bool criaVertice(Grafo *G)
{
    G->ver = (Vertice*)malloc(sizeof(Vertice)*(G->vertices+1));
    G->ver[G->vertices].inicio = NULL;
    G->vertices++;
    return true;
}

bool criaAdj(Grafo *G, int v1, int v2) //V1 = nó inicial, V2 = nó final
{
    Adjacencia *novo = (Adjacencia*) malloc(sizeof(Adjacencia));

    novo->prox = NULL;
    novo->vFinal = v2;

    if(G->ver[v1].inicio == NULL)
    {
        G->ver[v1].inicio = novo;
    }
    else
    {
        novo->prox = G->ver[v1].inicio;
        G->ver[v1].inicio = novo;
    }
    G->arestas++;
    return true;
}

void printGrafo(Grafo *G)
{
    int i;
    printf("\nVertices: %d\nArestas: %d ", G->vertices, G->arestas);
    printf("\n-----------------------------------\n");
    for(i=0; i < (G->vertices); i++)
    {
        Adjacencia *aux = G->ver[i].inicio;
        printf("V%d: ", i);
        while(aux != NULL)
        {
            printf("{v%d}", aux->vFinal);
            aux = aux->prox;
        }
        printf("\n");
    }
    printf("-----------------------------------\n");
}

bool removeAresta(Grafo *G, int v1, int v2) // v1 = nó inicial, v2 = nó final
{
    if(G->ver[v1].inicio == NULL)
        return false;
        
    Adjacencia *aux = G->ver[v1].inicio;
    while(aux->prox != NULL) // alinha aux com nó final
    {
        if(aux->vFinal == v2)
            break;
        aux = aux->prox;
    }

    if(aux->vFinal != v2) // testa se existe a aresta em v2 que foi passado
        return false;

    G->arestas--;

    if(aux == G->ver[v1].inicio) //testa se v2 está no inicio
    {
        if(aux->prox == NULL) //testa se v2 é a unica aresta em v1
        {
            G->ver[v1].inicio = NULL;
            free(aux);
            return true;
        }
        else
        {
            G->ver[v1].inicio = aux->prox;
            free(aux);
            return true;
        }
    }
    if(aux->prox == NULL) // testa se v2 está no final
    {
        Adjacencia *aux2 = G->ver[v1].inicio;
        while(aux2->prox != aux) //deixa aux2 uma posição anterior à aux
            aux2 = aux2->prox;

        aux2->prox = NULL;
        free(aux);
        return true;
    }
    else //remove do meio da lista de adjacencia
    {
        Adjacencia *aux2 = G->ver[v1].inicio;
        while(aux2->prox != aux)
            aux2 = aux2->prox;

        aux2->prox = aux->prox;
        free(aux);
        return true;
    }
}
