#include<stdio.h>
//#include<string.h>
        
void main()
{
    int i, n;
    char str[10] = "aleksander";
    char *ptr = str;
    
    //printf("str[]: %c\n", str[9]);
    //printf("*ptr:  %c\n", *(ptr+9));
        
    //n=strlen(str);
    
    printf("\nOdwrocone slowo to: ");
    for(i=10;i>=0;i--) //i = wielkosc str
    {
       printf("%c",str[i]);
    }
    
    printf("\nOdwrocone slowo za pomocą wskaźnika to: ");
    for(i = 10; i >= 0; i--)
    {
        printf("%c", *(ptr + i));    
    }
    

}
