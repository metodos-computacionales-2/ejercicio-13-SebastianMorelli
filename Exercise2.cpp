//Este código evalua la función de la declaración const en una variable pasada por referencia.

#include <iostream>
#include <cmath>
using namespace std;

//Declaración Variables.


//Declaración Funciones.

//int addition(int &a, int b)

int addition(const int &a, int b);    

//Función Main.

int main()
{
    int x,y,z;
    x=5;
    y=3;
    z=addition(x,y);
    cout<< "The result is " <<z<<"\n";
    cout<< "The value of x is " <<x<<"\n";
    return 0;
}

//Implementación funciones.

//int addition(int &a, int b)
//{
//    int r;
//    r=a+b;
//    a=r;
//    return r;
//}

int addition(const int &a, int b)
{
    int r;
    r=a+b;
    a=r;
    return r;
}
