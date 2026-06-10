#include<stdio.h>
void main()
{int minutes,rem,hours;
    printf("enter the minutes");
    scanf("%d",&minutes);
    hours=minutes/60;
    rem = minutes%60;
    printf("hours are %d and remaining minutes  are %d ",hours,rem);
    


}