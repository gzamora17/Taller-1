#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Gianfranco Marcolini Recalde
//Nicolas Orellana Alvarado
//Gonzalo Zamora López


int main() 
{
   double a, b, c, discriminante, x1, x2, ParteReal, Parteimaginaria;

   system("color 02");
   printf("\t\t\t----------------\n");
   printf("\t\t\tTALLER POLINOMIO\n");
   printf("\t\t\t----------------\n\n");

   //Formato polinomio ax1 + bx + c
   // Pide al usuario ingresar los coeficientes del polinomio
   printf("Ingrese el coeficiente a: ");
   scanf("%lf", &a);
   printf("Ingrese el coeficiente b: ");
   scanf("%lf", &b);
   printf("Ingrese el coeficiente c: ");
   scanf("%lf", &c);

   // Calcula el discriminante
   discriminante = b * b - 4 * a * c;

   // Verifica si el discriminante es positivo, negativo o cero

   if (discriminante > 0)                  //Soluciones reales y diferentes    EJ: a=2, b=3, c=1 231
   {
      //Asignamos la solucion a X1 y X2 con la formula resolvente.
      x1 = (-b + sqrt(discriminante)) / (2 * a);       
      x2 = (-b - sqrt(discriminante)) / (2 * a);       
      printf("Las soluciones son: %.2f y %.2f\n", x1, x2);
   }

   else if (discriminante == 0)            //Soluciones reales e iguales      EJ= a=4, b=-12, c=9
   {
      x1 = -b / (2 * a);   
      printf("Las soluciones son: %.2f\n", x1);
   }

   else                                   //discriminante menor a 0, Solucion Imaginaria     EJ: a=2, b=1, c=1
   {
      ParteReal = -b / (2 * a);
      Parteimaginaria = sqrt(-discriminante) / (2 * a);
      printf("Las soluciones son: %.2f + %.2fi y %.2f - %.2fi\n", ParteReal, Parteimaginaria, ParteReal, Parteimaginaria);
   }
   system("pause");
   return 0;
}
