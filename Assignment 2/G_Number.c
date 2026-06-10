#include<stdio.h>
int main()
{
int  no1=10,no2=20,no3=100 ;
if( no1 > no2 && no2 > no3)
{
    printf("No1 is greater");
}
else if (no2 > no1 && no2 > no3)
{
    printf("No2 is greater");
}
else {
    printf("No3 is greater");
}
return 0;
}