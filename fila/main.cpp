 /* 
    Segunda prova prática de Estrutura de Dados
    Programadores: Paulo Scalon e Rafael Hoffmann
    Data: Agosto de 2022
    Disciplina: Estrutura de Dados
    Professor: Leonardo Medeiros
    Obs: Programa implementa uma fila utilizando herança, adicionando e removendo itens da fila.
*/

#include "fila.hpp"

int main()
{
    Fila queue;
    int i;

    cout << endl << "Inserindo 10 elementos na fila: " << endl;
    for (i = 0; i < 10; i++)
    {
        queue.insert(i);
        queue.printQueue();
    }
    cout << endl;


    cout << "Removendo elementos da fila:" << endl;
    for (i = queue.size(); i > 0; i--)
    {
        queue.remove();
        queue.printQueue();
    }
    
    if(queue.emptyQueue())
        cout << "Fila Vazia" << endl;


    queue.~Fila();

return 0;
}
