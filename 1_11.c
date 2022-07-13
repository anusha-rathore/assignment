#include <stdio.h>
int main()
{
    int hour, minute;
    printf("enter hour and minutes\nHH:MM\n");
    scanf("%d", &hour);
   scanf("%d", &minute);
    printf("%d:%d = %d Hour and %d Minutes", hour,minute,hour, minute);
    return 0;
}