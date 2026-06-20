#include<stdio.h>
int main()
{
int sum=0,n=28,i=1  ;
while (i<=n/2){
    if(n%i==0)
    sum=sum+i;
    i++;


}
if(sum==n){
    printf("Number is Strong ");

}else{
        printf("Number is not Strong ");
    }
    return 0;
}