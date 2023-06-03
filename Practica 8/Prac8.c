/**
 * @file Prac8.c
  @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief programa que guarda una lista de alumnos
 * @version 0.1
 * @date 2023-04-30
* @boleta 2023640349
 * 
 * @copyright GPL v3
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Fecha
{
    int Dia;
    int Mes;
    int Anio;
};

typedef struct Fecha Fecha;

struct Alumno
{
    char Nombre[50];
    int Boleta;
    int Ingreso;
    char carrera[50];
    char turno[50];
};

typedef struct Alumno Alumno;

struct Profesor
{
    char NombreP[50];
    int NumEmpeado;
    char TurnoP[50];
};

typedef struct Profesor Profesor;

struct Lista 
{
    Fecha Fecha;
    char UnidadApr[50];
    char Grupo[50];
    Profesor Profesor;
    Alumno* alumnos;
    int TotalAlumnos;
};

typedef struct Lista Lista;

/**
 * @brief Registra la Unidad de Aprendizaje
 * 
 * @param lista 
 */
void RegistrarUnidad(Lista* lista);

/**
 * @brief  Registra el Grupo 
 *  
 * @param lista 
 */
void RegistrarGrupo(Lista* lista);

/**
 * @brief Registra la Fecha
 * 
 * @param lista 
 */
void registarFecha(Lista* lista);

/**
 * @brief  Registra los datos del profesor
 * 
 * @param lista 
 */
void registarProfesor(Lista* lista);

/**
 * @brief  Registra los datos del alumno 
 * 
 * @param lista 
 */
void registarAlumno(Lista* lista);

/**
 * @brief Edita los datos del alumno seleccionado 
 * 
 * @param lista 
 */
void editarAlumno(Lista* lista);

/**
 * @brief Muestra la lista de alumnos completa
 * 
 * @param lista 
 */
void MostrarLista(Lista lista);



