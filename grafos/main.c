 /* 
    Segunda prova prática de Estrutura de Dados
    Programadores: Paulo Scalon e Rafael Hoffmann
    Data: Agosto de 2022
    Disciplina: Estrutura de Dados
    Professor: Leonardo Medeiros
    Obs: Programa implementa a estrutura de grafo, criando vértices e arestas para o mesmo.
*/

#include "grafos.h"

int main()
{
    Grafo grafo;
    int i;
    iniciaGrafo(&grafo);

    printf("\nCriando 6 vertices para o grafo: ");
    for(i=0; i<6; i++)
    {
        criaVertice(&grafo);
        printGrafo(&grafo);
    }

    printf("\n\nCriando adjacencia de v0 para v2");
    criaAdj(&grafo, 0, 2);
    printGrafo(&grafo);
    printf("\n\nCriando adjacencia de v1 para v4");
    criaAdj(&grafo, 1, 4);
    printGrafo(&grafo);
    printf("\n\nCriando adjacencia de v1 para v5");
    criaAdj(&grafo, 1, 5);
    printGrafo(&grafo);
    printf("\n\nCriando adjacencia de v2 para v1");
    criaAdj(&grafo, 2, 1);
    printGrafo(&grafo);

    printf("\n\nRemovendo todas as arestas: ");
    removeAresta(&grafo, 0, 2);
    printGrafo(&grafo);
    removeAresta(&grafo, 1, 4);
    printGrafo(&grafo);
    removeAresta(&grafo, 1, 5);
    printGrafo(&grafo);
    removeAresta(&grafo, 2, 1);
    printGrafo(&grafo);


return 0;
}