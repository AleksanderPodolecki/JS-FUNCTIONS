#include<stdio.h>

void main()
{
    int i;
    char str[10] = "olek123";

    printf("\nOdwrocone slowo to: ");
    for(i=10;i>=0;i--) //i = wielkosc str
    {
       printf("%c",str[i]);
    }

}
