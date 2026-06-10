#include<stdio.h>
int main()
{
     char n=2,y=1;
int choice=y;
int purchase=400 ,price,disc;

if(choice==y && purchase>500)
{
    disc= purchase*0.20;
     price=purchase-disc;
    printf("You got 20 %% discount  and final price is %d",price);
}
else if (choice ==y)
{
    disc=purchase*0.10;
    price=purchase-disc;
    printf("You got 10 %% discount  and final price is %d",price);
}
else if (choice ==n && purchase>600){
     disc=purchase*0.15;
    price=purchase-disc;
    printf("You got 15 %% discount  and final price is %d",price);
}
else{
    printf("Your Final Price is %d",purchase);
}
return 0;
}