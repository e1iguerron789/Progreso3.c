/*Construya un programa que lea los datos de un archivo plano que contiene los datos de un conjunto
 de estudiantes, ordenados en función de su código, y genere un nuevo archivo ordenado de mayor a menor 
 e incluya el cálculo de la nota promedio.*/

#include <stdio.h>
 
 struct estudiante{
    char nombre[40];
    char carrera[60];
    int promedio1;
    int promedio2;
    int promedio3;
    int promediofinal;
 };

void leertexto(struct estudiante estudiantes[5])
{
    FILE*archivo;
    archivo=fopen("alumnos.txt","r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

   for (int i=0;i<5;i++)
   {
    fscanf(archivo, "%s; %s;%d ;%d; %d\n", estudiantes[i].nombre, estudiantes[i].carrera,estudiantes[i].promedio1,estudiantes[i].promedio2,estudiantes[i].promedio3);
   }
    
       contrario(&estudiantes);
    fclose(archivo);
}
 
 void contrario(struct estudiante estudiantes[5])
 {
      FILE*archivo;
      archivo=fopen("alumnos2.txt","w");
       if (archivo == NULL) {
        printf("Error al abrir el archivo.");
        return;
    }
       for (int i=0;i<5;i++)
   {
    fprintf(archivo, "%s ;%s; %d; %d ;%d\n", estudiantes[i].nombre, estudiantes[i].carrera,estudiantes[i].promedio1,estudiantes[i].promedio2,estudiantes[i].promedio3);
   }
    
    fclose(archivo);
}
         

int main ()
{
 struct estudiante estudiantes[5];
leertexto(estudiantes);

    return 0;
}

