#include<stdio.h>
int main(){
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    int sum =0;
    int lastdiget=0;
    while(n>0){
        lastdiget=(n%10);
        if(lastdiget%2!=0){
        sum=sum + lastdiget;
        }
        n=n/10; 
           
    }
    printf("The sum of odd diget are:%d",sum);
    return 0;
}