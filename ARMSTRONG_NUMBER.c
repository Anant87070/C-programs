#include<stdio.h>
int main(){
    int n,r,sum=0,temp,digits=0;

    printf("Enter a num: ");
    scanf("%d",&n);

    temp=n;
    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
     // Calculate sum of each digit raised to the power of digits
    while (temp != 0) {
        r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}