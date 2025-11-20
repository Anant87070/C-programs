#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return ;
}
int main(){
    int a,b;
    printf("Enter tne value of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("Befor swapping\n a=%d\n b=%d\n",a,b);
    swap(a,b);
    printf("After swapping\n a=%d\n b=%d\n",a,b);
    printf("The value of a and b is %d %d\n",a,b);
    return 0;
}