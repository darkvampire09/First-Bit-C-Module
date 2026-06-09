#include<stdio.h>
int main()
{
int no  ;
printf("enter the number ");
scanf("%d",&no);
if (no%2==0){
    printf("%d is Even Number",no);
}
    else{
        printf("%d is odd Number",no);
    }

    return 0;
}