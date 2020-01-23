//***********************************************************//
//                      [ Source Code ]
//
// Institution       : Institut Teknologi Bandung
// Name              : Ramadhita Umitaibatin
// Module            : 05
// Problem           : 2
// File Name         : problem2.c
// Dependency        : stdio.h, math.h, dst...
//
// Description:
//     mencari fibonacci
//***********************************************************//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define Variable Here
     int i,n,*a;
    
    
    // Your Code Here!

    do
    {
    	printf("Masukkan urutan digit yang mau dicari : ");
    	scanf("%d",&n);
    	if (n<1) printf("Urutan harus berupa bilangan positif\n");
    } while (n<1); //nol merupakan bilangan non negatif tapi bukan positif, jadi start dari 1
    
    a = (int*) malloc ((n+1) * sizeof (int));
   // f=0;
    a[0]=0;
    a[1]=1;
    if (n==1) printf("Nilai elemen ke %d: %d\n",n,a[n]);
    for (i = 2; i < (n+1); ++i)
    {
	   	*(a+i)= *(a+i-2)+ *(a+i-1);
    	if (i==n) printf("Nilai elemen ke %d: %d\n",i,*(a+i));
    }
    free(a);

    return 0;
}
