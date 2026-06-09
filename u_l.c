#include<stdio.h>
int main()
{
char c   ;
printf("Enter the character ");
scanf("%c",&c);
    if (c=='A'||  c=='B'||c=='C'||c=='D'||c=='E'||c=='F'||c=='G'||c=='H'||c=='I'||c=='J'||c=='K'||c=='L'||c=='M'||c=='N'||c=='O'||c=='P'||c=='Q'||c=='R'||c=='S'||c=='T'||c=='U'||c=='V'||c=='W'||c=='X'||c=='Y'||c=='Z')
    {
        printf("%c Character is Uppercase",c);
    }
    else{
        printf("%c character is lowercase");
    }
    return 0;
}