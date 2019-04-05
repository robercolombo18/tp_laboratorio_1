#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir= 's';
    int opcion = 0;
    int bandera = 0;
    float numero1 = 0;
    float numero2 = 0;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    float factorialResultado1;
    float factorialResultado2;

    do
    {
        printf("\n----------CALCULADORA---------- \n\n");
        printf("Seleccione una de las siguientes opciones: \n");
        printf("1- Ingresar 1er operando: (A = %.1f)\n", numero1);
        printf("2- Ingresar 2do operando: (B = %.1f)\n", numero2);
        printf("3- Calcular todas las operaciones. \n");
        printf("4- Informar resultados. \n");
        printf("5- Salir. \n");
        scanf("%d", &opcion);

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
                resta = restar(numero1, numero2);
                division = dividir(numero1, numero2);
                multiplicacion = multiplicar(numero1, numero2);
                factorialResultado1 = factorial(numero1);
                factorialResultado2 = factorial(numero2);
                printf("Se han realizado los calculos exitosamente. \n\n");
                bandera = 1;

            break;


            case 4:

                if(bandera == 1)
                {
                    system("cls");

                    //SUMA
                    printf("El resultado de %.2f + %.2f es: %.2f \n", numero1, numero2, suma);

                    //RESTA
                    printf("El resultado de %.2f - %.2f es: %.2f \n", numero1, numero2, resta);

                    //DIVISION
                    if(numero2 == 0)
                    {
                        printf("No se puede dividir por cero. \n");
                    }
                    else
                    {
                        printf("El resultado de %.2f / %.2f es: %.2f \n", numero1, numero2, division);
                    }

                    //MULTIPLICACION
                    printf("El resultado de %.2f * %.2f es: %.2f \n", numero1, numero2, multiplicacion);

                    //FACTORIAL
                    if(numero1 >= 0 && numero2 >= 0)
                    {
                        printf("El factorial de %.2f es: %.2f y el factorial de %.2f es: %.2f \n", numero1, factorialResultado1, numero2, factorialResultado2);
                    }
                    else if(numero1 >= 0 && numero2 < 0)
                    {
                        printf("El factorial de %.2f es: %.2f y el factorial de %.2f no existe. \n", numero1, factorialResultado1, numero2);
                    }
                    else if(numero1 < 0 && numero2 >= 0)
                    {
                        printf("El factorial de %.2f no existe y el factorial de %.2f es: %.2f \n", numero1, numero2, factorialResultado2);
                    }
                    else if(numero1 < 0 && numero2 < 0)
                    {
                        printf("El factorial de %.2f no existe y el factorial de %.2f tampoco. \n\n", numero1, numero2);
                    }

                }
                else
                {
                    system("cls");
                    printf("No se pueden mostrar los resultados sin antes haberlos calculados. \n\n");
                }

            break;


            case 5:
                system("cls");
                seguir = 'n';
                printf("Ha salido exitosamente. \n\n");
            break;

            default:
                system("cls");
                printf("La opcion no es valida. \n\n");
            break;

        }


    }
    while(seguir != 'n');


    return 0;
}
