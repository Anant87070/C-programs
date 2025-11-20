#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;    // access value at address x
    *x=*y;          // assign value at address y to address x
    *y=temp;        // complete the swap
    return ;
}
int main(){
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("Befor swapping\n a=%d\n b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping\n a=%d\n b=%d\n",a,b);
    return 0;
} 