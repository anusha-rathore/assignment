#include <stdio.h> 
#include<string.h>
int main()
{
    char a[20];
    int length;

    printf("enter a string\n ");
    gets(a);
    length= strlen(a);
    printf("length of string:%d",length);
return 0;
}

