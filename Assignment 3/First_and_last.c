#include<stdio.h>
int main()
{/*Find Sum of first and last digit of given number. 
Input: n = 12345 
Output: 6 (1 + 5) */
int r1,q1;
int num=12345;
q1=num;
while (num>0){
   r1=num%10000;
   printf("%d",r1) ;
  
} 

    return 0;
}