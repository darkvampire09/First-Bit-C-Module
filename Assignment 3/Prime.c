#include <stdio.h>

int main() {
    int n, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime");
    }
    else {
        while (i < n) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
            i++;
        }

        if (flag == 0)
            printf("Prime Number");
        else
            printf("Not Prime Number");
    }

    return 0;
}