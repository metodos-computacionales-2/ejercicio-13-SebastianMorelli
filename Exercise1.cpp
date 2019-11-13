//Este código imprime la dirección de memoria de las variables.

#include <iostream>
#include <cmath>
using namespace std;

//Declaración Variables.

int x=5,y=3,z;

//Declaración Funciones.

int subtraction(int a, int b);

//Función Main.

int main()
{
    z=subtraction(7,2);
    cout<< "The first result is " <<z<<endl;
    cout<< "The second result is " <<subtraction(7,2)<<endl;
    cout<< "The third result is " <<subtraction(x,y)<<endl;
    z=4+subtraction(x,y);
    cout<< "The fourth result is " <<z<<endl;
    
    cout<<"La dirección de memoria de la variable x es: "<<&x<<endl;
    cout<<"La dirección de memoria de la variable y es: "<<&y<<endl;
    cout<<"La dirección de memoria de la variable z es: "<<&z<<endl;
    
    
    return 0;
}

//Implementación funciones.

int subtraction(int a, int b)
{
    int r;
    r=a-b;
    return r;
}