#include <iostream>
using namespace std;
#include "nodo.h"
#include "comparador.h"

#ifndef ARBOLB_H
#define ARBOLB_H

template <class T,class C>
class ArbolB
{
public:
    ArbolB();
    Nodo<T> *m_root;
    Nodo<T> *m_ptr;
    bool m_buscar(T,Nodo<T>**&);
    bool m_insertar(T);
    bool m_borrar(T);
    void m_inorder(Nodo<T> *&);
    void m_inorder_de_arbol_a_lista(Nodo<T> *&);
    void m_lista();
    void imprimir_lista();
    void imprimir_ptr();

    C m_comparador;
};

template <class T,class C>
ArbolB<T,C>::ArbolB()
{
    m_root=NULL;
    m_ptr=NULL;
}

template <class T,class C>
bool ArbolB<T,C>::m_buscar(T dato,Nodo<T>**&p)
{
    for(p=(&m_root);(*p) && dato!=(*p)->m_dato; p = &(*p)->m_child[m_comparador(dato,(*p)->m_dato)]);
    return (*p);
}

template <class T,class C>
bool ArbolB<T,C>::m_insertar(T dato)
{
    Nodo<T>**p;
    if(m_buscar(dato,p))
        return 0;
    (*p)=new Nodo<T>(dato);
    return 1;
}


template <class T,class C>
void ArbolB<T,C>::m_inorder(Nodo<T> *&ptr)
{
    if(ptr)
    {
        m_inorder(ptr->m_child[0]);
        cout<<ptr->m_dato<<endl;
        m_inorder(ptr->m_child[1]);
    }
}


/*Intento Fallido*/
template <class T,class C>
void ArbolB<T,C>::m_inorder_de_arbol_a_lista(Nodo<T> *&ptr)
{
        if(ptr)
    {
        m_inorder_de_arbol_a_lista(ptr->m_child[1]);
        m_inorder_de_arbol_a_lista(ptr->m_child[0]);
        cout<<ptr->m_dato<<endl;
        if(ptr->m_child[0] || ptr->m_child[1])
        {
            //cout<<"Nodo Interno"<<ptr->m_dato<<endl;
            imprimir_ptr();
            m_ptr->m_child[1]=ptr->m_child[0];
            //delete ptr->m_child[0];
            /*EL HIJO DEL mas derecho posee el cotnenido de manejador*/

        }

    }

   /*if(ptr)
    {
        m_inorder_de_arbol_a_lista(ptr->m_child[0]);
        cout<<ptr->m_dato<<endl;
        m_ptr=ptr;Al terminal m_prt deberia ser el ultimo dato inorder ptr =NULL como m_child[0] de m_ptr
        Que el m_child[1] -> a dónde tiene que ir
        m_ptr->m_child[1]= cómo acceder a esa pila virtual al estado de ptr anterior
        ptr=m_ptr;
        cout<<"         igualados "<<ptr->m_dato<<endl;
        m_inorder_de_arbol_a_lista(ptr->m_child[1]);


    }*/

}

template <class T,class C>
void ArbolB<T,C>::imprimir_ptr()
{
    m_ptr=m_root;
    //cout<<"PTROOO-> "<<m_ptr->m_dato<<endl;
    while(m_ptr->m_child[1])
    {
        m_ptr=m_ptr->m_child[1];
        //cout<<"PTROOO-> "<<m_ptr->m_dato<<endl;
    }
    //cout<<"PTROOO-> "<<m_ptr->m_dato<<endl;


}

/*Como una Especie de Indorer Manual*/
template <class T, class C>
void ArbolB<T,C>::m_lista()
{

    Nodo<T>* a;
    Nodo<T>* aux;
    Nodo<T>** p;
    for(a=m_root;a->m_child[1];a=a->m_child[1]){}
    aux=m_root;

    while(aux)
    {
        while(aux->m_child[0])
        {
            for(p=&aux;(*p)->m_child[0];p=&((*p)->m_child[0]));
            a->m_child[1]=(*p);
            (*p)=0;
            while(a->m_child[1])
            {
                a=a->m_child[1];
            }
        }
        aux=(aux->m_child[1]);
    }
    imprimir_lista();

}


template<class T,class C>
void ArbolB<T,C>::imprimir_lista()
{
    Nodo<T>* p=m_root;

    while(p)
    {
        cout<<p->m_dato<<"->";
        p=p->m_child[1];
    }
    cout<<endl;
}


#endif // ARBOLB_H
