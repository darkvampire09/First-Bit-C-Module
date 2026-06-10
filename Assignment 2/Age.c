#include<stdio.h>
int main()
{
int  Age = 18;
if( Age >60)
{
    printf("Senior");
}
else if (Age>=20 || Age >60)
{
    printf("Adult");
}
else if(Age>=12 && Age<20 ) {
    printf("Teen");
}

else{
    printf("Child");
}
return 0;
}