int main()
{
    Lista lista;
    lista.alumnos = NULL;
    lista.TotalAlumnos = 0;

    int opcion;
    do {
        printf("\n--- Menu ---\n");
        printf("1. Registrar Unidad de Aprendizaje\n");
        printf("2. Registrar Grupo\n");
        printf("3. Registrar Fecha\n");
        printf("4. Registrar Profesor\n");
        printf("5. Agregar Alumno\n");
        printf("6. Editar Alumno\n");
        printf("7. Mostrar Lista\n");
        printf("8. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);
        getchar();
        switch (opcion) {
            case 1:
                RegistrarUnidad(&lista);
                break;
            case 2:
                RegistrarGrupo(&lista);
                break;
            case 3:
                registarFecha(&lista);
                break;
            case 4:
                registarProfesor(&lista);
                break;
            case 5:
                registarAlumno(&lista);
                break;
            case 6:
                editarAlumno(&lista);
                break;
            case 7:
                MostrarLista(lista);
                break;
            case 8:
                // Liberar memoria antes de salir
                free(lista.alumnos);
                break;
            default:
                printf("Opción inválida. Por favor, ingrese una opción válida.\n");
        }
    } while (opcion != 8);
    return 0;
}




void RegistrarUnidad(Lista* lista){
    printf("Escriba la Unidad de Aprendizaje: ");
     fgets(lista->UnidadApr,sizeof(lista->UnidadApr),stdin);
     lista->UnidadApr[strlen(lista->UnidadApr)-1] = '\0';
}

void RegistrarGrupo(Lista* lista){
    printf("Escriba el Nombre del Grupo: ");
    fgets(lista->Grupo,sizeof(lista->Grupo),stdin);
     lista->Grupo[strlen(lista->Grupo)-1] = '\0';
}

void registarFecha(Lista* lista){
    printf("Escriba la Fecha:\n ");
    printf("Escirba el dia: ");
    scanf("%d",&lista->Fecha.Dia);
    printf("Escriba el mes: ");
    scanf("%d",&lista->Fecha.Mes);
    printf("Escriba el anio: ");
    scanf("%d",&lista->Fecha.Anio);
}

void registarProfesor(Lista* lista){
    printf("Ingrese el Nombre del Profesor: ");
    fgets(lista->Profesor.NombreP,sizeof(lista->Profesor.NombreP),stdin);
     lista->Profesor.NombreP[strlen(lista->Profesor.NombreP)-1] = '\0';
    printf("Escriba el Numero de empleado: ");
    scanf("%d",&(lista->Profesor.NumEmpeado));
    getchar();
    printf("Escriba el Turno: ");
    fgets(lista->Profesor.TurnoP,sizeof(lista->Profesor.TurnoP),stdin);
     lista->Profesor.TurnoP[strlen(lista->Profesor.TurnoP)-1] = '\0';

}

void registarAlumno(Lista* lista) {
    lista->TotalAlumnos++;
    lista->alumnos = realloc(lista->alumnos, lista->TotalAlumnos * sizeof(Alumno));
    Alumno* alumnos = &(lista->alumnos[lista->TotalAlumnos - 1]);

    printf("Ingrese el Nombre completo del alumno: ");
    fgets(alumnos->Nombre, sizeof(alumnos->Nombre), stdin);
    alumnos->Nombre[strlen(alumnos->Nombre) - 1] = '\0';

    printf("Ingrese el Numero de Boleta: ");
    scanf("%d", &(alumnos->Boleta));
    getchar();
    printf("Ingrese el anio de ingreso: ");
    scanf("%d", &(alumnos->Ingreso));
    getchar();
    printf("Ingrese la Carrera: ");
    fgets(alumnos->carrera, sizeof(alumnos->carrera), stdin);
    alumnos->carrera[strlen(alumnos->carrera) - 1] = '\0';

    printf("Ingrese el turno: ");
    fgets(alumnos->turno, sizeof(alumnos->turno), stdin);
    alumnos->turno[strlen(alumnos->turno) - 1] = '\0';
}


void editarAlumno(Lista* lista) {
    int num;
    char eleccion;
    for (int i = 0; i < lista->TotalAlumnos; i++) {
        printf("%d.- %s\n", i + 1, lista->alumnos[i].Nombre);
    }

    printf("Seleccione el numero del alumno que desea editar: ");
    scanf("%d", &num);
    getchar();
    if (num > 0 && num <= lista->TotalAlumnos) {
        Alumno* alumno = &(lista->alumnos[num - 1]);
        printf("El alumno seleccionado es %s, es correcto? (S/n)\n", alumno->Nombre);

        scanf("%c", &eleccion);
        getchar();

        if (eleccion == 'S' || eleccion == 's') {
            printf("Ingrese el nuevo nombre del alumno: ");
            fgets(alumno->Nombre, sizeof(alumno->Nombre), stdin);
            alumno->Nombre[strlen(alumno->Nombre) - 1] = '\0';

            printf("Ingrese el nuevo numero de Boleta: ");
            scanf("%d", &(alumno->Boleta));
            getchar();
            printf("Ingrese el nuevo anio de ingreso: ");
            scanf("%d", &(alumno->Ingreso));
            getchar();

            printf("Ingrese la nueva carrera: ");
            fgets(alumno->carrera, sizeof(alumno->carrera), stdin);
            alumno->carrera[strlen(alumno->carrera) - 1] = '\0';

            printf("Ingrese el nuevo turno: ");
            fgets(alumno->turno, sizeof(alumno->turno), stdin);
            alumno->turno[strlen(alumno->turno) - 1] = '\0';
        } else {
            printf("Escogio al alumno incorrecto.\n");
        }
    } else {
        printf("El numero de alumno es inválido.\n");
    }
}


void MostrarLista(Lista lista){
        printf("\n\nFecha: %d -- %d -- %d\n\n",lista.Fecha.Dia, lista.Fecha.Mes, lista.Fecha.Anio);
        printf("Unidad de Aprendizaje: %s\n\n",(lista.UnidadApr));
        printf("Grupo: %s\n\n", lista.Grupo);
        printf("Profesor: %s  (N. Empleado: %d  turno: %s )\n\n",(lista.Profesor.NombreP), (lista.Profesor.NumEmpeado), (lista.Profesor.TurnoP));
        printf("Alumnos\n");

        for (int i = 0; i < lista.TotalAlumnos; i++)
        {
            Alumno alumno = lista.alumnos[i];
            printf("\n\n%d.-\n", i+1);
        printf("  Nombre: %s\n", alumno.Nombre);
        printf("  Numero de Boleta: %d\n", alumno.Boleta);
        printf("  Anio de Ingreso: %d\n", alumno.Ingreso);
        printf("  Carrera: %s\n", alumno.carrera);
        printf("  Turno: %s\n", alumno.turno);
        }       
}



