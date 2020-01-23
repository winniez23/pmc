#include <stdio.h>
#include <math.h>
// Abdurraafi' Syauqy
// 13218016
// Quiz1
double kecepatan, g, y, x;
double t, tmax;
int main (void) {
   kecepatan = 50;
   g = 10;
   t = 0;
   tmax = (2 * ((kecepatan * sin(M_PI/3)/g))) * 1000 ;
   while (t < tmax){
       x = ((kecepatan * cos(M_PI/3) * t))/1000 ;
       y = (((kecepatan * sin(M_PI/3) * t * 0.001) - (0.000001 * 0.5 * g * t * t)));
       printf("x = %.2f m \n", x);
       printf("y = %.2f m \n", y);
       printf("\n");
       t = t + 10;
   }
   printf("Xmax = %.2f m", x);
   return(0);
}


