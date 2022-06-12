#include<stdio.h>
//#include<string.h>
        
void main()
{
    int i, n;
    char str[10] = "aleksander";
    
    //n=strlen(str);
    
    printf("\nOdwrocone slowo to: ");
    for(i=10;i>=0;i--) //i = wielkosc str
    {
       printf("%c",str[i]);
    }

}
