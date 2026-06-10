#include<stdio.h>
int main()
{
int Age  ;
printf("enter the Age ");
scanf("%d",&Age);
if (Age > 18){
    printf("Person is eligible to vote");
}
    else{
        printf("Person is Not eligible to vote");
    }

    return 0;
}