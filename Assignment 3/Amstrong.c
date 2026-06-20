#include<stdio.h>
int main()
{
int temp ,sum=0,digit,n=153;
temp = n;

  while (temp != 0) {//it checks digit is not 0
        digit = temp % 10; //no divided by 10 and took reminder
        sum = sum + (digit * digit * digit);
        temp = temp / 10;//no divided by 10 and took dividation 
  }
  if(sum==n){
    printf("Amstrong Number");
  }else{
    printf("Not Amstrong ");
  }


    return 0;
}