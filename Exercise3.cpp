//Este código halla la serie de Fibonacci recursivamente y usando un for.

#include <iostream>
#include <cmath>
using namespace std;

//Declaración Variables.

int num;

//Declaración Funciones.

int fiboRecur(int num1);

int fiboFor(int num1);

//Función Main.

int main()
{
    cout<<"Ingrese un número entero: ";
    cin>>num;
    
    cout<<"La serie de Fibonacci de "<<num<<" hallada recursivamente es: "<<fiboRecur(num)<<endl;
    cout<<"La serie de Fibonacci de "<<num<<" hallada con for es: "<<fiboFor(num)<<endl;
    
    return 0;
}

//Implementación funciones.

int fiboRecur(int num1)
{
    int n_fibo;
    if(num1 == 0 || num1 == 1)
    {
        n_fibo = num1;
    }
    
    else
    {
        n_fibo = fiboRecur(num1-1) + fiboRecur(num1 -2);
    }
    
    return n_fibo;
}

int fiboFor(int num1)
{
    int a = 0;
    int b = 1; 
    int c = 0;
    for(int i = 1; i <= num1; i++)
    {
        a = b+c;
        b = c;
        c = a;
    }
    return a;
}