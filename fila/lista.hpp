#include <iostream>
using namespace std;

// Estrutura do nó
typedef struct no
{
	int info;
	struct no *next;
} No;


class List
{
private:
    No *first;
    No *last;
    int length;
public:
    List();
    ~List();
    
    int len(); // tamanho da lista
    
    bool empty(); // verifica se a lista está vazia
    
    void print(); // imprime a lista

    bool pushBack(int data); // insere elemente no final

    bool pushFront(int data); // insere elemento no inicio
    
    bool popBack(); // remove elemento do final
    
    bool popFront(); // remove elemento do começo
    
    bool search(int data); // procura elemento na lista

    int at(int pos); // retorna o elemento na posição passada da lista
};