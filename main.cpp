#include <iostream>
#include "arbolb.h"
int main()
{
    ArbolB <int,struct Greater<int> >  Bin;
    Bin.m_insertar(5);
    Bin.m_insertar(3);
    Bin.m_insertar(8);
    Bin.m_insertar(2);
    Bin.m_insertar(11);
    cout<<"Recorrido Inorder:"<<endl;
    Bin.m_inorder(Bin.m_root);
    //cout<<"Version Lista Enlazada:"<<endl;
    //Bin.m_lista();
    Bin.imprimir_ptr();
    cout<<"Prueba Recursividad "<<endl;
    Bin.m_inorder_de_arbol_a_lista(Bin.m_root);
    Bin.imprimir_lista();
    cout<<"OTRAA PRUEBA "<<endl;
    ArbolB <int,struct Greater<int> >  Bin2;
    Bin2.m_insertar(15);
    Bin2.m_insertar(18);
    Bin2.m_insertar(8);
    Bin2.m_insertar(30);
    Bin2.m_insertar(16);
    Bin2.m_insertar(9);
    Bin2.m_insertar(2);
    Bin2.m_insertar(31);
    Bin2.m_inorder_de_arbol_a_lista(Bin2.m_root);
    Bin2.imprimir_lista();

    return 0;
}
