#include<stdio.h>
int main()
{
    int first,last ,sum;
    int no=12345;
    first=no%10;
    while (no>=10){
    no=no/10;
   
}
last=no;
 printf("first ddigit is %d and last digit is %d and sum is %d",first,last,first+last);
    return 0;
}