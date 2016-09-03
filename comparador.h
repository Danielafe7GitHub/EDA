#ifndef COMPARADOR_H
#define COMPARADOR_H
template <class T>
struct Less
{
    bool operator()(T a, T b)
    {
        return a < b;
    }
};


template <class T>
struct Greater
{
    bool operator()(T a, T b)
    {
        return a > b;
    }
};


#endif // COMPARADOR_H
