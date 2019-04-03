#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1=0;
    float numero2=0;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    float factorialResultado;

    while(seguir=='s')
    {
        printf("----------CALCULADORA----------\n\n");
        printf("1- Ingresar 1er operando (A=%.1f)\n", numero1);
        printf("2- Ingresar 2do operando (B=%.1f)\n", numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Ingresar 1er operando: \n");
                scanf("%f", &numero1);
                break;
            case 2:
                system("cls");
                printf("Ingresar 2do operando: \n");
                scanf("%f", &numero2);
                break;
            case 3:
                system("cls");
                suma = sumar(numero1, numero2);
                printf("El resultado de %.2f + %.2f es: %.2f\n\n", numero1, numero2, suma);
                break;
            case 4:
                system("cls");
                resta = restar(numero1, numero2);
                printf("El resultado de %.2f - %.2f es: %.2f\n\n", numero1, numero2, resta);
                break;
            case 5:
                system("cls");
                if(numero2 == 0)
                {
                    printf("No se puede dividir por cero.\n\n");
                }
                else
                {
                division = dividir(numero1, numero2);
                printf("El resultado de %.2f / %.2f es: %.2f\n\n", numero1, numero2, division);
                }
                break;
            case 6:
                system("cls");
                multiplicacion = multiplicar(numero1, numero2);
                printf("El resultado de %.2f * %.2f es: %.2f\n\n", numero1, numero2, multiplicacion);
                break;
            case 7:
                system("cls");
                if(numero1 < 0)
                {
                    printf("No existe el factorial de %.2f\n\n", numero1);
                }
                else
                {
                factorialResultado = factorial(numero1);
                printf("El factorial de %.2f es %.2f\n\n", numero1, factorialResultado);
                }

                if(numero2 < 0)
                {
                    printf("No existe el factorial de %.2f\n\n", numero2);
                }
                else
                {
                factorialResultado = factorial(numero2);
                printf("El factorial de %.2f es %.2f\n\n", numero2, factorialResultado);
                }
                break;
            case 8:
                system("cls");

                suma = sumar(numero1, numero2);
                printf("El resultado de %.2f + %.2f es: %.2f\n\n", numero1, numero2, suma);

                resta = restar(numero1, numero2);
                printf("El resultado de %.2f - %.2f es: %.2f\n\n", numero1, numero2, resta);

                if(numero2 == 0)
                {
                    printf("No se puede dividir por cero.\n\n");
                }
                else
                {
                division = dividir(numero1, numero2);
                printf("El resultado de %.2f / %.2f es: %.2f\n\n", numero1, numero2, division);
                }

                multiplicacion = multiplicar(numero1, numero2);
                printf("El resultado de %.2f * %.2f es: %.2f\n\n", numero1, numero2, multiplicacion);

                if(numero1 < 0)
                {
                    printf("No existe el factorial de %.2f\n\n", numero1);
                }
                else
                {
                factorialResultado = factorial(numero1);
                printf("El factorial de %.2f es %.2f\n\n", numero1, factorialResultado);
                }

                if(numero2 < 0)
                {
                    printf("No existe el factorial de %.2f\n\n", numero2);
                }
                else
                {
                factorialResultado = factorial(numero2);
                printf("El factorial de %.2f es %.2f\n\n", numero2, factorialResultado);
                }
                break;
            case 9:
                system("cls");
                seguir = 'n';
                printf("\nHas salido exitosamente.\n");
                break;
            default:
                system("cls");
                printf("La opcion es invalida.\n\n");
                break;
        }

    }


    return 0;
}
