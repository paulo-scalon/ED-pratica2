#include "lista.hpp"

using namespace std;

List::List(){
    this->first = nullptr;
    this->last = nullptr;
    this->length = 0;
}

List::~List(){
    if(empty())
        return;
    No *aux = this->first, *p;
    while (aux != nullptr)
    {
        p = aux;
        aux = aux->next;
        delete[] p;
    }
}

int List::len(){
    return this->length;
}

bool List::empty(){
    return this->length==0;
}

void List::print(){
    if(this->empty())
        return;
    No *aux = first;
    for (int i = 0; i < len(); i++, aux = aux->next)
        cout << aux->info << " ";
    cout << endl;
}

bool List::pushFront(int data){
    No *node = new No;
    if(node==nullptr)
        return false;
    node->info = data;
    node->next = nullptr;

    if(empty()){
        this->first = node;
        this->last = node;
    }
    else{
        node->next = this->first;
        this->first = node;
    }
    this->length++;
    return true;
}

bool List::pushBack(int data){
    No *node = new No;
    if(node==nullptr)
        return false;
    node->info = data;
    node->next = nullptr;

    if(empty()){
        this->first = node;
        this->last = node;
    }
    else{
        this->last->next = node;
        this->last = node;
    }
    this->length++;
    return true;
}

bool List::popFront(){
    if(empty())
        return false;
    No *aux = this->first;
    this->first = aux->next;
    this->length--;
    delete[] aux;
    return true;
}

bool List::popBack(){
    if(empty())
        return false;
    No *aux = this->first;
    for(int i = 0 ; i < this->len() - 1 ; i++)
        aux = aux->next;
    this->last = aux;
    this->last->next = nullptr;
    this->length--;
    delete[] aux->next;
    return true;
}

bool List::search(int data){
    if(empty())
        return false;
    No *aux = this->first;
    for(int i ; i < this->len() ; i++){
        if(aux->info == data)
            return true;
        aux = aux->next;
    }
    return false;
}

int List::at(int pos){
    if((this->empty()) || (pos >= this->len())){
        cerr << "Invalid position" << endl;
        return -1;
    }
    No *aux = this->first;
    for (int i = 0; i < pos; i++)
        aux = aux->next;
    return aux->info;
}