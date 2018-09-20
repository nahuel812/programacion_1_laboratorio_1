#define A 3
#define VACIO 0
#define OCUPADO 1
#define ELIMINADO -1

typedef struct
{
    int legajo;
    char nombre[50];
    char direccion[50];
    float promedio;
    int estado;
} eAlumno;


eAlumno cargarAlumno();
void mostrarAlumno (eAlumno alumnoParametro);
void cargarListado(eAlumno[], int);

/** \brief da de alta un alumno en el listado
 *
 * \param eAlumno[] el listado
 * \param tam int  el tamaño del listado
 * \return int     0 [SI LA CAPACIDAD DE LA LISTA DE AGOTO]
                   1 [SI PUDO GUARDAR]
 *
 */
int cargarAlumnoEnListado(eAlumno[], int);

void mostrarListado(eAlumno[], int);

void inicializarAlumnos(eAlumno[], int, int);
int buscarEspacio(eAlumno[],int);

void altaAlumno(eAlumno[], int );

int borrarAlumno(eAlumno[],int);
