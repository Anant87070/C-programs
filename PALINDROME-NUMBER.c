#include <stdio.h>

int main() {
    int n, r, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0) {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }

    if(temp == rev)
        printf("%d is a palindrome number.\n", temp);
    else
        printf("%d is not a palindrome number.\n", temp);

    return 0;
}