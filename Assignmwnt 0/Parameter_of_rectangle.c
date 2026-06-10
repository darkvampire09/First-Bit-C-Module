#include<stdio.h>
int main()
{
float length , width ,parameter;
printf("enter the length and width of rectangle");
scanf("%f%f",&length,&width);

  parameter=2 *(length+width);  
printf("parameter of rectangle is %f",parameter);
    return 0;
}