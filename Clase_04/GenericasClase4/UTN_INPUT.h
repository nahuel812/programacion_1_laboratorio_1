//En los .h pongo los prototipos de las funciones.

//prototipo de la funcion

//Documento con doxygen.
//el brief es lo que hace la funcion.
//luego los parametros que le llegan a la funcion.
//y por ultimo el retorno que tiene esa funcion.
/** \brief Permite el ingreso de un numero entero y lo valida.
 *
 * \param char[] mensaje que se mostrara
 * \param int minimo del rango de validacion
 * \param int maximo del rango de validacion
 * \return int el numero validado.
 *
 */
int pedirNumeroEntero(char[],int,int);//recibe una cadena de caracteres.

float pedirNumeroFlotante(char[],int,int);

char pedirChar(char[]);

int validarEntero(int,char[], int, int);
