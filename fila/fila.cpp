#include "fila.hpp"

Fila::Fila(){}

void Fila::printQueue()
{
    this->print();
}

bool Fila::insert(int data)
{
    return this->pushBack(data);
}

int Fila::size()
{
    return this->len();
}

bool Fila::remove()
{
    return this->popFront();
}

bool Fila::emptyQueue()
{
    return this->empty();
}



Fila::~Fila(){}