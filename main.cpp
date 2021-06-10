#include <iostream>
#include <string>
using namespace std;
#include "node.hpp"
#include "linkedlist.hpp"


int main()
{
    linkedlist lista;
    //Ingreso de elementos a la cabeza
    lista.insertar(1);
    lista.insertar(2);
    lista.insertar(3);
    lista.insertar(4);
    lista.insertar(5);
    cout<<"Lista: "<<endl;
    cout<<lista<<endl;
    //Ingreso de lista ordenada
    linkedlist lista1;
    lista1.inserorden(2);
    lista1.inserorden(1);
    lista1.inserorden(3);
    lista1.inserorden(6);
    lista1.inserorden(0);
    cout<<"Lista1: "<<endl;
    cout<<lista1<<endl;
    //remover
    cout<<"Lista1 con un valor removido: "<<endl;
    lista1.remover(3);
    cout<<lista1<<endl;
    //remover
    cout<<"Lista 1 sin encontrar el valor a remover: "<<endl;
    lista1.remover(7);
    //  imprime
    cout<<lista1<<endl;

    return 0;
}
