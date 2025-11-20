#include<stdio.h>
int main(){
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    int sum =0;
    int lastdigit=0;
    int r=0;

    while(n>0){
        lastdigit=(n%10);
        sum=sum + lastdigit;
        r = r * 10 + lastdigit;
        n=n/10; 
 
    }
    printf("The sum of sum diget are:%d\n",sum);
    printf("The revarce of  diget are:%d",r);
    return 0;
}
