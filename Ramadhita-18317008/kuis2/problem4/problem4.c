//***********************************************************//
//                      [ Source Code ]
//
// Institution       : Institut Teknologi Bandung
// Name              : Ramadhita Umitaibatin
// Module            : 05
// Problem           : 4
// File Name         : problem4.c
// Dependency        : stdio.h, math.h, dst...
//
// Description:
// Mengkopi kata ke yang lebih panjang dan merata-ratakannya
//***********************************************************//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *bacaString(FILE* fp, size_t size){ 
//file yang dimaksud disini maksudnya masukan dari stdin
//size akan bertambah sesuai dengan ketentuan input
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(char)*size);//size is start size
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(char)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(char)*len);
}

int main(void){
    char *s1,*s2,*kata1,*kata2;
    int c,k=0,i;

    printf("Masukkan kata1 : ");
    s1 = bacaString(stdin, 10); //masukan dari stdin
    printf("Masukkan kata2 : ");
    s2 = bacaString(stdin, 10); //masukan dari stdin
    
    //mengkopi s1 jika s2 lebih panjang
    if ((strlen(s1)-1) < (strlen(s2)-1))
    {   
    	char *kata1=malloc(strlen(s2));
        for (i = 0; i < strlen(s2)-1; ++i)
        {
            if (s1[k]!='\0')
            {
            kata1[i]+=s1[k];
            ++k;    
            }
            else 
            {
                k=0;
                --i;
            }
        }
        kata1[i] = '\0';
    //mencafi rata-rata
    for (i=0; i<strlen(s2);++i)
    {
        c= (kata1[i] + s2[i])/2;
        printf("%c\t%c\t%c\n", kata1[i], s2[i], (char)c);
    }   
    }
    
    //mengkopi s2 jika s1 lebih panjang
    if ((strlen(s1)-1) > (strlen(s2)-1))
    {   
    	char *kata1=malloc(strlen(s2));
        for (i = 0; i < strlen(s2)-1; ++i)
        {
            if (s2[k]!='\0')
            {
            kata2[i]+=s2[k];
            ++k;    
            }
            else 
            {
                k=0;
                --i;
            }
        }
        kata1[i] = '\0';
    //mencafi rata-rata
    for (i=0; i<strlen(s1);++i)
    {
        c= (kata2[i] + s1[i])/2;
        printf("%c\t%c\t%c\n", kata2[i], s1[i], (char)c);
    }   
    }
    
    
    free(s1); free(s2);
    return 0;     
}
