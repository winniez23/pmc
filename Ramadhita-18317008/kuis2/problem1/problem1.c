//***********************************************************//
//                      [ Source Code ]
//
// Institution       : Institut Teknologi Bandung
// Name              : Ramadhita Umitaibatin
// Module            : 05
// Problem           : 1
// File Name         : problem1.c
// Dependency        : stdio.h, stdiolib.h
//
// Description:
//     menulis ulang elemen, mencacri sum, dan perkalian
//***********************************************************//

#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int n,*a,i,sum=0,times=1;
    // Input Format
    do
    {
    	printf("Masukkan jumlah elemen : ");
    	scanf("%d",&n);
    	if (n<0)
    	printf("Input jumlah elemen tidak sesuai\n");
    } while (n<=0); 
    a = (int*) malloc (n * sizeof (int));

    printf("\nMasukkan %d elemen\n", n);
    for (i = 0; i < n; ++i)
    {
    	printf("Nilai elemen %d: ", i+1);
    	scanf("%d",a+i);
    	sum+=a[i];
    	times=times*(a[i]);
    }
    printf("\nElemen yang dimasukkan : ");
    for (i=0;i<n;++i) 	printf("%d ",a[i]);
	printf("\nJumlah elemen : %d\n",sum);
    printf("Perkalian elemen : %d\n",times);
    
    free(a);
    return 0;    
}
