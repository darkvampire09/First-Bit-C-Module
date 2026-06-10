#include<stdio.h>
int main()
{
int  no =521 ;
int q1,r1,r2 ,r3,q2;
r1=no%10;
q1=no/10;
r2=q1%10;
q2=q1/10;
if (r1==q2){
    printf("%d is 3 digit  palindrome number ",no);
}
else {
    printf("%d is not palindrome number",no);
}


    return 0;
}