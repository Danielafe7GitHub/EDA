#ifndef NODO_H
#define NODO_H
template <class T>
class Nodo
{
public:
    Nodo(T);
    T m_dato;
    Nodo *m_child[2];
};

template<class T>
Nodo<T>::Nodo(T dato)
{
    m_child[0]=m_child[1]=NULL;
    m_dato=dato;
}





#endif // NODO_H
