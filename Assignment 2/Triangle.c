#include<stdio.h>
int main()
{
int  s1=100,s2=20,s3=10 ;
if(s1==s2 && s2==s3)
{
    printf("Equilateral Triangle");
}
else if (s1==s2  || s1 == s3)
{
    printf("Isocales Triangle");
}
else {
    printf("Scalen Triangle");
}
return 0;
}