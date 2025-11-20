#include<stdio.h>
int main(){
    int m;
    printf("Enter the num of row:");
    scanf("%d",&m);
    int n;
    printf("Enter the num of coluam:");
    scanf("%d",&n);
    printf("Enter all the element;");
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    //transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[j][i]);
            
        }
        printf("\n");
    }
    return 0;
}