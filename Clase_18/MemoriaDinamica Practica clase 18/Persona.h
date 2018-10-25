typedef struct
{
    int id;
    char nombre[30];
    int edad;
}ePersona;

ePersona* nuevaPersona();//constructor de persona, crea un espacio en memoria para una persona.
ePersona* nuevaPersonaParametros(int,char*,int);

int ePersona_getEdad(ePersona*);//getter de edad de una persona, puedo validar dentro de la funcion
void ePersona_setEdad(ePersona*,int);//setter de edad, setea un valor en el campo edad de la persona.

void ePersona_mostrar(ePersona*);

