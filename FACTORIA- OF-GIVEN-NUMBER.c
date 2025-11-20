#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;  // Use long long for bigger numbers

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for(i = 1; i <= n; i++) {
        factorial *= i;  // Multiply factorial by each number from 1 to n
    }

    printf("The factorial of %d is %lld\n", n, factorial);
    return 0;
}