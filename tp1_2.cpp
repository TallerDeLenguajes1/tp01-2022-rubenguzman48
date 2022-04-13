#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cuadrado(int num);
void cuadradoVoid(int numVoid);
void invertir(int a,int b);
void orden(int a, int b);

int main()
{
    int numero = 5;
    int invNumA;
    int invNumB;

    printf("El cuadrado de %d es: %d usando funcion \n", numero, cuadrado(numero));
    
    cuadradoVoid(numero);

    printf("La direccion de memoria de la variable es: %d\n", &numero);

    printf("Ingrese un numero a: ");
    scanf("%d", &invNumA);
    printf("Ingrese un numero b: ");
    scanf("%d", &invNumB);

    invertir(invNumA, invNumB);

    orden(invNumA, invNumB);

    return 0;
}

int cuadrado(int num) //Esta funcion muestra la direccion de memoria y el contenido de 
{
    int potencia;
    potencia = pow(num, 2);
    printf("La direccion de memoria de la variable num es %d y el contenido es %d\n", &num, num);
    return potencia;
}

void cuadradoVoid(int numVoid)
{
    int potenciaVoid;
    potenciaVoid = pow(numVoid, 2);
    printf("El cuadrado de %d es: %d\n", numVoid, potenciaVoid);
    printf("La direccion de memoria de la variable num es %d y el contenido es %d\n", &numVoid, numVoid);
    return;
}

void invertir(int a, int b)
{
    int auxiliar;

    auxiliar = a;
    a = b;
    b = auxiliar;

    printf("Los numeros invertidos son a = %d y b = %d\n", a, b);
    return;
}

void orden(int a, int b)
{
    int auxiliar;
    if(a <= b)
    {
        printf("Los numeros ordenados de menor a mayor son a = %d y b = %d\n", a, b);
    }else 
    {
        auxiliar = a;
        a = b;
        b = auxiliar;

        printf("Los numeros ordenados de menor a mayor son a = %d y b = %d\n", a, b);
    }
    return;
}
