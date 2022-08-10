#include "lista.hpp"
#include <iostream>

class Fila : protected List
{
public:
    Fila();
    ~Fila();
    
    bool insert(int data); // insere elemento
    
    void printQueue(); // imprime a fila

    int size(); // tamanho da fila
 
    bool emptyQueue(); // testa se a fila é vazia

    bool remove(); // remove elemento da fila
};
