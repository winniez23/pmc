//***********************************************************//
//                      [ Source Code ]
//
// Institution       : Institut Teknologi Bandung
// Name              : Ramadhita Umitaibatin
// Module            : 05
// Problem           : 3
// File Name         : problem3.c
// Dependency        : stdio.h, stdlib.h
//
// Description:
//     menulis ulang karakter
//***********************************************************//

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // Define Variable Here
    int n,*a,i;
    a= (int*) malloc (1000 * sizeof (int));
    a[0]=-1;
    i=1;
    // Your Code Here!
    // ** Gunakan Format Printf berikut ** //
    while (a[i-1]!=0)
    {
    	printf("Masukkan kode ASCII : ");
    	scanf("%d",&a[i]);
    	if (a[i]==0) 
		{
			n=i;
			break;	
		}
    	else
    	if (!((a[i]>64) && (a[i]<91) || ((a[i]>96) && (a[i]<123))))
    	{
    		printf("Kode ASCII yang diberikan bukan huruf\n");
    		printf("\n");
    	}
    	else 
		{
			++i;	
		}	
    } 
    
    for (i=1;i<n;++i)
    printf("Ascii: %d\tChar =%c\n", a[i], (char)a[i]);
    
    free(a);
   return(0);
}
