<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int array[7] = {1, 5, 3, 4, 5, 6, 7};
    int *ptr = array; /*Apunta al primer elemento del array*/

    for (int i = 0; i < 7; i++)
    {
        cout << array[i];
    }
    cout << endl;
    cout << "Contenido del Puntero " << *ptr << endl;

    cout << *ptr++ << endl;/*Lo deja apuntando en 7*/
    cout << *ptr << endl;
    cout<<"Actualizando Valores"<<endl;
    ptr = array;
    cout << "Contenido del Puntero " << *ptr << endl;
    cout << *++ptr << endl;

    cout<<"Actualizando Valores"<<endl;
    ptr = array;
    cout << "Contenido del Puntero " << *ptr << endl;
    cout << ++*ptr << endl;

    cout<<"Actualizando Valores"<<endl;
    cout << "Contenido del Puntero " << *ptr << endl;
    ptr = array;
    cout << (*ptr)++ << endl;



    return 0;

}
=======

void Resta(int X,int Y)
{
    int result;
    result= X-Y;
    cout<<result<<endl;
}

void imprimir()
{
    cout<<"Bienvenido "<<endl;
    
}


void Suma(int X, int Y)
{
    imprimir();
    int result;
    result=X+Y;
    cout<<result<<endl;
}

int main()
{
    cout<<"Ramitas"<<endl;
    Suma(8,7) ;
    cout<<"Se ha finalizado la OPeracion" <<endl;
}
>>>>>>> 38c6cfe3983618fbe20d6cd3ab514348fb56b21b
