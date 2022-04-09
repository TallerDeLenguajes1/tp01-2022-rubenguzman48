#include <stdio.h>

int main()
{
    int Dato = 4; 
    int *PtrDato;

    PtrDato = &Dato;

    printf("Hola Mundo\n");
    printf("Contenido del puntero: %d\n", *PtrDato); //Con este linea mostramos el contenido de la variable a la que apunta el puntero
    printf("Direccion de memoria almacenada por el puntero: %d\n", PtrDato); //Con esta linea mostramos la direccion de memoria a la que apunta el puntero
    printf("Direccion de memoria de la varibale: %d\n", &Dato); //Con esta linea mostramos la direccion de memoria de la variable
    printf("Direccion de memoria de puntero: %d\n", &PtrDato);
    printf("Tamaño de memoria utilizado por la variable es de %zd bytes\n", sizeof(Dato));


return 0;    
}





