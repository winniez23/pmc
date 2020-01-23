#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
	float Vo=50, g=10,t, x=0,y=0,theta=60*PI/180;
	float tmax = 2*Vo*sin(theta)/g;
	printf("tmax = %f\n",tmax);
	for (t = 0; t <= tmax; t+=0.01)
		{
		printf("t = %f\n",t);
		y+= (Vo*sin(theta)-g*t)/100;
		x+= Vo*cos(theta)/100;
		printf("Koordinat x = %.3f\n Koordinat y = %.3f\n",x,y);
		}
	
	printf("Jarak terjauh = %f\n",x);
	return 0;
}
