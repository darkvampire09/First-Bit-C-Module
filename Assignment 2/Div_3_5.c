#include<stdio.h>
int main()
{
int  no= 55;
if(no %3==0 && no % 5 ==0)
{
    printf("Divisible By 3 & 5 ");
}
else if (no % 5 ==0)
{
    printf("Divisible By 5");
}
else{
    printf("Divisible By  3 ");
}
return 0;
}