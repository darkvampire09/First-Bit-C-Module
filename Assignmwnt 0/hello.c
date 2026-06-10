#include <stdio.h>
int main()
{
    int no =153;
    int r1,r2;
    int sum;
    r1=no%10;
    r2=no/10;
    sum = r1+r2;
    printf("%d",sum);
    return 0;
}