#include<stdio.h>
int main()
{
int yr =2000 ;
    if (yr%4==0 && yr%100 !=0 || yr %400==0){
        printf("year is leap year ");
    }
    else {
        printf("year is not leap year");
    }
    return 0;
}