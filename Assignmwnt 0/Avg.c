#include<stdio.h>
int main()
{
int a,b,c,d,e  ;
float avg;
printf ("enter 5 numbers you want Average of ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
avg =(a+b+c+d+e)/5;
    printf("the average of five numbers is %f",avg);
    return 0;
}