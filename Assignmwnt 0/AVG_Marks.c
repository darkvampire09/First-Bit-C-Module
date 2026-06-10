#include<stdio.h>
int main()
{
float p,a,b,c,d,e,total  ;

printf("enter marks of 5 subjects");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
total =a+b+c+d+e;
printf("total Marks are %f",total);
p= (total/500)*100;

    
printf("the percentage is %f",p);
    return 0;
}