#include<stdio.h>
int main()
{
char character  ;
printf("enter the Character ");
scanf("%c",&character);
if (character =='a' || character == 'e' || character == 'i' || character == 'o' || character=='u'){
    printf("character is vovel");
}
    else{
        printf("Character is consonent");
    }

    return 0;
}