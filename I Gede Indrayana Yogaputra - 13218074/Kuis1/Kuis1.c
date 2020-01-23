/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074
 * Tanggal: 21 Januari 2020
 * Program: Program tracking posisi x dan y setiap 10 ms
 * Program: jarak x jatuh ke tanah lagi*/

#include <stdio.h>
#include <math.h>
#define phi 3.14159265

int main(void)
{
    double Vx, Vy, posX, posY, time;
    printf("Pada t = 0.00 sekon \n");
	printf("Koordinat (x, y) ialah (0, 0) \n");
	printf("\n")
	Vx = 50*cos(60*phi/180);
	Vy = 50*sin(60*phi/180);
	posX = Vx*0.1;
	posY = Vy*0.1;
	time = 0.01;
	while (posY >= 0)
		{
		printf("Pada t = %.2f sekon \n", time);
		printf("Koordinat (x, y) ialah (%f,", posX);
		printf(" %f) \n", posY);
		printf("\n");
		time = time + 0.01;
		posX = Vx * time;
		posY = Vy * time - (0.5*10*(time)*(time));
	}
	if (posY != 0)
		posX = posX - Vx * 0.01;
	printf ("Jarak terjauh yang terdeteksi sebelum menyentuh tanah ialah %f \n", posX);
    return(0);
}


