#include <stdio.h>

int main() {
    int n, temp, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
//121  
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if (rev == n)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}