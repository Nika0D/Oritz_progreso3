#include <stdio.h>
struct Alumno // definimos el struct
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
}
int crearArchivo(char text[])
{
    FILE *archivo;
    archivo = fopen(text, "w+");
}
void mostrar(char text[], struct Alumno arreglo[n])
{
    FILE *archivo;
    archivo = fopen(text, "r+");
    for (int i = 0; i < n; i++)
    {
        puts("Datos del estudiante:");
        printf("Matricula: %d\n", arreglo[i].matricula);
        printf("Nombre: ");
        puts(arreglo[i].nombre);
        printf("Direccion: ");
        puts(arreglo[i].direccion);
        printf("Carrera: ");
        puts(arreglo[i].carrera);
        printf("Promedio: %.2f\n", arreglo[i].nota);
    }
}
void leer(char text[])
{
    FILE *archivo;
    archivo = fopen(text, "r+");
    while (!feof(archivo))
    {
        fscanf(archivo, "%s %s %f %f", &nombre, &direccion, &materia, &nota);
        printf("%s %s %.2f %d\n", nombre, direccion, materia, nota);
    }
    fclose(archivo);
}
int main(int argc, char const *argv[])
{
    int n, op, seguir=1, cont=0;
    struct Alumno arreglo[n];
    printf("Escriba la cantidad de alumnos maxima:\n ");
    scanf("%d", &n);
    do
    {
        printf(" Para ver la lista de estudiantes [0]\n Para registrar un nuevo estudiante [1]\n Para terminar el programa [2]\n");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            if (cont > 0)
            {
                mostrar(char text[], arreglo[])
            }else{
                printf("No existe alumnos para mostrar\n");
            }
            break;
        case 1:
            if (n!=cont)//condicion para que delimitar el arreglo.
            {
                leer(char text[])
            }else{
                printf("limite de estudiantes alcansado\n");//mensaje de error para no exeder el limite.
            }
            break;
        default:
            break;
        }
    } while (op!=2);
    return 0;
}