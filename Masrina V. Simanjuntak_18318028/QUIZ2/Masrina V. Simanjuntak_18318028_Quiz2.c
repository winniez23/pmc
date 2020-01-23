//Nama       : Masrina Vivianna Simanjuntak
//NIM  		 : 18318028
//Keterangan : kuis 2

// Mencari nilai x dan y yang membuat f1 dan f2 berpotongan
// f1  : y1 = 2x + 2
// f2  : y2 =4x -4

#include <stdio.h>

int main () {
	int detx,dety,det;
	int x,y;
	int matriks1 [2][2];
	int matriks2 [2][2];
	int matriks3 [2][2];
	matriks1[0][0] =-2;
	matriks1[0][1] =-1;
	matriks1[1][0] = 4;
	matriks1[1][1] =-1;
	matriks2[0][0] = 2;
	matriks2[0][1] =-2;
	matriks2[1][0] = 4;
	matriks2[1][1] = 4;
	matriks3[0][0] = 2;
	matriks3[0][1] =-1;
	matriks3[1][0] = 4;
	matriks3[1][1] =-1;
	
detx = ((matriks1[0][0] * matriks1[1][1])-(matriks1[1][0]*matriks1[0][1]));
dety = ((matriks2[0][0] * matriks2[1][1])-(matriks2[1][0]*matriks2[0][1]));
det  = ((matriks3[0][0] * matriks3[1][1])-(matriks3[1][0]*matriks3[0][1]));

x = detx/det;
y= dety/det;
printf ("Nilai x adalah :%d\n",x);
printf ("Nilai y adalah :%d\n",y);

return (0);
}