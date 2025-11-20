#include<stdio.h>
int main(){
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1){
        printf("Number is not prime\n");
        return 0;
    }

    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            flag = 1; // n is not prime
            break;    // stop checking further
        }
    }

    if(flag == 0){
        printf("Number is prime\n");
    } else {
        printf("Number is not prime\n");
    }

    return 0;
}