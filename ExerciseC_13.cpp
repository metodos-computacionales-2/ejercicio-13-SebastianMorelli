//Este código implementa la multiplicación de matrices y las llena de una forma determinada.

#include <iostream>
#include <cmath>
using namespace std;

//Declaración Variables.

int n = 5;

//Declaración Funciones.

float * productMatrix (float Matrix1[], float Matrix2[], int num);

float * Rellenador(int num);

//Función Main.

int main()
{
    cout<<Rellenador(n)<<endl;
    cout<<productMatrix(Rellenador(n), Rellenador(n), n)<<endl;
    return 0;
}

//Implementación funciones.

float * productMatrix(float Matrix1[], float Matrix2[], int num){
    
    float result[];
    float * point = result;
    
    for(int i = 0; i < num; i++)
    {
        for(int k = 0; k < num; k++)
        {
            result[i][k] = Matrix1[i][k]*Matrix2[k][i];
        }
    }
    return point;
}

float * Rellenador(int num){
    
    float Matx[];
    float * point = Matx;
    for(int i = 0; i < num ; i++)
    {
        for(int k = 0; k < num ; k++)
        {
            if(i == 0 && k == num-1){Matx[i][k] = 1-num;}
            else if(i > 0 && k == num-1){Matx[i][k] = -num;}
            else if(i == 1 && k < num-1){Matx[i][k] = 2}
            else if(i == k+1){Matx[i][k] = num + 2;}
            else{Matx[i][k] = 1;}
        }
    }
    return point;
}