#include<stdio.h>
int main()
{
float no1,no2;
float add,sub,mul,div;
int ch;

printf("Enter No 1 ");
scanf("%d",&no1);
printf("Enter No 2 ");
scanf("%d",&no2);
printf("\n");

printf("enter your choice \n1 for Addition  \n2 for Substraction\n3 for Multiplication\n4 for Division  ");
printf("\n");
scanf("%d",&ch);
if(ch==1){
    printf("\n");
    printf("Addition of two numbers is %f",no1+no2);

}
else if (ch==2){
    
    printf("Substraction of two numbers is %f",no1-no2);
}
else if (ch==3){
    
    printf("Multiplication of two numbers is %f",no1*no2);
}

else if (ch==4){
    
    printf("Division of two numbers is %f",no1/no2);
}
      return 0;
} 