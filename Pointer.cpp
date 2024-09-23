//Un puntero es una variable que almacena la dirección de memoria de otra variable.

#include <iostream>
using namespace std;

void increasePrice(double* price){
    *price *= 1.2;
}

int main (){
    int number = 10; //Se declara una variable de tipo entero
    int *pointer = &number; //Se declara un puntero que almacena la dirección de memoria de la variable number
    
    //Indica * que es un puntero y & que es la dirección de memoria de la variable number
    
    cout << "Dirección de memoria del puntero: " << pointer << endl; //Imprime la dirección de memoria de la variable number

    cout << "Dirección variable: " << &number << endl; //Imprime la dirección de memoria de la variable number

    cout << "Valor del puntero: " << *pointer << endl; //Imprime el valor de la variable number

    //Asignar un nuevo valor a la variable number

    *pointer = 20; //Se cambia el valor de la variable number a 20

    cout << "Nuevo valor del numero: " << number << endl; //Imprime el nuevo valor de la variable number

    //Ejemplo 2
    int x = 100;
    int y = 200;
    int *p1 = &x; // El p1 almacena la dirección de memoria de x

    *p1 *= 2; //Se multiplica el valor de la variable x por 2
    p1 = &y; //Ahora apunta a la dirección de memoria de y, se pierde el valor de x
    *p1 *= 5; //Se multiplica el valor de la variable y por 2
    
    cout << "Valor del puntero p1: " << *p1 << endl; //Imprime el valor de la variable y

    //Punteros constantes y constantes

    const int w = 10; //
    const int *p2 = &w; //El puntero p2 almacena la dirección de memoria de la variable w

    cout << "Memory address constante: " << p2 << endl; //Imprime la dirección de memoria de la variable w

    //No se puede modificar el valor de la variable w porque el memory address es de tipo constante

    //Ejemplo 3

    double price = 100;
    increasePrice(&price);
    cout << "Precio: " << price << endl; //Imprime el precio original

    struct Pointer{
        int a;
        int b;
    };

    Pointer p = {30, 50};
    Pointer* pValue = &p;

    cout << "Valor de a: " << pValue->a << endl; //Imprime el valor de a
    cout << "Valor de b: " << pValue->b << endl; //Imprime el valor de b

    return 0;
}