/**\brief Recibe y realiza la suma de los parametros ingresados por el usuario
* \param X es el primer numero ingresado por el usuario
* \param Y es el segundo numero ingresado por el usuario
* \return Retorna la suma entre X e Y
**/
float sumar(float x, float y)
{
    float suma;
    suma = x+y;
    return suma;
}

/**\brief Recibe y realiza la resta de los parametros ingresados por el usuario
* \param X es el primer numero ingresado por el usuario
* \param Y es el segundo numero ingresado por el usuario
* \return Retorna la resta entre X e Y
**/
float restar(float x, float y)
{
    float resta;
    resta = x-y;
    return resta;
}

/**\brief Recibe y realiza la division de los parametros ingresados por el usuario
* \param X es el primer numero ingresado por el usuario
* \param Y es el segundo numero ingresado por el usuario
* \return Retorna la division entre X e Y
**/
float dividir(float x, float y)
{
    float division;
    division = x/y;
    return division;
}

/**\brief Recibe y realiza la multiplicacion de los parametros ingresados por el usuario
* \param X es el primer numero ingresado por el usuario
* \param Y es el segundo numero ingresado por el usuario
* \return Retorna la multiplicacion entre X e Y
**/
float multiplicar(float x, float y)
{
    float multiplicacion;
    multiplicacion = x*y;
    return multiplicacion;
}

/**\brief Recibe y realiza el factorial del parametro ingresado por el usuario
* \param X es el numero ingresado por el usuario
* \return Retorna el factorial de X
**/
int factorial(int x)
{

    int factorial = 0;
    int limite = 0;
    int flag = 0;


        if(x == 0 || x == 1)
        {
          factorial = 1;
        }
        else
        {

            while(limite < x)
            {
                limite++;
                if(flag == 0)
                {
                    factorial = limite;
                    flag = 1;
                }
                else
                {
                    factorial = factorial * limite;
                }

            }
        }

    return factorial;
}
