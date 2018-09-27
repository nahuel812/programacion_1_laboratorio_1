typedef struct
{
    int id;
    char nombre[50];
    int duracion;
    char profesor[50];
}eCurso;

void inicializarCursos(eCurso*);

void mostrarCurso(eCurso);//Recibe solo 1 curso, no es puntero.

void mostrarTodosLosCursos(eCurso* , int );
