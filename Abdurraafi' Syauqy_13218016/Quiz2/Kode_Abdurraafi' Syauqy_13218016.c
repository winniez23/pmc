#include <stdio.h>
#include <math.h>
// Abdurraafi' Syauqy
// 13218016
// Quiz2
double A [2][2];
double Ain [2][2];
double B [2];
double C [2];

int main (void){
   A [0][0] = -2;
   A [0][1] = 1;
   A [1][0] = -4;
   A [1][1] = 1;

   B [0] = 2;
   B [1] = -4;
   double detA;
   int i, j;
   detA = (A[0][0] * A[1][1])-(A[0][1] * A[1][0]);
   Ain [0][0] = (A [1][1])/detA;
   Ain [0][1] = ((-1)*A[0][1])/detA;
   Ain [1][0] = ((-1)*A[1][0])/detA;
   Ain [1][1] = (A [0][0])/detA;

   for (i = 0; i < 2; i++){
       j = 0;
       C[i] = (Ain[i][j]*B[j]);
       j = 1;
       C[i] = C[i] + (Ain[i][j]*B[j]);
   }
   printf("%.0f \n", C[0]);
   printf("%.0f \n", C[1]);
   return(0);
}