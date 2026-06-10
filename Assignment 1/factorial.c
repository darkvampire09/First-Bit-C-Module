#include<stdio.h>
int main()
{
int  no=5 ,i=1;
int fact=1;

while(i <= no){// i is small than no so i be 1 2 3 4 5 ,
    fact = fact*i; // fact is 1 iinitially then fact be 1=1*1,1=1*2,2=2*3 & so on till 5
   i++;
}   printf("%d",fact);
    return 0;
}