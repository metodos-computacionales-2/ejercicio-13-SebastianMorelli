//Este código halla el mayor número entre dos int y entre dos double usando la sobrecarga de funciones.

#include <iostream>
#include <cmath>
using namespace std;

//Declaración Variables.

int int_num1 = 3;
int int_num2 = 11;
double dob_num1 = 98.19;
double dob_num2 = 98.20;

//Declaración Funciones.

//int getMaxInt(int num1, int num2);

//double getMaxDouble(double num1, double num2);

int getMax(int num1, int num2);

double getMax(double num1, double num2);

//Función Main.

int main()
{
//    cout<<getMaxInt(int_num1, int_num2)<<endl;
//    cout<<getMaxDouble(dob_num1, dob_num2)<<endl;
    
    cout<<getMax(int_num1, int_num2)<<endl;
    cout<<getMax(dob_num1, dob_num2)<<endl;
    
    return 0;
}

//Implementación funciones.

//int getMaxInt(int num1, int num2)
//{
//    if(num1 > num2){
//        return num1;
//    }
//    
//    else{
//        return num2;
//    }
//}
//
//double getMaxDouble(double num1, double num2)
//{
//    if(num1 > num2){
//        return num1;
//    }
//    
//    else{
//        return num2;
//    }
//}

int getMax(int num1, int num2)
{
    if(num1 > num2){
        return num1;
    }
    
    else{
        return num2;
    }
}

double getMax(double num1, double num2)
{
    if(num1 > num2){
        return num1;
    }
    
    else{
        return num2;
    }
}